#include<iostream>
#include<math.h>

using namespace std;

void main()
{
    setlocale(LC_ALL, "rus");
    int i, a[100], n;
    cout << "Enter dimension of array --> ";
    cin >> n;
    for (i = 0;i < n;i++)
    {
        cout << "Введи Элемент номер " << i + 1 << " --> ";
        cin >> a[i];
    }
    cout << "\n\nElements kratnye 3 --> ";
    int count = 0;
    for (i = 0;i < n;i++)
    {
        if (a[i] % 3 == 0)
        {
            cout << a[i] << " ";
            count++;
        }
    }
    cout << "\nCount of this elements = " << count;
}