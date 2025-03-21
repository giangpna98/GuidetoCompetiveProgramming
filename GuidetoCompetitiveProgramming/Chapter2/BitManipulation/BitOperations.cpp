#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=31; i>=0; i--)
    {
        if(n & (1<<i)) cout<<"1";
        else cout<<"0";
    }
    cout<<__builtin_clz(n)<<"\n";
    cout<<__builtin_ctz(n)<<"\n";
    cout<<__builtin_popcount(n)<<"\n";
    cout<<__builtin_parity(n)<<"\n";
    return 0;
}