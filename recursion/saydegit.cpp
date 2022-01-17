#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void say(int n, string arr[])
{
    if (n == 0)
    {
        return;
    }
    int degit = n % 10;

    n = n / 10;

   

    say(n, arr);
     cout << arr[degit] << " ";
}
int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    say(n, arr);
    return 0;
}