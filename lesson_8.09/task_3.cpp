#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double k, p, s;
    cout<< "Enter rubles(k): ";
    cin >> k;
    cout<< "Enter percentages(p): ";
    cin >> p;
    cout<< "Enter summa(s): ";
    cin >> s;

    double dyears =  (log(s / k) / log(1 + p / 100.0)) / 12.0 ;
    int iyears = int(dyears)+1;



    cout << "After " << iyears << " years" << endl;

    return 0;
}