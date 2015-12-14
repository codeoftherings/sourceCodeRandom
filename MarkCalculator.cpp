#include<iostream>

using namespace std;
void CheckBorder (float d)

{
    if(91-d<=2 && d<=91)
{
    cout<<"borderline a1"<<endl;
    cout<< "give" << 91-d << "marks more";
}
else if(81-d<=2&& d<=81)
{
    cout<<"borderline a2"<<endl;
    cout<< "give"<<81-d <<"marks more";
}
else if(71-d<=2&& d<=71)
{
    cout<<"borderline b1"<<endl;
    cout<< "give" << 71-d << "marks more";
}
else if(61-d<=2&& d<=61)
{
    cout<<"borderline b2"<<endl;
    cout<< "give" <<61-d<< "marks more";
}
else if(51-d<=2&& d<=51)
{
    cout<<"borderline c1"<<endl;
    cout<< "give" <<51-d<< "marks more";
}
}
int main(){
float marks[11];

for (int i=1; i<=12; i++)
{
cin>>marks[i];
if (i%3==0 && i<=12)
{
float v=marks[i]+marks[i-1]+marks[i-2];
cout<<v <<endl;
float total=v*2;
CheckBorder(total);
}
}


}
