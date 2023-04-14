#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>m;
    // m.insert(pair<int,int>(1,4));
    // m.insert(pair<int,int>(5,6));
    // m.insert(pair<int,int>(2,4));
    // m.insert(pair<int,int>(3,5));
    // m.insert(pair<int,int>(6,5));
    // m.insert(pair<int,int>(6,7));//it will not update the value;
    m[1]=4;
    m[2]=3;
    m[4]=1;
    m[3]=10;
    m[0]=-1;
    
    for(auto i=m.begin();i!=m.end();i++)
    cout<<"key= "<<i->first<<", value= "<<i->second<<endl;
    return 0;
}

