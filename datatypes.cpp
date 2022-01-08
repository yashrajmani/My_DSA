#include<iostream>
using namespace std;
int main()
{
   int a=1;
   float b=1.7;
   double d=1.77;
   char ch='h';
   bool ans=true;

   cout<<a<<" INT "<<sizeof(a)<<endl;
   cout<<b<<" FLOAT "<<sizeof(b)<<endl;
   cout<<d<<" DOUBLE "<<sizeof(d)<<endl;
   cout<<ch<<" CHAR "<<sizeof(ch)<<endl;
   cout<<ans<<" BOOL "<<sizeof(ans)<<endl;
return 0;
}