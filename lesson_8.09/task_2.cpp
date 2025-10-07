#include <iostream>
using namespace std;

int main(void)
{
    double rad;
    cout << "Enter rad: ";
    cin >> rad;

    int igrad = rad * (180/3.14);


    cout << "Degree measure from radians: " <<igrad << endl;

    return 0;
}