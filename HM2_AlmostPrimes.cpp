//Almost Primes- having just 2 factor any number of times excluding 1 and number itself. 
// #include <bits/stdc++.h>
// using namespace std;

// int primesTheirPowersNumberofFactors(int n){
//   map<int, int>prime_power;
//   int factors = 0;
//   int count =0;
//   if(n<6) return 0;
//   for(int j=6;j<=n;j++){
//     int num =j;
//     for(int i=2; i<= n/2; i++){
//       while(num%i == 0){
//         prime_power[i]++;
//         num = num/i;
//       }
//     }
//     factors = prime_power.size();
//     if(factors == 2){
//       // cout<<"value is: "<<j<<endl;
//       count++;
//     }
//     prime_power.clear();
//   }

//   return count;
// }

// int main() {
// 	int n;
//   cin>>n;
  
//   cout<<primesTheirPowersNumberofFactors(n)<<" ";
// 	return 0;
// }