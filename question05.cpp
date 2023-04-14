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
  
  cout<<x.find("a")->second<<endl;

  cout<<x.find("zoya")->second<<endl;
  
  
  cout<<x.find("shyam")->second<<endl;

  
  cout<<x.find("ram")->second<<endl;

  cout<<x.find("soha")->second<<endl;

    return 0;
}