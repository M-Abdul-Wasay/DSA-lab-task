#include <iostream>

class Student { // creating a class as described in the lab with all the public
                // int values as well as the function
public:
  int roll_numbers;
  int marks;

  void Display() {
    std::cout << roll_numbers << "         " << marks << std::endl;
  }
};

int main() {

  Student s1, s2; // making two objects s1 and s2 for the class Student right
                  // and giving them the values
  s1.roll_numbers = 1;
  s1.marks = 75;
  s2.roll_numbers = 2;
  s2.marks = 90;
  // Displaying the output before changes
  std::cout << "Object" << "   " << "RollNumbers" << "   " << "Marks"
            << std::endl;
  std::cout << "s1" << "             ";
  s1.Display();
  std::cout << "s2" << "             ";
  s2.Display();

  s1.marks = 80; // changing the value to 80 as in the lab task
                 // so only the marks of s1 will change cause making the
                 // object gives them there own variables that they can changes
                 // independently right

  std::cout << "----After changes---" << std::endl;
  std::cout << "Object" << "   " << "RollNumbers" << "   " << "Marks"
            << std::endl;
  std::cout << "s1" << "           ";
  s1.Display();
  std::cout << "s2" << "            ";
  s2.Display();
  return 0;
}
