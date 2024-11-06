#ifndef TERMINAL_MANAGER_H
#define TERMINAL_MANAGER_H

#include <termios.h>

class TerminalManager {
private:
    struct termios orig_termios;

public:
    TerminalManager();
    ~TerminalManager();
    void enableRawMode();
    void disableRawMode();
};

#endif // TERMINAL_MANAGER_H
