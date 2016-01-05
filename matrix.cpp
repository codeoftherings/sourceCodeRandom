#include<iostream>

using namespace std;

int main()
{
    int n,total;
    int sum=0;
    int antisum=0;
    cin>>n;
    int ar[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            cin>>ar[i][j];
        }

     sum=sum+ar[i][i];
     antisum=antisum+ar[i][n-(i+1)];
    }
    total=sum-antisum;
    if(total<1)
    {
        total=total+(total*-2);

    }
  cout<<total;
}
