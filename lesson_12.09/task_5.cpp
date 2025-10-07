#include <iostream>
#include <iomanip>
using namespace std;
/*исправленное*/
int main(void)
{
    int k;
    cout << "Enter kilometers (k): ";
    cin >> k;

    cout << "mili" << "\t" << "km"<<endl;
    
    for (int km = 1; km <= k; km++) {
        double miles = km / 1.609344;
        cout << fixed << setprecision(6) << miles << "\t" << (double)km << endl;
    }

    for (int m = 1; ; m++) {
        double km = m * 1.609344;
        if (km > k) break;
        cout << fixed << setprecision(6) << (double)m << "\t" << km << endl;
    }

    return 0;

}
