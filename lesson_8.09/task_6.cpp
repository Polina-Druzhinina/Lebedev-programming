#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, r;
    cout << "Enter r: ";
    cin >> r;
    cout << "Enter a: ";
    cin >> a;

    double h = (sqrt(3.0) / 2.0) * a;
    int n = floor((h - 2 * r) / (sqrt(3.0) * r) + 1);
    int N = n * (n + 1) / 2;
    cout << "Number of laps: "<< N << endl;

    return 0;
}