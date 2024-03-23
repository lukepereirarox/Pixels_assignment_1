#include <iostream>
using namespace std;
int a;

void sort(int *arr)
{
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    cout << "Enter the number of elements in the array:\n ";
    cin >> a;
    int arr[a] = {};
    cout << "Enter the elements in the array:\n";
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    sort(arr);
    cout << "\n\n\n";
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << "\n";
    }
}
