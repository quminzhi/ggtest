#include "calculator.h"
#include "cirqueue.h"
#include <iostream>

using namespace std;

int run_app(int argc, char **argv) {
  if (argc < 0) {
    return -1;
  }

  if (argv != nullptr) {
    for (int i = 0; i < argc; i++) {
      std::cout << argv[i] << std::endl;
    }
  }

  Calculator calc;
  std::cout << "add(10,4): " << calc.add(10, 4) << std::endl;
  std::cout << "sub(10,4): " << calc.sub(10, 4) << std::endl;
  std::cout << "mul(10,4): " << calc.mul(10, 4) << std::endl;
  std::cout << "div(10,4): " << calc.div(10, 4) << std::endl;
  std::cout << "mod(10,4): " << calc.mod(10, 4) << std::endl;

  CirQueue que(10);
  que.enqueue(1);
  que.enqueue(2);
  cout << que.dequeue() << endl;

  return 0;
}