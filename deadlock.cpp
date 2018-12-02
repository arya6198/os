//BANKERS ALGORITHM
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int p[3],a[3],b[3],c[3],ma[3],mb[3],mc[3],na[3],nb[3],nc[3];
int i,j;
for(i=0,j=1;i<=3;i++,j++)
{
p[i]=j;}
cout<<"ENTER THE ALLOCATED RESOURCES FOR PROCESS 1-3"<<"\n";
for(i=0;i<5;i++)
{
  cin>>a[i]>>b[i]>>c[i];
cout<<"\n";
}
cout<<"ENTER MAX REQUIRED RSOURCES"<<"\n";
for(i=0;i<3;i++)
{
cin>>ma[i]>>mb[i]>>mc[i];
cout<<"\n";
}
for(i=0;i<3;i++)
{
na[i]=ma[i]-a[i];
nb[i]=mb[i]-b[i];
nc[i]=mc[i]-c[i];
}
cout<<"ENTER AVAILABLE RESOURCES"<<"\n";
int a1,b1,c1,s,d,f,s1,d1,f1,g1;
cin>>a1>>b1>>c1;
cout<<"\n";
for(i=0;i<3;i++)
{
for(j=1+i;j<3;j++)
{
if(na[i]>na[j])
{
s1=p[i];
d1=a[i];
f1=b[i];
g1=c[i];
s=na[i];
d=nb[i];
f=nc[i];
na[i]=na[j];
nb[i]=nb[j];
nc[i]=nc[j];
p[i]=p[j];
a[i]=a[j];
b[i]=b[j];
c[i]=c[j];
na[j]=s;
nb[j]=d;
nc[j]=f;
p[j]=s1;
a[j]=d1;
b[j]=f1;
c[j]=g1;


}}}

for(i=0;i<3;i++)
{
if(a1>=na[i]&&b1>=nb[i]&&c1>=nc[i])
{
cout<<"Process  "<<p[i]<<"\n";
a1=a1+a[i];
b1=b1+b[i];
c1=c1+c[i];

}}


}
























