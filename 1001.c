#include<stdio.h>
main(){
int a,i ,b=0,c=0;

scanf("%d",&a);

for( i =1;i<=a;i++){
scanf("%d %d",&b,&c);

c=c+b;

printf("Case %d: %d\n",i,c);
}


return 0;
}
