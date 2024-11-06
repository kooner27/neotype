#ifndef TYPING_GAME_H
#define TYPING_GAME_H

#include <string>
#include "TerminalManager.h"

class TypingGame {
private:
    std::string textToType;
    std::string userInput;
    size_t currentPosition;
    TerminalManager terminal;

    void displayText();
    void calculateWPM();

public:
    TypingGame(const std::string& text);
    void run();
};

#endif // TYPING_GAME_H
