#include <bits/stdc++.h>
using namespace std;

bool searchArr(int arr[], int size, int elem)
{
    bool result;

    for (int i = 0; i < size; i++)
    {
        result = (arr[i] == elem) ? true : false;
    }

    return result;
}

int main()
{
    int arr[5] = {5, 6, 8, 9, 7};

    bool isExist = searchArr(arr, 5, 11);

    cout << isExist;
}
