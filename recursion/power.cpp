#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int power(int n){
    if(n==0){
        return 1;
    }
    return 2 * power(n-1);

}

int main() {
    int n;
    cin>>n;
   cout<< power(n);

    // double base, exp, result;
    // printf("Enter a base number: ");
    // scanf("%lf", &base);
    // printf("Enter an exponent: ");
    // scanf("%lf", &exp);

    // // calculates the power
    // result = pow(base, exp);

    // printf("%.1lf^%.1lf = %.2lf", base, exp, result);
    // return 0;
return 0;
}