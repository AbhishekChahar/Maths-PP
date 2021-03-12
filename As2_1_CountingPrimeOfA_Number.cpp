// //Counting Primes numbers less than the numbers.
// #include<bits/stdc++.h>
// using namespace std;

// int countPrimes(int n){
//   int count_Primes=0;
//   bool arr[n+1];
//   fill_n(arr, n+1, true);
//   for(auto x:arr){
//     cout<<x;
//   }
//   cout<<endl;
//   if(n==1 || n==0) return 0;
//   arr[0]=arr[1]=false;
//   for(int i=2; i<=sqrt(n); i++){
//     if(arr[i]){
//       for(int j =i*i; j<=n+1; j=j+i){
//         arr[j] = false;
//       }
//     }
//   }
//   for(auto x:arr){
//     if(x) count_Primes++; 
//   }
//   for(int  i=0; i<=n ; i++){
//     if(arr[i]) cout<<i<<" ";
//   }
//   return count_Primes;

//   // int count_Primes=0;
//   //       bool arr[n+2];
//   //       fill_n(arr, n+1, true);
     
//   //       if(n==1 || n==0 ||n==2) return 0;
        
//   //       arr[0]=arr[1]=false;
//   //       for(int i=2; i*i<=n+1; i++){
//   //           if(arr[i] && i*i<=n+1){
//   //               for(int j =i*i; j<=n+1; j=j+i){
//   //               arr[j] = false;
//   //               }
//   //           }
//   //       }
//   //       for(int i = 0 ; i<n ;i++){
//   //           if(arr[i]) count_Primes++; 
//   //       }

//   //       return count_Primes; 
// }

// int main(){
//   int n;
//   cin>>n;

//   cout<<countPrimes(n);
  
//   return 0;
// }