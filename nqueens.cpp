#include <bits/stdc++.h>

using namespace std;
int N = 100;
long long ans = 0;
vector<int> col(N, 0), diag1(2*N-1, 0), diag2(2*N-1, 0);

void search(int y, int n){
    if(y==n) {
        ans ++;
        return;
    }
    for(int x = 0; x<n; x++)
    {
        if(col[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
        col[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        search(y+1, n);
        col[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
    }
}

int main(){
    int n;
    cin>>n;
    search(0, n);
    cout<<"The answew is: "<<ans;
    return ans;
}