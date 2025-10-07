#include <iostream>
using namespace std;
int main(void)
{
    int a, b, c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    double fx = -(b/(2.0*a));
    double fy = a*fx*fx + b*fx + c;
    cout<<"x0: "<< fx << "; y0: "<< fy << endl;
    return 0;

}