#include <bits/stdc++.h>
using namespace std;

// Recursive function to find GCD
int gcd(int a, int b)
{
    if (b != 0)
        return gcd(b, a % b);
    else
        return a;
}

int main()
{
    int n1, n2;
    cout << "Enter two positive integers: ";
    cin >> n1 >> n2;

    cout << "G.C.D of " << n1 << " and " << n2 << " is " << gcd(n1, n2);

    return 0;
}
