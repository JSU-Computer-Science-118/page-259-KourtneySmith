// write your code here
// Kourtney Smith J00951715 11/8/2022
#include <iostream>
#include <cmath>
using namespace std;

int rootl;
int root2;
double discriminant;
cout <‹ "Enter the value of a,b,c: "; cin >> a>>b>>c;

discriminant = pow(b,2) - 4 * a * c;
root1 = (-b + sqrt (discriminant))/ (2 * a);
root2 = (-b - sqrt (discriminant))/ (2 * a);

if (discriminant == 0){
cout <‹ "The single root is "‹‹rooti‹‹endl;
}

else if(discriminant > 0){
cout << "Two real roots\n": 
   cout <<"-First root "<<root1 << mIn";
cout <<"-Second root " <‹ root2 <‹ "\n";
}

else if (discriminant < 0){
cout << "Complex roots\n";

}

return 0;
