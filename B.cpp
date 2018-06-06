#include<bits/stdc++.h>
using namespace std;

main()  {
long long int n,a,k,b,x;
int mini=0,wh=1,div;

cin>>n;
cin>>k;
cin>>a;
cin>>b;

x=n;


while(wh<2){

if(x%k==1)   {  div=(x/k);  mini= mini + div*b; }

else { x=x-1 ; mini=mini+a;}
if(x==1) wh=2 ;
else continue;
}


 cout<<mini;
}
