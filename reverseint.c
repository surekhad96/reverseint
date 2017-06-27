#include<stdio.h>
#include<conio.h>
int main()
{
int n,rev=0;
printf("\nEnter the integer: ");
scanf("%d",&n);
while(n!=0)
{
rev=rev*10;
rev=rev+n%10;
n=n/10;
}
printf("reversed integer is: ");
getch();
return 0;
}
