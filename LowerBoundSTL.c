
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n,q;


    cin>>n;
    long array[n];
    for(long i=0;i<n;i++)
        {
        cin>>array[i];
        }
    cin>>q;
    long querArray[q];
     for(long i=0;i<q;i++)
        {
         long j=0;
         bool check=false;
        cin>>querArray[i];
         for(j=0; j<n;j++)
             {
              if (array[j]==querArray[i])
                  {
                      cout<<"Yes"<<" "<<j+1<<endl;
                      check=true;
                      break;
                  }
             else if (array[j]>querArray[i])
                 {
                     break;
                 }
             }
            if(!check)
                {
                    cout<<"No"<<" "<<j+1<<endl;
                }
        }


}
