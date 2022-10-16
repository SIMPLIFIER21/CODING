#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;
    int max_value = 0,min_value = 99999;
    int maxi =0,mini=0;

    for(int i=1;i<=n;i++){
        int a;cin>>a;
        if(a>max_value){
            maxi = i;
            max_value = a;
        }
        if(a<=min_value){
            mini = i;
            min_value = a;
        }
    }

    if(maxi>mini){
        cout<<(maxi-1)+(n-mini)-1<<endl;
    }else{
        cout<<(maxi-1)+(n-mini)<<endl; 
    }

}