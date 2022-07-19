#include<bits/stdc++.h>
using namespace std;

int main()

{
int t; 
cin>>t; 
while(t--)
{




int ans=0;


int n,m;
cin>>n>>m;
vector<int> v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}
sort(v.begin(),v.end());




if(m==1 and n==1 ){
    cout<<v[0];
}

int j=n-1;
int p=m-1;


                                                if(m==n){
                                                        if((n-1)%2==1){
                                                ans=(v[(n-1)/2]+v[((n-1)/2)+1])/2; 
                                                }
                                                if((n-1)%2==0)
                                                    {
                                                ans=(v[n-1])/2;
                                                }}
                                            
            else{
                while(p--)
            {ans+=v[j];
           j--;
             }
          if((n-m)%2==1) {
            ans+=(v[(n-m)/2]+v[((n-m)/2)+1])/2; 
            }
            if((n-m)%2==0)
            {
            ans+=(v[n-m])/2;
            }
            }






cout<<ans<<endl;

}
return 0;
}