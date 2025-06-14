#include <bits/stdc++.h>
using namespace std;

void searchArr(int arr[], int size, int elem)
{
    int first = INT16_MIN;
    int second = INT16_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
    }

    cout << first << " " << second;
}

int main()
{
    int arr[5] = {5, 6, 8, 9, 7};

    searchArr(arr, 5, 11);
}
