#include<bits/stdc++.h>
using namespace std;

bool is_unique(int n){
    string s = to_string(n);
    set<int> uniDigits(s.begin(), s.end());
    return uniDigits.size()==4;
}

int main(){

    int n;
    cin>>n;
    int i = n+1;
    while(1){
        if(is_unique(i)){
            cout<<i<<endl;
            break;
        }
        i++;
    }

    return 0;
}