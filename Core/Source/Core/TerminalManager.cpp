#include "TerminalManager.h"
#include <unistd.h>

TerminalManager::TerminalManager() {
    tcgetattr(STDIN_FILENO, &orig_termios);
    enableRawMode();
}

TerminalManager::~TerminalManager() {
    disableRawMode();
}

void TerminalManager::enableRawMode() {
    struct termios raw = orig_termios;
    raw.c_lflag &= ~(ECHO | ICANON);
    tcsetattr(STDIN_FILENO, TCSANOW, &raw);
}

void TerminalManager::disableRawMode() {
    tcsetattr(STDIN_FILENO, TCSANOW, &orig_termios);
}
