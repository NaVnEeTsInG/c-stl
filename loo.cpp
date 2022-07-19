#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
vector<int> v(n);
// v consists of integers from 1 to m
sort(v.begin(),v.end());
//algorithm is as follows
// find all conjugate pairs and treat them as a single integer
// if their frequency in the vector is >=2 then make both elements
// in B as 'A' 
// else if frequency is 1 change the index --> min(v[i],m+v[i]-1)
// to 'A'




}
return 0;
}