#include <iostream>
using namespace std;
#include <cmath>
double f(double x)
{
    /*return pow(x, 4);*/
    /*return tan(x);*/
    return exp(x); /*функции*/
}
int main(void)
{
    bool even = true;
    bool odd = true;

    for (double x = -5.; x <= 5.; x += 0.1){
        double dy = f(x);
        double dy_1 = f(-x);

        if(fabs(dy-dy_1)>1e-6){
            even = false;
        }
        if(fabs(dy+dy_1)>1e-6){
            odd = false;
        }
    }

    if (even){
        cout << "Функция четная" <<endl;
    }

    else if (odd){
        cout << "Функция нечетная" <<endl;
    }

    else{
        cout << "Функция ни четная, ни нечетная" <<endl;
    }

    return 0;
}
