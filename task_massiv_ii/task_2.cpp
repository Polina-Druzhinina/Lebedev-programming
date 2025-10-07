#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main() {
    srand(time(0));
    int n;
    cout << "Enter n: ";
    cin >> n;

    int size = n*n - 1;
    int a[size];
    for(int i=0;i<size;i++)
        a[i] = rand()%100;

    sort(a, a+size);

    int arr[n][n];
    int top=0, bottom=n-1, left=0, right=n-1;
    int index=0;

    while(top<=bottom && left<=right){
        // верхняя строка
        for(int j=left;j<=right;j++)
            arr[top][j] = (index < size ? a[index++] : 0);
        top++;

        // правый столбец
        for(int i=top;i<=bottom;i++)
            arr[i][right] = (index < size ? a[index++] : 0);
        right--;

        // нижняя строка
        for(int j=right;j>=left;j--)
            arr[bottom][j] = (index < size ? a[index++] : 0);
        bottom--;

        // левый столбец
        for(int i=bottom;i>=top;i--)
            arr[i][left] = (index < size ? a[index++] : 0);
        left++;
    }

    // вывод матрицы
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }

    return 0;
}