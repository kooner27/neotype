# Create a static library target for Core
add_library(Core STATIC Source/Core/Core.cpp Source/Core/TerminalManager.cpp)

# Specify the include directory for Core
target_include_directories(Core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Source/Core)

# Set any specific compiler options or flags if needed
target_compile_options(Core PRIVATE -Wall -Wextra -Wpedantic)
