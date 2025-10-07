#include <iostream>
using namespace std;
#include <cmath>
int main(void)
{
    int m, x;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter x: ";
    cin >> x;
    
    double dfirst = pow(1+x, m);

    double summ = 0.0;
    double c = 1.0;
    for (int i = 0; i <= m; i++){
        if (i > 0){
            c = c * (m - i + 1) / i;
        }
        summ += c*pow(x, i);

    }

    cout << "Непосредственное вычисление:" << dfirst << endl;
    cout << "Рекуррентное соотношение: " << summ<< endl;
    return 0;
    
}