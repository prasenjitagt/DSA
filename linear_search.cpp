#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int elem)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elem)
        {
            cout << "Element Found at index: " << i;
            return;
        }
    }

    cout << "Element Not Found";
    return;
}

int main()
{
    const int size = 5;

    int myArr[size] = {13, 85, 69, 75, 14};

    linearSearch(myArr, size, 75);
}