#include <iostream>
using namespace std;
#include <cmath>
#define _USE_MATH_DEFINES
double f(double x)
{

    /*для T = 2*M_PI*/
    return (1./x)*sin(x);
}

int main(void)
{

    double T_2 = 2*M_PI; 
    bool flag = true;
    

    for (double x = 0.; x <= 5.*T_2; x += 0.1){
        double dy = f(x);
        double dy_T = f(x+T_2);
        if (fabs(dy-dy_T)>1e-6){
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