#include<bits/stdc++.h>
using namespace std;

// int ffs(int n){
//     // here mask =  n>>i
//     for(int i=0;i<INT_MAX;i++)
//    {if(((n>>i)and 1)==1)
//    return i;
// }
// }
bool ispoweroftwo(int n)
{   
 if(n==1) return true;
   else if(n%2 and n!=1)
    return false ;
 else 
   {n=n/2;
   ispoweroftwo(n);
   }
}

int main(){
int t;cin>>t;
while(t--){
long long int n,d,g;
cin>>n;
if(n%2==1 and n!=1)
{
cout<<"1"<<endl;
}
else if(n==1){
cout<<"3"<<endl;
}
else {
    d=n+1;
    g=pow(2,ffs(n)-1);
    if(ispoweroftwo(n))
    cout<<d<<endl;
   else cout<<g<<endl;

}

}}