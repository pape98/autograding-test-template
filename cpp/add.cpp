// Self-checking program: returns non-zero on failure (for the C++ / run-command
// grader). Build + run with: g++ add.cpp -o a.out && ./a.out
#include <iostream>

int add(int a, int b) {
  return a + b;
}

int main() {
  if (add(2, 3) != 5 || add(-4, 2) != -2 || add(0, 7) != 7) {
    std::cerr << "FAIL\n";
    return 1;
  }
  std::cout << "All C++ tests passed\n";
  return 0;
}
