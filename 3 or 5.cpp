#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 int i=0;
 for(int c=0;c<t;c++)
 {

     long long last,s1,s2,s3,s,n1,n2,n15;
     cin>>last;
     bool isSeen=true;
     bool isSeen5=true;
     bool isMoreThan15=false;
     last=last-1;
     for (int k=0;k<14;k++)
     {


         if( (last-k)%3==0 && isSeen)
         {
             n1 = (last-k)/3;
             isSeen=false;

         }
         if(( last-k)%5==0 && isSeen5)
         {
             n2 = (last-k)/5;
             isSeen5=false;
         }
         if ((last-k)%15==0 && last>=15)
         {
             n15= (last-k)/15;
             isMoreThan15=true;
         }

     }

     //s1= (n_a/2) *(6+ ((n_a-1)*3));
     //s2= (n_b/2) * (10+ ((n_b-1)*5));
     s3=0;

     if (isMoreThan15)
     {
         //s3= (n15/2) * (30+ ((n15-1)*15));
         s3=15*(n15+(n15*n15));

     }

     s1= 3*(n1 + (n1*n1));
     s2= 5*(n2 + (n2*n2));

     s=s1+s2;

     s=s-s3;
     s=s/2;
     cout<< s<<endl;



 }
 }
