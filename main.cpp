// write your code here
// Kourtney Smith J00951715 11/8/2022
#include <iostream>
#include <cmath>
using namespace std;

int a, b, c;
int root1;
int root2;
double discriminant;
 
int main() {
cin >> a>>b>>c;

discriminant = b*b - 4*a*c;
 root1 = (-b + sqrt (discriminant))/ (2 * a);
root2 = (-b - sqrt (discriminant))/ (2 * a);
  
if (discriminant == 0){
cout << "The single root is "<< root1<<endl;
}

else if(discriminant > 0){
cout << "Two real roots\n"; 
   cout <<"-First root "<<root1 << endl;
cout <<"-Second root " << root2 << endl;
}

else if (discriminant < 0){
cout << "Complex roots"<< endl;

}

return 0;
}
