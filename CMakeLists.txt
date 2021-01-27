cmake_minimum_required(VERSION 3.11)
set(PROJECT_VERSION 1.0.0)
project(ftp-client VERSION ${PROJECT_VERSION})

# Configure a header file to give access to verion number
configure_file(include/ftp-client/config.h.in include/ftp-client/config.h)

# Add external libraries 
add_subdirectory(lib)

# Setup ftp-client srcs
set(FTP_SRCS 
  src/test.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/include/ftp-client/config.h
)

# Make sure to include dynamic files
include_directories(${CMAKE_CURRENT_BINARY_DIR}/include)

# Declare library
add_library(ftp-client STATIC ${FTP_SRCS})


# Unit tests
set(FTP_UNIT_TEST_SRCS
src/test/main.cpp
)

add_executable(ftp_test ${FTP_UNIT_TEST_SRCS})
target_link_libraries(ftp_test ftp-client gtest)