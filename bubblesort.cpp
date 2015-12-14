#include<iostream>
using namespace std;
int main()
{
    string n;
    cout<<"Enter numbers";
    cin>>n;
    int bytes=n.size();
    int nums[bytes];
    for(int i=0;i<bytes;i++)
    {
       nums[i]=n[i]-48;
    }





        for(int x=0; x<bytes-1;x++)
        {

            int sortCheck=0;

           for(int j=0; j<bytes-1;j++)
           {
             if(nums[j]>nums[j+1])
             {
                int tmp= nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=tmp;

            }
            else
            {
              sortCheck++;
            }

        }
        if(sortCheck>=bytes-1)
            {
                break;
            }
        }
    4
   for(int k=0; k<bytes; k++)
   {
    cout<<nums[k]<<" ";
   }
}


