// //Appy and chef
// //LCM and multiples
// //Learn breaking the problems 
// // Think on a problem in an effictive way
// // Find the frequency 
// // find gcd of the frequency
// // check if it is greater than 1 or not.

// #include<bits/stdc++.h>
// using  namespace std;


// int main() {

//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i =0; i<n; i++){
//     cin>>arr[i];
//   }
//   unordered_map<int , int> freq;
//   for(int i =0; i<n; i++){
//     freq[arr[i]]++;
//   }
//   for(auto x: freq){
//     cout<<endl<<x.first<<" "<<x.second;
//   }

//   int gcd = 0;  
//   for(auto it :freq){
//     int frequency = it.second;
//     if(gcd ==0) {
//       gcd = frequency;
//     }
//     else{
//       gcd = __gcd(gcd, frequency);
//     }
//   }
//   if(gcd == 1){
//     cout<<"no";
//   }
//   else{
//     cout<<"yes";
//   }

//   return 0;
// }
