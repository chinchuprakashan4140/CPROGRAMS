#include<stdio.h>
void main()
{
int previous,current,next,n,i;
printf("enter the no. of terms");
scanf("%d",&n);
previous=0;
current=1;
printf("fibinacciseries is %d",n);
i=1;
while(i<=n)
{
next=previous+current;
previous=current;
current=next;
i=i+1;
printf(previous);
}
}
