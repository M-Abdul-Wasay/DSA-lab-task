#include <iostream>
#include <vector>
void sum() {
  std::vector<int> numbers(5); // making an array of 5 integers
  for (int i = 0; i < 5; i++)  // creating a loop to get the input from the user
  {
    std::cin >> numbers[i];
  }
  int total = 0;
  for (int n : numbers) // making a loop to print the elements of the array
  {
    total += n;
  }

  std::cout << total << std::endl;
}

int main() {
  int n; // taking inputs for the number of test cases
  std::cin >> n;
  while (n--) {
    sum(); // running the function 3 times
  }
  return 0;
}
