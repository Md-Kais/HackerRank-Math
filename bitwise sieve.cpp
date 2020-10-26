#include<bits/stdc++.h>
#include <math.h>
#include <cstring>
using namespace std;
vector<int> primes;
bool ifnotPrime(int prime[], int x) {
   return (prime[x/64]&(1<<((x>>1)&31)));
}
bool makeComposite(int prime[], int x) {
   return prime[x/64]|=(1<<((x>>1)&31));
}

 int bitwisesieve(int n){
      int prime[n/64];
      memset(prime, 0, sizeof(prime));
      for(int i=3;i<=sqrt(n);i+=2){   /// don't use i*i<=n;  "use:i<=sqrt(n);" like this
        if(! ifnotPrime(prime,i)){
            for(int j=i*i,k=i<<1;j<n;j+=k){
                makeComposite(prime, j);
              //  cout<<j<<endl;
            }
        }
      }
      primes.push_back(2);
  for(int i=3;i<=n;i+=2){
       if(! ifnotPrime(prime,i)){
          // cout<<i<< " "<<endl;
             primes.push_back(i);
       }
   }

}


int main(){

   int n;
   cin>>n;
   bitwisesieve(n);
 for(auto e: primes){
    cout<<e<<endl;
 }

}
