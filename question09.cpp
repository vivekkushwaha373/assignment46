#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int[3]>x;
    int a[3]={1,2,3};
    x[2]={1,2,3};
    auto i=x.begin();
    cout<<i->first;
    return 0;
}