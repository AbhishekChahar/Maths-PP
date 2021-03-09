// //GCD Euclid log2max(a,b)
//GCD of more than 2 elements
// #include <iostream>
// #include<algorithm>
// using  namespace std;

// int gcd(int a, int b){

//   int maxm = max(a,b);
//   int minm = min(a,b);
//   if(minm ==0) return maxm;
//   while(maxm % minm !=0){
//     minm = maxm%minm;
//   }

//   return minm;
// }

// int main() {

//   int n;
//   cin>>n;
//   int array[n] ;
//   for(int i=0; i<n; ++i){
//     cin>>array[i];
//   }
//   int res = gcd(array[0],array[1]);
//   for(int i=2; i<n;i++){
//     res = ( gcd(array[i],res));
//   }
//   cout<<res;

//   return 0;
// }