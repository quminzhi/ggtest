#include <iostream>

#include "calculator.h"

int run_app (int argc, char** argv) {
    if (argc < 0) {
        return -1;
    }

    if (argv != nullptr) {
        for (int i = 0; i < argc; i++) {
            std::cout << argv[i] << std::endl;
        }
    }

    Calculator calc;
    std::cout << "add(10,4): " << calc.add(10,4) << std::endl;
    std::cout << "sub(10,4): " << calc.sub(10,4) << std::endl;
    std::cout << "mul(10,4): " << calc.mul(10,4) << std::endl;
    std::cout << "div(10,4): " << calc.div(10,4) << std::endl;
    std::cout << "mod(10,4): " << calc.mod(10,4) << std::endl;
    return 0;
}