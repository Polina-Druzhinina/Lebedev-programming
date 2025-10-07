#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    int k, p, r;
    cout << "Enter credit(k): ";
    cin >> k;
    cout << "Enter percentages(p): ";
    cin >> p;
    cout << "Enter profit(r): ";
    cin >> r;

    int iyears = 0;
    bool flag = false;

    for (int i = 1; i <= 100; i++){
        double ddebt = k * pow(1 + p / 100.0, i);
        double dincome = r*i;
        if (dincome >= ddebt){
            iyears = i;
            flag = true;
            break;

        }
    }

    if (flag){
        cout << "The amount will be accumulated in " << iyears << " years"<<endl;
    }
    else{
        cout << "The amount will not accumulate" << endl;
    }


    
}
