// //GCD Euclid log2max(a,b)
// #include <iostream>
// #include<algorithm>
// using  namespace std;

// int gcd(int a, int b){

//   int maxm = max(a,b);
//   int minm = min(a,b);
//   if(minm ==0) return maxm;
//   while(maxm % minm !=0){
    // int temp=maxm;
    // maxm = minm;
//     minm = maxm%minm;
//   }

//   return minm;
// }

// int main() {
//   int a=9;
//   int b=3;
//   int c =8;
//   cin>>a>>b;
//   cout<<gcd(a,b);

//   return 0;
// }