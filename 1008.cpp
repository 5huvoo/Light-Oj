#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int i,j,k,n,t,x,y,e,o,r,c,v;
cin>>t;
for(i=1;i<=t;i++)
{
 cin>>v;
 j=sqrt(v);

 if(j*j!=v)    // just find matrix size the value placed in;
 {
 x=j+1;
 }
 else
 {
 x=j;
 j--;
 }

 y=v-j*j; //finding how much value remaining after full the previous matrix;

 if(x%2!=0)  // checking  the value place in odd matrix or even
 {
    if(y>x)   // if y is greater then matrix size
    {
    r=x;     // then row = matrix size
    y=y-x;
    c=x-y;    // col =matrix size- (remaining - matrix size) ;

    }
    else
    {
     c=x;    // else colum= matrix size

     r=y;    // row = remaining size
     if(r==0)
     r=x;// if remaining value 0 then row = matrix size

    }



 }

 else
 {

    if(y>x)   // for even same rule just swap row colum
    {
       c=x;
       y=y-x;
       r=x-y;
    }
    else
    {
    r=x;

     c=y;
     if(c==0)
     c=x;

    }
 }




cout<<"Case "<<i<<": "<<c<<" "<<r<<endl;

}

return 0;


}

