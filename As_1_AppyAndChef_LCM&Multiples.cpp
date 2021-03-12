// //Appy and chef
// //LCM and multiples

// #include<bits/stdc++.h>
// using  namespace std;

// int lcm(int a ,int  b){
//   int maxm , minm;
//   maxm = max(a,b);
//   minm = min(a,b);

//   if(minm ==1){return maxm;}
//   while(maxm%minm !=0){
//     int temp = maxm;
//     maxm = minm;
//     minm = temp % minm;
//   }
//   cout<<endl<<"LCM is: "<<(a*b)/minm;
//   return (a*b)/minm;
// }



// int main() {

//   int t;
//   cin>>t;
//   while(t--){
//     int n,a,b,k;
//     int solveA=0, solveB=0;
//     cin>>n>>a>>b>>k;
//     solveA = n/a;
//     solveB = n/b;
//     int common = n/lcm(a,b);
//     cout<<endl<<solveA<<" "<<solveB<<" "<<common<<endl;
//     if(solveA +solveB - 2*common >= k){
//       cout<<"Win"<<endl;
//     }
//     else{
//       cout<<"Lose"<<endl;
//     }
//   }

//   return 0;
// }
