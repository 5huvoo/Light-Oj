
#include<bits/stdc++.h>

using namespace std;

int main()
{
int t,no=0;
cin>>t;
while(t--){
string s ,add;
cout<<"Case "<<++no<<":";
s="";
stack<string>st1,st2;
add="http:wwwlightoj.com/";
st1.push(add);
while(cin>>s){
           if(s[0]=='Q') break;
           if(s[0]=='V'){
           cin>>add;
           st1.push(add);

           if(!st2.empty()){
               while(!st2.empty()) st2.pop();

               }
           }
           else {

           if(s[0]=='B')
           {
           st2.push(st1.top());
           st1.pop();
           if(!st1.empty()) {
                 cout<<st1.top()<<endl;

                 }
           else{
           cout<<"Ignored"<<endl;
           }

            }



           }



              }




}


}
