#include <bits/stdc++.h>

using namespace std;

vector<int> subset;

void search(int k, int n){
    if(k==n+1)
    {
        cout<<"\n{";
        for(int i=0; i<subset.size(); i++)cout<<subset[i]<<" ";
        cout<<"}";
    }
    else{
        subset.push_back(k+1);
        search(k+1, n);
        subset.pop_back();
        search(k+1, n);
    }
}

int main()
{
    int n;
    cin>>n;
    search(0, n);
    return 0;
}