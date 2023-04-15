#include <iostream>
using namespace std;

int main() {
    float a=0, b=0, x=0, y=0;
    cin>>a;
    cin>> b;
    cin>> x;
    cin>> y;
    float z1= a*x-b*y, z2=a*x*x- b*y, z3=a*x + b*y*y;
    if ((x<0) && (y>0)){
        cout<< z1;
    } else if ((x>=0)&&(y<=0)){
        cout<< z2;
    } else {
        cout<<z3;
    }
   return 0;
}
