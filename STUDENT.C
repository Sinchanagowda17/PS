#include<stdio.h>
#include<conio.h>
void main(){
int num,n,i,j;
clrscr();
printf("enter the number of rows:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
num=1;
for(j=0;j<=i;j++)
{
printf("%d ",num);
num=num*(i-j)/(j+1);
}
printf("\n");
}
getch();
}
