#include<iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
      int n,x,y;
      cin>>n;
      cin>>x;
      cin>>y;
      if(n>=100000)
      {
          main();
      }
      for(int j=0;j<n;j++)
      {
        if(j%x==0 && j%y!=0)
        {
          cout<<j<<" ";
        }

      }


    }


}
