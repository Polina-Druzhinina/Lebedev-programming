#include <iostream>
using namespace std;
#include <cmath>
int main(void)
{
    int grad, minute, second;
    cout<<"Enter grade: ";
    cin>>grad;
    cout<<"Enter minute: ";
    cin>>minute;
    cout<<"Enter seconds: ";
    cin>>second;

    int abs_grad = sqrt(grad*grad);
    double fdeg = abs_grad+(minute/60.) + (second/3600.);
    double fradians = fdeg*(3.14/180.);
    cout << "The value in radians: " << fradians << endl;

    return 0;
}
