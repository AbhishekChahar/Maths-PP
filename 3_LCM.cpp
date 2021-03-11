// // //LCM of an array of elments
// // // LCM of a number with 0 is undefined!
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
//   if(n<1) return 0;
  
//   int res = gcd(array[0],array[1]);
//   int lcm = (array[0]*array[1])/res;
//   if(n==2){ 
//     cout<< lcm;
//     return 0;
//   } 

//   for(int i=2; i<n;i++){
//     res = ( gcd(array[i],res));
//     lcm =( lcm * array[i] )/ res;
//   }

//   cout<<lcm;

//   return 0;
// }