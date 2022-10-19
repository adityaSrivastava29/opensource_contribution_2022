#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter array size = " << endl;
    cin >> n;
    int a[n];
    cout << "enter array elements =" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "array elements are = ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    int temp = 0, j;
    for (int i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    cout << "\n\nsorted array elements are = ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}