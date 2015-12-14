#include <iostream>
#include <string>
using namespace std;
int main()
{
int n;
cout<<"Number of testcases";
std::cin>>n;
int minnum;
int maxnum;
for(int i=1;i<=n;i++)
{



        cin>>maxnum;

    for(int v=maxnum; v>0; v--)
    {
        int checker=0;
        for(int x=v-1;x>=2;x--)
        {
            if(v%x==0 )
            {
               checker++;
            }

        }
        if(checker==0 && v!=1 && maxnum%v==0)
        {
            cout<<v;
            break;
            //checker=3;
        }

    }
}
}
