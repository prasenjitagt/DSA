#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size - 1; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    const int size = 6;

    int myArr[size] = {13, 85, 96, 69, 75, 14};

    printArr(myArr, size);

    swapAlternate(myArr, size);
    cout << "After alternate Swap " << endl;

    printArr(myArr, size);
}