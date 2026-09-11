#include <algorithm>
#include <iostream>
#include <vector>
int main() {
  std::vector<int> numbers(
      8); // making an array of 8 elements and taking an input for it
  for (int i = 0; i < 8; i++) {
    std::cin >> numbers[i];
  }
  int minimum = numbers[0];
  int maximum = numbers[0];

  for (int i = 1; i < 8; i++) { // finding max using the lib
    maximum = std::max(numbers[i - 1], numbers[i]);
  }
  for (int i = 1; i < 8; i++) { // using the brute thingy to find the min cause
                                // there is no lib i think so
    if (numbers[i - 1] > numbers[i])
      minimum = numbers[i - 1];
  }
  std::cout << minimum << std::endl;
  std::cout << maximum << std::endl;
  int maxindex = 0;
  for (int i = 0; i < 8; i++) { // finding the index of max
    if (numbers[i] == maximum) {
      maxindex = i;
      break;
    }
  }
  int minIndex = 0;
  for (int i = 0; i < 8; i++) { // finding the index of min
    if (numbers[i] == minimum) {
      minIndex = i;
      break;
    }
  }
  std::cout << "Max Index : " << maxindex << std::endl;
  std::cout << "Min Index : " << minIndex << std::endl;
}
