// Joshua Rees
// jrees@csu.fullerton.edu
// @JoshuaRees
// Partners: @irobles27

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() < 2) {
    std::cerr << "error: you must supply atleast one argument" << std::endl;
    return 1;
  }
  // Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  float sum{0.0};

  for (int i = 1; i < argc; i++) {
    float number = std::stof(argv[i]);
    sum = sum + number;
  }
  // After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  float average{0.0};

  average = sum / (argc - 1);

  // Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  std::cout << "average = " << average << std::endl;

  return 0;
}
