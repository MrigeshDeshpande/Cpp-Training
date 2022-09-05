#include <iostream>
using namespace std;

int main()
{
    int i, j, temp;
    int arr[8] = {12, 3, 1, 5, 18, 10, 7, 35};
    cout << " This is unsorted Array \n";
    for (i = 0; i < 8; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    for (i = 0; i < 8; i++)
    {
        for (j = i + 1; j < 8; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted elements \n";
    for (i = 0; i < 8; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}
