// //Number of Factorsof a number.
// #include <bits/stdc++.h>
// using namespace std;

// int primesTheirPowersNumberofFactors(int n){
//   map<int, int>prime_power;
//   int num =n;
//   int factors = 1;
//   for(int i=2; i<= sqrt(n); i++){
//     while(n%i == 0){
//       prime_power[i]++;
//       n = n/i;
//     }
//   }
//   if(n!=1) prime_power[n]++;
//   for(auto x: prime_power){
//     factors *= (x.second+1) ;
//   }
//   return factors;
// }

// int main() {
// 	int n;
//   cin>>n;
//   vector<int>v;
//   int data;
//   for(int i=0; i<n;i++){
//     cin>>data;
//     v.push_back(data);  
//   }
//   for(int i=0 ; i<v.size(); i++){
//     cout<<primesTheirPowersNumberofFactors(v[i])<<" ";
//   }
// 	return 0;
// }