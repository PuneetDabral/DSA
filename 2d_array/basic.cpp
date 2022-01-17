#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool ispresent(int arr[][4], int r, int c, int key){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           if(arr[i][j]==key){
               return 1;
           }

        }
        
    }
    return 0;

}
int main()
{
    int arr[3][4];
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    //colm wise
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin>>arr[j][i];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "enter your key to be search ";
    int key;
    cin >> key;
    int ans=ispresent(arr,3,4,key);
    if(ans==1){
        cout<<"present";
    }
    else{
        cout<<"not";
    }
        return 0;
}