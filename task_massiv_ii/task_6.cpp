#include <iostream>
using namespace std;

int main(void)
{
    int n, count_zero = 0, maxi = 0;
    cout<<"Enten count number(c): ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers for the array:"<<endl;
    for (int i = 0; i < n; i++){
        cin>>arr[i];       
    }
    int j = 0;
    for(int i = 0; i < n; i++){
        if (arr[i]!=0){
            arr[j++] = arr[i];
        }
    }
    
    while (j < n){
        arr[j++] = 0;
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }    
    return 0;
}