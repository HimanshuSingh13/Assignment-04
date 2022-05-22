#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int i,j,srange,erange,digit,temp,temp1,x,sum;
cout<<endl<<"Enter the starting of range:";
cin>>srange;
cout<<endl<<"Enter the ending of range: ";
cin>>erange;
for(i=srange;i<=erange;i++)
{
temp=i;
temp1=i;
digit=0;
sum=0;
while(temp|=0)
{
temp=temp/10;
digit=digit+1;
}
while(temp1|=0)
{
x=temp1%10;
temp1=temp1/10;
sum=sum+(pow(x,digit));
}
if(sum==i)
{
cout<<i<<",";
}
}
getch();
}

