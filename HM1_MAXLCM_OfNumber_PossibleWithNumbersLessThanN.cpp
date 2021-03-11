// //HM1_MAXLCM_OfNumber_PossibleWithNumbersLessThanN
// #include<bits/stdc++.h>
// using namespace std;

// class solution{

//   public:
//   long long maxLcm(int num){
//     long long res;
//     if(num==1 || num==2){
//       return num;
//     }
//     else if( num == 4 ) return 12;
//     else if(num == 6)return 60;
//     else{
//       if((num&1) == 1)//odd
//         return num*(num-1)*(num-2);
//       else if(num%3==0){
//         return num*(num-1)*(num-2);
//       }
//       else{
//         return num*(num-1)*(num-3);
//       }
//     }
//   }
// };
// int main(){

//   int n;
//   cin>>n;
//   solution obj;
//   cout<<obj.maxLcm(n)<<endl;

//   return 0;
// }
