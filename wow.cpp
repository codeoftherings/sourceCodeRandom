#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enter number of O's";
   cin>>n;
   if(n>=50 || n<=0 )
   {
      cout<<"Number out of bounds"<<endl;
      main();
   }
   cout<<"w";
   for(int i=0;i<n;i++)
   {
      cout<<"o";
   }
   cout<<"w"<<endl;
   main();

}
