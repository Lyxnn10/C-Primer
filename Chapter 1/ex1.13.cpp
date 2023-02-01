#include <iostream>

int main() {
  int sum = 0;
  for (int i = 50; i <= 100; ++i)
    sum += i;
  std::cout << "Sum of 50 to 100 inclusive is "
            << sum << std::endl;

  for (int val = 10; val >= 0; --val)
    std::cout << val << " ";
  std::cout << std::endl;

  return 0;
}
