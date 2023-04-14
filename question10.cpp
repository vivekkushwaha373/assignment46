#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N;
   cin>>N;
   int count=0;
  map<int,int>x;
   for(int i=1;i<=(sqrt(int(N)));i++)
    x[i]=i*i*i;
  for(auto i=x.begin();i!=x.end();i++)
  {
    for(auto j=x.begin();j!=x.end();j++)
    {
       if((N+i->second)==j->second)
       {
        cout<<j->first<<" and "<<i->first;
        count++;
        break;
       }
       if(count!=0)
       break;
    }
  }
  if(count==0)
  {
    cout<<"Not a diffrence of perfect cubes";
  }
    return 0;
}