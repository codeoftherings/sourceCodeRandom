#include <iostream>
#include <string>
using namespace std;
int main()
{
int n;

std::cin>>n;
int minnum;
int maxnum;
for(int i=1;i<=n;i++)
{


        std::cin>>minnum;

        std::cin>>maxnum;

    for(int v=minnum; v<=maxnum; v++)
    {
        int checker=0;

        for(int x=v/2;x>=2;x--)
        {
            if(v%x==0 )
            {
               checker++;
            }

        }
        if(checker==0 && v!=1)
        {
            std::cout<<v<<"\n";
        }

    }
}
}
