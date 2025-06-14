#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    cout << "Hi" << endl
         << "Hello World" << endl;

    int arr[5] = {1, 2, 6, 7, 9};

    printArr(arr, 5);
}
