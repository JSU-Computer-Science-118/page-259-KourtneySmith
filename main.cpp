// write your code here
// Kourtney Smith J00951715 11/8/2022
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int a, b, c;
  float discr, root1, root2;
  cout << "Enter the coefficient of x^2: ";
  cin >> a;
  cout << "Enter the coefficient of x: ";
  cin >> b;
  cout << "Enter the constant term: ";
  cin >> c;
  cout << endl;
  discr = b*b - 4*a*c;
  if (discr > 0) {
    root1 = (-b + pow(discr,0.5)) / 2*a;
    root2 = (-b - pow(discr,0.5)) / 2*a;
    printf ("Two real roots - First Root - Second Root -", root1, root2); }
  if (discr == 0) {
    root1 =(-b + pow(discr,0.5)) / 2*a;
    printf ("Single Root is ", root1);}
if (discr < 0) {
  cout << "Complex Roots" << endl;
}
  return 0;
  }
