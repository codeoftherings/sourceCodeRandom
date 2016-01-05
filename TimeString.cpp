#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string time;
    cin>>time;
    char h='P';
    if(time[8]==h)
    {
        int x,y,i;
        x=time[0]-48;
        y=time[1]-48;
        int digit= (x*10)+y;
        digit=digit+12;
        for(i=0;i<9;i++)
        {
            if((digit-i)%10==0)
            {
                break;
            }
        }
        y=i;
        x=(digit-i)/10;
        if((10*x)+y==24)
        {
            x=1;
            y=2;
        }
        time[0]=x+48;
        time[1]=y+48;
         cout<<time[0]<<time[1]<<time[2]<<time[3]<<time[4]<<time[5]<<time[6]<<time[7];

    }
    else
    {
        if(time[0]=='1' && time[1]=='2')
        {
            time[0]='0';
            time[1]='0';
        }
        cout<<time[0]<<time[1]<<time[2]<<time[3]<<time[4]<<time[5]<<time[6]<<time[7];

    }
}
