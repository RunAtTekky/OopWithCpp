#include <iostream>
#include <vector>

int main() {
  std::cout << "Varun";
  std::vector<long long> vec;

  for (int i=0; i<10; i++) {
    vec.push_back(i);
  }
  for (auto &e: vec) {
    std::cout << e << " ";
  }
}
