#include <stdio.h>
int main()
{
int a,b,c,d=0;
scanf("%d%d",&a,&b);
for(c=a;c<=b;c++)
{
	if(c%3==0)
	d+=c;
}
printf("%d",d);
}
