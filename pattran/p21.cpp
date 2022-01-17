#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }

        for (int s = 1; s <= i - 1; s++)
        {
            cout << "**";
        }

        // int start=i-1;
        //     while(start){
        //     cout<<"**";
        //     start--;
        //     }

       for(int l=6-i; l>=1; l--){
            cout<<l;
       }

    //     int last=6-i;

    //    while(last){
    //      cout<<last;
    //      last--;  
    //    }
       
       
        cout << endl;
    }
    return 0;
}
