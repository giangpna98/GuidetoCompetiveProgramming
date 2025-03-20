#include <bits/stdc++.h>

using namespace std;
int N = 100;

vector<int> per;
vector<bool> chosen(N, 0);

void search(int n){
    if(per.size()==n)
    {
        cout<<"\n{";
        for(int i=0; i<n; i++)cout<<per[i]<<" ";
        cout<<"}";
    }else {
        for(int i=1; i<=n; i++){
            if(chosen[i]) continue;
            chosen[i] = true;
            per.push_back(i);
            search(n);
            chosen[i] =  false;
            per.pop_back();
        }
    }
}

int main(){
    int n;
    cin>>n;
    search(n);
    return 0;
}