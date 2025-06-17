#include <iostream>
using namespace std;

// void swap(int *a, int *b)
// {
//     *a = *a + *b;
//     *b = *a - *b;
//     *a = *a - *b;
// }

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    cout << "Copy Swap Function From Here!" << endl;

    int a = 5;
    int b = 7;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(&a, &b);

    cout << "After Swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}