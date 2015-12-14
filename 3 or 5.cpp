#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 if(t>100000 && t<1)
 {
     return 1;
 }

 for(int i=0; i<t; i++)
 {
   int sum=0;
   int n;
   cin>>n;
  // if(n>1000000000 && n<1)
   //{
   //    return 1;
  // }
   for(int j=0; j<n-1; j++)
   {
      if(j%3==0 || j%5==0)
      {
          sum=sum+j;

      }
   }
   cout<<sum<<"\n";
 }

}
