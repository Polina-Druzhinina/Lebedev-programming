#include <iostream>
using namespace std;
int main(void)
{
    int count = 0;
    for (int i = 1000; i <= 9999; i++)
    {
        int mas[10] = {0};
        int num = i;
        bool flag = true;
        for (int j = 0; j < 4; j++)
        {
            int d = num%10;
            if (mas[d]){
                flag = false;
                break;
            }
            else mas[d] = 1;
            num/=10;
        }

        if (flag)
        {
            count ++;
            //cout<<i<<" ";
        }

    }
    cout<<count; 
    return 0;
}
