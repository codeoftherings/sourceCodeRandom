#include<iostream>
#include<cmath>
#include<sstream>
#include<string>
using namespace std;
//binary to decimal
void convert(string binaryString, int base);
int main()
{
   while (true)
   {
     string bString;
     int base;
     cout<<"Enter base"<<"\n";
     cin>>base;
     cout<<"Enter number"<<"\n";
      cin>>bString;
      convert(bString,base);

   }
}

void convert(string binaryString, int base)
{


   int bytes=binaryString.size();
   int binary[bytes];
   for(int i=0;i<bytes;i++)
   {
     binary[i]=binaryString[i]-48;
    if(binary[i]>base-1)
     {
         cout<<"digit out of range"<<"\n";
         main();
     }


  }


   long result=0;
   for(int i=0;i<bytes;i++)
   {
       long tmp=0;

       tmp=binary[bytes-1-i]*pow(base,i);
       result=result+tmp;
   }
   cout<<result<<"\n";
}

