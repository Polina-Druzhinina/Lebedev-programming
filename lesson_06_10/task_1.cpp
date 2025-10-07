#include <iostream>
using namespace std;
int main(void)
{
    int n, m;
    cout<<"Enter n: ";
    cin >> n;
    cout<<"Enter m: ";
    cin >> m;
    int count = 0;
    if (n > 0 && m >= 0 && m <= 9){
        while (n != 0)
        {
            int last = n % 10;
            if (last == m) count ++;
            n /=10;
        }
        cout << "Всего "<<m<<" чисел "<<count;
    }
    else cout << "Неверно введено";
    
    return 0;
}