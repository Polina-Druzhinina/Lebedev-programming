#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>
int main(void)
{
    double eps;
    cout << "Enter eps: ";
    cin >> eps;
    double e = M_E;

    for (int n = 1; n <= 1e7; n++){
        double dres = pow((1.0 + 1.0/n), n);
        if (fabs(dres-e) < eps){
            cout << "Выражение отличается от "<< e << " менее чем на заданную погрешность " <<eps<< " при n = " << n << endl;
            break;
        }


    }
    return 0;
}