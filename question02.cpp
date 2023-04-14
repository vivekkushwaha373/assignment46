#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<string,int>x;
  x["a"]=1;
  x["zoya"]=2;
  x["shyam"]=3;
  x["ram"]=5;
  x["soha"]=0;
  for(auto i=x.begin();i!=x.end();i++)
    cout<<"key= "<<i->first<<", value= "<<i->second<<endl;
    


    return 0;
}