#include<iostream>
#include<cmath>
using namespace std;
int binary[8];
void convert(int digit);
 int main()
{

    while(true){
    int n;
    cout<<"\n"<<"enter digit"<<"\n";
    cin>>n;

    if(n!=0 && n<=255)
    {
    convert(n);
    }
    else if(n==0)
    {
        cout<<"0";
    }
    else
    {
        return 1;
    }
    }
}
 void convert(int digit)
 {
    int i;
    for(i=0; i<digit; i++)
    {
           // cout<<i<<"\n";



      if(digit==pow(2,i))
      {
          break;
      }
      else if(pow(2,i)>digit)
      {
          i=i-1;
          break;
      }


    }
   // cout<<i<<"\n";

    binary[i]=1;
    int remainder=digit-pow(2,i);

    if(remainder>0)
    {
       convert(remainder);
    }
    else
    {
        for(int j=8; j>=0; j--)
        {
            cout<<binary[j];
        }
    }




 }



