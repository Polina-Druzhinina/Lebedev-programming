#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cout<<"Введите максимум: ";
    cin >> n;

    for (int i = 6; i <= n; i++){
        int summ = 1;
        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                summ += j;
                if (summ > i){
                    break;
                }
            }
        }
        if (summ != i)
        {
            continue;
        }
        cout << i << " =1";
        summ = 1;
        for (int j = 2; j <= i/2; j++)
        {
            if (i%j==0)
            {
                cout << " + ";
                cout << j;
                summ += j;
                if (summ == i)
                {
                    cout<<endl;
                    break;
                }
            }
        }
        
    }
    return 0;
}