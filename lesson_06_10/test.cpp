#include <iostream>
using namespace std;
int main(void)
{
    float x =11.5;
    int a;
    a = *((int*)&x);
    cout<<a;
    return 0;
}