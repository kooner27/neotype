# Create an executable target for App with the specified source files
add_executable(App Source/App.cpp Source/TypingGame.cpp)

# Link Core library to App
target_link_libraries(App PRIVATE Core)

# Include Core headers so App can find Core/Core.h
target_include_directories(App PRIVATE ${CMAKE_SOURCE_DIR}/Core/Source)


# Set any specific compiler options or flags if needed
target_compile_options(App PRIVATE -Wall -Wextra -Wpedantic)
