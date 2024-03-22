#include <iostream>
#include <iomanip>

double mypower(double x, double n) {
  double result = 0;
  double reg;
  for (int i=1; i<=n; i++) {
    reg = 1;
    for (int j=1; j<=i; j++) {
      reg *= x;
    }
    
    result += 1.0 / reg;
  }
  return result;
}

int main() {
  double x, n;
  while (1) {
    std::cout << "Input x, n: ";
    std::cin >> x >> n;
    if (x > 0 && n > 0) break;
  }
  
  std::cout << "myPower(" << x << ", " << n << ")=";
  std::cout << std::fixed << std::setprecision(4) << mypower(x, n);
  return 0;
}
