#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

int main()
{
    const int size = 6;

    int myArr[size] = {13, 85, 96, 69, 75, 14};

    printArr(myArr, size);

    reverseArr(myArr, size);
    cout << "After Reverse" << endl;

    printArr(myArr, size);
}