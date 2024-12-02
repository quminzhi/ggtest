# GGTEST

## Prerequisite

You have to have these tools installed on your machine:

- CMake
- C compilation tools

## Usage

- Build project with `make build` or manually execute `cmake -S . -B build && cmake --build build` (refer to Makefile).
- Run with `make run`, which will build and run test.
- Clean build cache by running `make clean`.

## Examples

We have two examples in the applet: calculator and cirqueue.

- `test_calc`: test functionality of each method with MACRO defined by google test framework.
- `test_cirqueue`: test functionality of each method with google test.
- `test_run_app`: test output by redirecting output to a string buffer and making comparation.

## Add Customized Library

Add customized library by providing source file in `src` directory and test file `test_xxx.cpp` in `test` directory. Add library or executable in CMake build system, `CMakeLists.txt` under `src` and `test` directory specifically.

Customize compilation flags in `etc/cflags.cmake`.