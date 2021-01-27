cmake_minimum_required(VERSION 3.11)
set(PROJECT_VERSION 1.0.0)
project(ftp-client VERSION ${PROJECT_VERSION})

# Configure a header file to give access to verion number
configure_file(include/ftp-client/config.h.in include/ftp-client/config.h)

# Add external libraries 
add_subdirectory(lib/googletest)

# Setup Exe
set(exeName ftp-client_${PROJECT_VERSION})
add_executable(${exeName} src/main.cpp)

