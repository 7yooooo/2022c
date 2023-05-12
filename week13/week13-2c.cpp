#include <stdio.h>
int main()
{
int a,b,c;
scanf("%d",&a);
for(b=1;b<=a;b++)
{
	scanf("%d",&c);
	printf("%d,",c*c);
}
printf("\n");
}
