// //Raw implementation
// //Sieve of Erathothnes
// #include<bits/stdc++.h>
// using namespace std;

// void sieve(int n){
//   bool arr[n+1];
//   fill_n(arr, n+1, true);
//   for(auto x:arr){
//     cout<<x;
//   }
//   if(n==1) cout<<0;
//   arr[0]=arr[1]=false;
//   for(int i=2; i*i<=n+1; i++){
//     if(arr[i]){
//       for(int j =i*i; j<=n+1; j=j+i){
//         arr[j] = false;
//       }
//     }
//   }
//   cout<<endl;
//   for(int  i=0; i<=n ; i++){
//     if(arr[i]) cout<<i<<" ";
//   }



// }

// int main(){
//   int n;
//   cin>>n;

//   sieve(n);
  
//   return 0;
// }