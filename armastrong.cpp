#include<iostream>
using namespace std;
int main()
{
int i,n,sum,j;
cout<<"enter the number:";
cin>>n;
j=n;
while(n>0){
i=n%10;
sum=sum+i*i*i;
n=n/10;}
if(j==sum)
cout<<"armstrong number";
else
cout<<"not armstrong number";



}







