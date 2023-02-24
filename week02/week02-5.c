#include <iostream>//#include <stdio.h>

using namespace std;
int main(void)
{
long long int a,b;
while(cin>>a>>b){
//while( scanf("%lld%lld",&a,&b)==2){
long long int ans=b-a;
if(a>b)ans=a-b;
cout<<ans<<endl;

//printf("%lld\n",ans);
}
}
