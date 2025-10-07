#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    cout << "Enter hours: ";
    cin >> h;
    cout << "Enter minute: ";
    cin >> m;
    cout << "Enter seconds: ";
    cin >> s;

    int iround_minutes = m + (s + 30) / 60;  
    h = (h + iround_minutes / 60) % 24;      
    int iround_m = iround_minutes % 60;
    int iround_h = (h + (m * 60 + s + 1800) / 3600) % 24;

    cout << "Rounded up to minutes: " << h << "h " << iround_m << "min"<<endl;

    cout << "Rounded up to hours " << iround_h << "h"<<endl;

    return 0;
}