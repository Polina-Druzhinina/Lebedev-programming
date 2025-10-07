#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>
/*первый способ вычисления e*/
int main(void)
{
    double e = M_E;
    double summ = 2.0;
    int n = 2;
    double eps = 1e-12;
    double tern = 1.0;
    while (tern > eps){
        int f = 1;
        for (int i = 1; i <= n; i++){
            f *= i;
        }
        tern = 1.0/f;
        summ += tern;
        n++;
    }
    cout << "Значеник e из цикла = " << summ << endl;
    cout << "Реальное значение e = " << e << endl;
    cout << "Разница = " << fabs(summ - e) << endl;
    cout << "n = " << n << endl;
}