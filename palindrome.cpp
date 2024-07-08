#include <bits/stdc++.h>
using namespace std;

int isPalindrome(char str[])
{
    int low = 0;
    int high = strlen(str) - 1;

    // Keep comparing characters while they are same
    while (low < high)
    {
        if (str[low] != str[high])
        {
            return 0; // not a palindrome.
        }
        low++;  // move the low index forward
        high--; // move the high index backwards
    }
    return 1; // is a palindrome
}

int main()
{

    char mystr[50];

    cout << "Enter String: ";
    cin >> mystr;

    isPalindrome(mystr) == 0 ? (cout << mystr << " is not palindrome") : (cout << mystr << " is palindrome");

    return 0;
}
