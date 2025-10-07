#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>
/*исправить*/
int main(void)
{
    int a, b;

    cout<<"Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    double eps = 0.05;
    /*координаты точек*/
    for (int y = b; y >= -b; y--) {
        for (int x = -a; x <= a; x++) {
            double dres = (double)x * x / (a * a) + (double)y * y / (b * b);
            if (fabs(dres - 1.0) < eps) {
                cout << setw(8) << "(" << x << "," << y << ")";
            } else {
                cout << setw(8)<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}