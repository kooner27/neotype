#include "Core/Core.h"
#include "TypingGame.h"

int main() {
    Core::PrintHelloWorld();
    TypingGame game("The quick brown fox jumps over the lazy dog");
    game.run();
    return 0;
}