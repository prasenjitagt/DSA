#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int d, int n)
{
    for (int p = 1; p <= d; ++p)
    {
        int last = arr[0];
        for (int i = 0; i < n - 1; ++i)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
    }
}

int main()
{

    int n;
    cout
        << "Enter number of element in array:";
    cin >>
        n;
    int arr[n];
    cout << "Enter array elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number of rotations ";
    int d; // Number of rotations
    cin >> d;

    rotate(arr, d, n);

    // Print the rotated array
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
