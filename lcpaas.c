#include<stdio.h>
int  main()
{
int b,i,j,k=0;
char a[500][500],q[500];
clrscr();
scanf("%d",&b);
for(i=0;i<a;i++)
scanf("%s",a[i]);
for(i=0;a[0][i];i++)
{
for(j=1;a[j][i];j++)
{
if(a[j][i]!=a[j-1][i])
{
printf("%s",&q);
k=1;
}
}
if(k==1)
{
return 0;
}
else
{
q[i]=a[0][i];
}
}
return 0;
}
