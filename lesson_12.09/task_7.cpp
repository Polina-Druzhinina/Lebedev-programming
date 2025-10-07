#include <iostream>
using namespace std;
#include <cmath>
int main(void)
{
    double eps;
    cout << "Enter eps: ";
    cin >> eps;

    for (double x = 1; x > 1e-15; x*=0.5){
        double value = sin(x) / x;
        if (fabs(value - 1) < eps){
            cout<<"Условие выполнено при x = "<<x<<endl;
            break;
        }

    }
    return 0;
}