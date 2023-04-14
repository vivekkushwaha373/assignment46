#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    map<string,int>x;
  x["a"]=1;
  x["zoya"]=2;
  x["shyam"]=3;
  x["ram"]=5;
  x["soha"]=0;
   for(auto i=x.rbegin();i!=x.rend();i++)
    cout<<"key= "<<i->first<<", value= "<<i->second<<endl;
    return 0;
}