#include <iostream>
using namespace std;

int main(void)
{
    int n, carry = 1;
    cout << "Enter count bit: ";
    cin >> n;

    int arr[n];
    cout << "Enter number: " << endl;
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = n - 1; i >= 0; i--) {
        int num = arr[i] + carry;
        arr[i] = num % 2;
        carry = num / 2;
    }

    if (carry == 1) {
        int newarr[n + 1];
        newarr[0] = 1;                     
        for (int i = 0; i < n; i++)        
            newarr[i + 1] = arr[i];

        for (int i = 0; i < n + 1; i++)    
            cout << newarr[i];
        cout << endl;
    }
    else {
        for (int i = 0; i < n; i++)
            cout << arr[i];
        cout << endl;
    }
}