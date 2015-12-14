#include<stdio.h>
using namespace std;
int main()
{
int n;
scanf("%d",&n);
int minnum;
int maxnum;
for(int i=1;i<=n;i++)
{

scanf("%d",&minnum);
scanf("%d",&maxnum);

if(maxnum>minnum){
    for(int v=minnum; v<=maxnum; v++)
    {
        int checker=0;
        if(v>=3){
        for(int x=v-1;x>1;x--)
        {
            if(v%x==0 )
            {
               checker++;
            }

        }
        }
        else
        {
            if(v!=1){
        	printf("%d \n", v);
        	}
        }
        if(checker==0 && v!=1 && v!=2 )
        {
            printf("%d \n", v);
        }

    }
}
}
}
