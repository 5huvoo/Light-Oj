#include<bits/stdc++.h>
using  namespace std;
main()
{
int floor,lift,tc,ans;


cin>>tc;

for(int i=1;i<=tc;i++){
ans=0;
cin>>floor>>lift;

if(floor>=lift) {
  // ans = 19 + 2* ((floor-lift)*4) + lift*4 ;
   ans = 19 + 4*(floor-lift) + 4*floor;
       }

else ans= 4*lift +19;


printf("Case %d: %d\n",i,ans) ;

}//for loop close
}
