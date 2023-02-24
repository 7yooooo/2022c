#include <iostream>//#include <stdio.h>
int main(void)
{
long long int a,b;
while(std::cin>>a>>b){
//while( scanf("%lld%lld",&a,&b)==2){
long long int ans=b-a;
if(a>b)ans=a-b;
std::cout<<ans<<std::endl;
//printf("%lld\n",ans);
}
}
