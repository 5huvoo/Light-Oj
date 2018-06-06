#include<bits/stdc++.h>
#include <math.h>
using namespace std;

main()
{
 const double PI= acos(-1);
 int tc;
 cin>>tc;
 for(int i=1;i<=tc;i++ ){
 double R,r;
 int n;
 cin>>R>>n;

 r= (R*sin(PI/n)) / (1+ (sin(PI/n))) ;
 printf("Case %d: %.10lf\n",i,r);



   }


}
