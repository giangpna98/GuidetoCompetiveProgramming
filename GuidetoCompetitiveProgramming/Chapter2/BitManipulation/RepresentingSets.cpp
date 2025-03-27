#include <bits/stdc++.h>

using namespace std;
vector<int> num(10,0);
int sum = 0;

int main(){
    int x = 0;
    x |= (1<<1);
    x |= (1<<3);
    x |= (1<<4);
    x |= (1<<8);
    cout<< __builtin_popcount(x)<<"\n";
    for(int i=0; i<32; i++){
        if(x & (1<<i)) cout<<i<<"\n";
    }
    bitset<64> a, b;
    a[1] = 1;
    a[5] = 1;
    a[7] = 1;
    a[9] = 1;
    a[16] = 1;
    cout<<a.count()<< "\n";
    b[2] = 1;
    b[5] = 1;
    b[8] = 1;
    b[12] = 1;
    b[16] = 1;
    bitset<64> c = a&b;
    bitset<64> d = a|b;
    bitset<64> e = a^b;
    cout<< c.count()<<"\n";
    cout<< d.count()<<"\n";
    cout<< e.count()<<"\n";
    return 0;
}