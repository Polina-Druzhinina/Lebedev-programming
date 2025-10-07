#include <iostream>
using namespace std;
#include <cmath>
#define _USE_MATH_DEFINES
double f(double x)
{
    /* для T = M_PI */
    return sin(x)*sin(x);
    /*return tan(x);*/
    
}

int main(void)
{
    double T = M_PI; /*для этой задачи*/
    bool flag = true;

    for (double x = 0.; x <= 5.*T; x += 0.1){
        double y = f(x);
        double y_T = f(x+T);
        if (fabs(y-y_T)>1e-6){
            flag=false;
        }
     }


     if (flag){
        cout << "Периодическая функция" << endl;
     }
     else{
        cout << "Непериодическая функция" << endl;
     }
     return 0;


}