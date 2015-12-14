 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
     int a,b;
     cin>>a;
     cin>>b;
     string list[]={"one","two","three","four","five","six","seven","eight","nine",};
     string oddEven[]={"even", "odd"};
     if (a<1 || b<1 || b<a)
     {
       return 1;
     }
     for(int i=a; i<b;i++)
     {
         if(i<10)
         {
             cout<<list[i-1]<<"\n";
         }
         if(i>9)
         {
             cout<<oddEven[i%2]<<"\n";
         }
     }




 }
