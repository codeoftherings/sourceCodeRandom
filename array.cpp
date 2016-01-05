#include<iostream>
 using namespace std;
 int main()
 {
   int n;
   cout<<"enter number of testcases"<<endl;;
   cin>>n;
   int d[n];
   for(int i=0;i<n;i++)
   {
       cout<<"enter digit no."<<" "<<i+1<<endl;
       cin>>d[i];
   }
   for(int i=0;i<n;i++)
   {
       cout<<d[n-1-i]<<endl;
}
main();
}



