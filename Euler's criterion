//want to konow more  check this

//https://www.notion.so/Euler-s-criterion-O-log-n-c0d2918d0fb543dfaa933dbbcec6365f

#include<bits/stdc++.h>
using namespace std;typedef long long ll;
int power(ll x,ll y,ll p){
    long long  res=1;
      x=x%p;
      if(x==0) return 1;
    while(y>0){
       if(y&1)
            res=(res*x)%p;
        y=y>>1;
        x=(x*x)%p;
   }
    return res;

}


int main(){


    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        if(power(n,floor(m-1)/2,m)==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
    }
