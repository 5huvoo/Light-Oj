#include<bits/stdc++.h>
using namespace std;

bool palin(int x){
int ans;
int temp;
temp= x;
ans=0;
while(x) {

ans=ans*10 + x%10;
x=x/10;
         }
return ans==temp;

}

int main(){
int i,tc,x;
cin>>tc;
for(i=1;i<=tc;i++){
  cin>>x;
  palin(x) ? printf("Case %d: Yes\n",i) : printf("Case %d: No\n",i);


     }


}
