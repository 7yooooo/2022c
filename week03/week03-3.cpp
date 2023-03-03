#include <stdio.h>
#include <string.h>
char mirrored_char(char c)
{
	if(c=='A')return'A';
	else if(c=='E')return'3';
	else if(c=='H')return'H';
	else if(c=='I')return'I';
	else if(c=='J')return'L';
	else if(c=='L')return'J';
	else if(c=='M')return'M';
	else if(c=='O')return'O';
	else if(c=='S')return'I';
	else if(c=='T')return'T';
	else if(c=='U')return'U';
	else if(c=='V')return'V';
	else if(c=='W')return'W';
	else if(c=='X')return'X';
	else if(c=='Y')return'Y';
	else if(c=='1')return'1';
	else if(c=='2')return'S';
	else if(c=='3')return'E';
	else if(c=='5')return'Z';
	else if(c=='8')return'8';
	else return ' ';
}
int main ()
{
    char line[30];

    scanf("%s",line);
    int N=strlen(line);
    int bad=0;
    for(int i=0;i<N;i++){
        char c1=line[i];
        char c2 =mirrored_char(line[N-1-i]);
        if(c1!=c2)bad=1;
    }
    if(bad==0)printf("它是鏡像字\n");
    else printf("它不是鏡像字\n");
}
