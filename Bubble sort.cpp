#include <iostream>
using namespace std;
int main()
{
    int i, j, temp, pass = 0, count = 0;
    int a[5] = {10, 2, 43, 14, 0};
    cout << "Input list ...\n";
    for (i = 0; i < 5; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            ++count;
        }
        pass++;
    }
    cout << "Sorted Element List ...\n";
    for (i = 0; i < 5; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\nNumber of passes taken to sort the list:" << pass << endl;
    cout << "Number of comparison taken to sort the list: " << count << endl;
    return 0;
}
