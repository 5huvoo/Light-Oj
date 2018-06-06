#include<bits/stdc++.h>
using namespace std;
main(){

int tc;
cin>>tc;

while(tc--){
int i,j,n,p,q,l=1,c=0,we=0;
cin>>n>>p>>q;
int w[n+1];
for(i=1;i<=n;i++){
cin>>w[i];
}
for(j=1;j<=n;j++){
we=we+w[j] ;
if(j>=p || we>q ) c++;

}

printf("Case %d: %d\n",l,c);
l++;
}//while loop

}
