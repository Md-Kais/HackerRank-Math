/*

smith number is  a type of number which number has equal sum of it's digit with  it's prime factor's sum of digit;  

example:                                                                                                                               
666=6+6+6=18                                                                                                                            
and                                                                                                                                              
it's prime factors are: 2,3,3,37;                                                                                                            
→ 2+3+3+3+7=18;                                                                                                              
so,666 is a smith number ;

hint:                                                                                                                                       
first of we have find the sum of the digit of numbers then we have to find the prime of the numbers and then sum them up. check if equal then we said that it's smith number. nor,not!






*/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
//here we sum the digit of the number (sod=sum of digit)
long long sod(ll n){
   string s;
   s=to_string(n);
   long long sum=0;
   // cout<<s<<endl;
   for(int i=0;i<s.length();i++){
        sum+=(s[i]-'0');

   }
   return sum;

}

int main(){
   

   ll n;
    cin>>n;
    ll sum1=sod(n);
   //cout<<sum1<<endl;
    ll sum2=0;
		//here we can out  prime number first then divide it with n;
    for(int i=2;i<10000000;i++){
        while(n%i==0){
            sum2+=sod(i);
            n=n/i;
        }

    }
    if(n>2 || sum2!=sum1){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }

}
