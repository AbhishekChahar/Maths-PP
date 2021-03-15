// // Pairs divisible by K
// #include<bits/stdc++.h>
// using namespace std;

// int MaxPairsOfSumK(int arr [], int n, int k){
//   int res=0;
//   map<int, int>m;
//   for(int i=0; i<n; i++){
//     m[arr[i]%k]++;
//   }
//   cout<<endl;
//   for(auto x: m){
//     cout<<endl;
//     cout<<x.first<<" "<<x.second;
//   }
//   // cout<<m[0];
//   res = (m[0]* (m[0]-1)) /2 ;
//   for(int i = 1 ; i< (k/2)-1 ; i++){
//     int data =0;
//     data = m[i]*m[k-i];
//   }
//   if( k&1 ){
//     res += m[k/2] * m[(k/2)+1];
//   }
//   else{ // 0 1 2 3 4 5 
//     res += (m[k/2]*(m[k/2]-1) )/2;
//   }


//   return res;
// }

// int main(){

//   int n,k;
//   cin>>n>>k;
//   int arr[n];

//   for(int i=0; i<n ; i++){
//     cin>>arr[i];
//   }
//   cout<<endl<<MaxPairsOfSumK(arr,n,k);
  

//   return 0;
// }