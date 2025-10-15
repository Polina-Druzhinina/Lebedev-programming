#include <iostream>
using namespace std;

int main(void){
    int n, count_zero = 0, maxi = 0;
    cout<<"Enten count number(c): ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers for the array:"<<endl;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
        if (arr[i]==0){
            count_zero++;
        }
        else{
            maxi = (maxi<count_zero)?count_zero:maxi;
            count_zero = 0;
        }
        
    }
    maxi = (maxi < count_zero) ? count_zero : maxi;
    cout<<"Maximum number of zeros: "<<maxi<<endl;
    return 0;

}