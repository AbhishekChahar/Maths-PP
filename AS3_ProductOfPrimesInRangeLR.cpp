// //AS3_ProductOfPrimesInRangeLR
// #include<bits/stdc++.h>
// using namespace std;


// long long Primes_IN_LR(int l, int r){
  
//   vector<int>primess(sqrt(r)+2, true);
//   primess[0]=primess[1]= false;
//   for(int i =2; i<=sqrt(r) ; i++){
//     if(primess[i]){
//       for(int j = i*i ; j<sqrt(r); j += i){
//         primess[j]= false;
//       }
//     }
//   }
//   vector<int>res;
//   for(int i=0; i<=sqrt(r);i++){
//     if(primess[i]){
//       cout<<i<<" ";
//       res.push_back(i);
//     }
//   }
//   //2 3 

//   cout<<endl;
//   for(auto x: res){
//     cout<<x<<" ";
//   } 
//   cout<<endl;

//   vector<int>v(r-l+2 , true);
//   cout<<endl;
//   for(auto x:v){
//       cout<<x<<" ";
//     }
//   vector<int>aaa;  
//   for(int i=0; i<=res.size(); i++){
//     int k = ceil((1.0*l)/res[i]);
//     cout<<endl<<k;
//     for(int j= max(k,2)*res[i] ; j<=r+2; j=j+res[i]){
//       v[j-l] =false;
//     }
//     cout<<endl;
//     for(auto x:v){
//       cout<<x<<" ";
//     }
//     cout<<endl;

//     aaa.clear(); 
//     cout<<v.size()<<endl;
    
//     for(int i = 0 ; i<v.size() ; i++){
//       if(v[i] and i+l<=r){
//         cout<<i+l<<" ";
//         aaa.push_back(i+1);
//       }   
//     }
//   }
//   long long product=1;
//   long long numb= 10e8+7;
//   for(auto x: aaa){
//     product = product*x;
//     product = product % numb;
//   }
//   return product;
// }

// int main(){
//   int l, r;
//   cin>>l>>r;

//   cout<<endl<<Primes_IN_LR( l, r);

//   return 0;
// }