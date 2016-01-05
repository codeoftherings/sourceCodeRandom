#include<iostream>

using namespace std;
void collatz(int a);
int check=0;
int main()
{
    check=0;
    int n;
    cout<<"Enter starting digit"<<endl;
    cin>>n;
    collatz(n);

}
void collatz(int n)
{
     check++;
     if(n%2==0)
     {
         n=n/2;
     }
     else
     {
         n=(3*n)+1;
     }
     cout<<n<<endl;
     if(n>1){
     collatz(n);
     }
     else if(n==1)
     {
         cout<<"It took"<<" "<<check<<" "<<"turns to reach 1"<<endl;
         main();
     }
}

