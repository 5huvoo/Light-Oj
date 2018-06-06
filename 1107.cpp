#include<bits/stdc++.h>
using namespace std;
main()
{
int tc,c=0;
cin>>tc;
while(tc--){
cout<<"Case "<<++c<<":\n";
  int x1,y1,x2,y2,c1,c2,n;
  cin>>x1>>y1>>x2>>y2;
  cin>>n;
  for(int i =1;i<=n;i++){

  cin>>c1>>c2;
  if((c1>=x1 && c1<=x2) && (c2>=y1 && c2<=y2)) cout<<"Yes"<<endl;
  else cout<<"No"<<endl; }
  }





}
