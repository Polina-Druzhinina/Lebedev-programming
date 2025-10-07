#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>
/*цепная дробь*/
int main(void)
{
    double e = M_E;
    double val = 0.;
    double eps = 1e-6;
    int i = 1;


    while (true)
    {
        int x;
        char op;

        if (i==1) x=1;
        else if (i==2) x = 1;
        else if (i==3) x = 2;
        else if (i==4) x = 3;
        else if (i%2==1) x=2;
        else x = 5 + (i/2-2)*2;
        if (i%2==1) op = '+';
        else op = '-';

        if (val==0) val = x;
        else{
            double frac = 1.0/val;
            if(op =='+') val = x+frac;
            else val=x-frac;
        }

        if(fabs(val-e)<eps) break;
        i++;
    }
    cout<<"Настоящее е = " << e <<endl;
    cout<<"Приближенное e = " << val <<endl;

}