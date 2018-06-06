#include<bits/stdc++.h>
#define maxn 1000001
double a[maxn];
using namespace std;

int main(){
double ans;
a[0]=0.0;
int i,tc,tp=0,m,b;

for(i=1;i<=maxn;i++){
a[i] = a[i-1] + log(i+0.0) ;

}

cin>>tc;
while(tc--){
cin>>m>>b;

ans= floor( a[m] / ( log(b*1.0))  )+1 ;

printf("Case %d: %.0lf\n",++tp,ans);

}

}
