// //Counting Primes and their powers in factorisation of a number.
// #include <bits/stdc++.h>
// using namespace std;

// void primesAndTheirPowers(int n){
//   map<int, int>prime_power;
//   int num =n;
//   for(int i=2; i<= sqrt(n); i++){
//     while(n%i == 0){
//       prime_power[i]++;
//       n = n/i;
//     }
//   }
//   if(n!=1) prime_power[n]++;
//   for(auto x: prime_power){
//     cout<<x.first <<" "<<x.second<<" ";
//   }
//   cout<<endl;
// }

// int main() {
// 	int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         primesAndTheirPowers(n);
//     }
// 	return 0;
// }