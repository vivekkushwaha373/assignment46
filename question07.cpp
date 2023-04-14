#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<int,int,greater<int>>x;
  x[1]=6;
  x[2]=8;
  x[6]=3;
  x[8]=2;
   for(auto i=x.begin();i!=x.end();i++)
   {
    cout<<"key = "<<i->first<<" value= "<<i->second<<endl;
   }
}