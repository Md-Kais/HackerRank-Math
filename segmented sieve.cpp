#include<bits/stdc++.h>
#include <math.h>
#include <cstring>
#define MAX 1100000
using namespace std;
vector<int>primes;
long long primea(long long n){
     bool prime[MAX];

     for(int i=3;i*i<=MAX;i+=2){
        if(prime[i]==false){

            for(int j=i*i;j<=MAX;j+=i){
                 prime[j]=true;
            }
        }
     }

  primes.push_back(2);
  for(int i=3;i<=MAX;i+=2){
        if(prime[i]==false)
    primes.push_back(i);
  }

}

int main(){

   int low,high;
   cin>>low>>high;
   primea(MAX);
      int n = high - low + 1;

    // Declaring boolean only for [low, high]
    bool mark[n + 1];
    memset(mark, false, sizeof(mark));
   for(int i=0;i<primes.size();i++){

       int loLim = floor(low / primes[i]) * primes[i];
        if (loLim < low)
            loLim += primes[i];
        if(loLim==primes[i])
            loLim += primes[i];
                for (int j = loLim; j <= high; j += primes[i])
            if(j != primes[i])
              mark[j - low] = true;

    }
    vector<int>primee;
     for (int i = low; i <= high; i++)
        if (!mark[i - low])
            primee.push_back(i);


 for(auto e: primee){
  cout<<e<<endl;
 }


}
