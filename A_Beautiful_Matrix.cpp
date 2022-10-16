#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;
    int arr[n][n];
    int x, y;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    while (x!=2 || y!=2)
    {
        if(x<2){
            x++;
            count++;
        }else if(x>2){
            x--;
            count++;
        }

        if(y<2){
            y++;
            count++;
        }else if(y>2){
            y--;
            count++;
        }
    }
    
    cout<<count<<endl;

    return 0;
}