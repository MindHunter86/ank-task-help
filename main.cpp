#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
  int R;
  float P = 3.14;

  cout << "Please enter a value: ";
  cin >> R;
  cout << "The value you entered is " << R << ".\n";
  cout << "L is " << 2 * P * R << ".\n";
  cout << "S is " << P * pow(R, 2) << ".\n";
  return 0;
}
