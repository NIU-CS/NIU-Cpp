#include <iostream>

int fib(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  return (fib(n-1)) + (fib(n-2));
}

int main() {
  int n;
  while (1) {
    std::cout << "Fibonacci n: ";
    std::cin >> n;
    if (n >= 0) break;
  }
  
  std::cout << "fib(" << n << ") = " << fib(n);
  return 0;
}
