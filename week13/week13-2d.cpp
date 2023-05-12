#include <stdio.h>
int main()
{
char a,b,c,d;
scanf("%c %c %c %c",&a,&b,&c,&d);
printf("%d\n",(a-48)*8+(b-48)*4+(c-48)*2+(d-48)*1);
}
