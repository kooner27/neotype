#include "TypingGame.h"
#include <iostream>
#include <chrono>
#include <unistd.h>

TypingGame::TypingGame(const std::string& text)
    : textToType(text), currentPosition(0), terminal() {}

void TypingGame::displayText() {
    std::cout << "\r";
    for (size_t i = 0; i < textToType.size(); ++i) {
        if (i < userInput.size()) {
            if (userInput[i] == textToType[i]) {
                std::cout << userInput[i];
            } else {
                std::cout << "\033[31m" << userInput[i] << "\033[0m";
            }
        } else {
            std::cout << "\033[2m" << textToType[i] << "\033[0m";
        }
    }
    std::cout << std::flush;
}

void TypingGame::calculateWPM() {
    // Calculate and print WPM based on user input
}

void TypingGame::run() {
    displayText();
    char c;
    while (currentPosition < textToType.size() && read(STDIN_FILENO, &c, 1) == 1) {
        if (c == 127 || c == 8) {
            if (!userInput.empty()) {
                userInput.pop_back();
                --currentPosition;
            }
        } else {
            userInput += c;
            ++currentPosition;
        }
        displayText();
    }
    calculateWPM();
}
