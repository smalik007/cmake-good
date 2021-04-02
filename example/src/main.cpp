#include <Calculator.hpp>
#include <iostream>

using namespace std;

int main() {
  calculator::printVersion();
  cout << "Version from main : " << CALCULATOR_VERSION << endl;
  cout << "sum (3,4) : " << calculator::sum<int>(3, 4) << endl;
  cout << "sum (3.2,4.7) : " << calculator::sum(3.2, 4.7) << endl;
  return 0;
}