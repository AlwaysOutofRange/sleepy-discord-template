cmake_minimum_required(VERSION 3.18)

project(sleepy-discord-test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(sleepy-discord-test
    main.cpp
    src/Client.cpp
    src/Client.h
    src/utils/CommandHandler.h
    src/utils/inferfaces/Command.h
    src/commands/TestCommand.h
    src/commands/TestCommand.cpp)

add_subdirectory(libs/sleepy-discord)
target_link_libraries(sleepy-discord-test sleepy-discord)
