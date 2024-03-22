#include <iostream>

int fib(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  int n1 = 0, n2 = 1, n3 = 0;
  for (int i=2; i<n; ++i) {    
    n3=n1+n2;   
    n1=n2;
    n2=n3;
  }

  return n1 + n2;
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
