#include<bits/stdc++.h>

using namespace std;

int main(){
int tc;
cin>>tc;
for(int i=1;i<=tc;i++){

double r,area;
cin>>r;
area = 4*r*r - 2*acos(0.0)*r*r;


printf("Case %d: %.2lf\n",i, area);

}

}
