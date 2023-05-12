#include <stdio.h>
int main()
{
int a[20],n=0,ans=0;
for(int i=0;i<20;i++){

	scanf("%d",&a[i]);
	if(a[i]==0){
	n=i;
	break;
	}

}
int c;
scanf("%d",&c);
for(int i=0;i<n;i++){
if(a[i]==c)ans++;
}
printf("%d\n",ans);
}
