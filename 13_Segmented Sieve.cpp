// #include<bits/stdc++.h>
// using namespace std;

// vector<int> getprimes(int r){
//   vector<int>primes(sqrt(r)+2, true);
//   primes[0]=primes[1]= false;
//   for(int i =2; i<=sqrt(r) ; i++){
//     if(primes[i]){
//       for(int j = i*i ; j<sqrt(r); j += i){
//         primes[j]= false;
//       }
//     }
//   }
//   vector<int>res;
//   for(int i=0; i<=sqrt(r);i++){
//     if(primes[i]){
//       cout<<i<<" ";
//       res.push_back(i);
//     }
//   }
//   return res;
// }

// void Primes_IN_LR(vector<int>primes ,int l, int r){
  
//   vector<int>v(r-l+2 , true);
//   cout<<endl;
//   for(auto x:v){
//       cout<<x<<" ";
//     }
//   for(int i=0; i<=primes.size(); i++){
//     int k = ceil((1.0*l)/primes[i]);
//     cout<<endl<<k;
//     for(int j= max(k,2)*primes[i] ; j<=r+2; j=j+primes[i]){
//       v[j-l] =false;
//     }
//     cout<<endl;
//     for(auto x:v){
//       cout<<x<<" ";
//     }
//     cout<<endl;
//     for(int i = 0 ; i<v.size() ; i++){
//       if(v[i])   cout<<i+l<<" ";
//     }
//   }

// }

// int main(){
//   int l, r;
//   cin>>l>>r;
//   vector<int>primestillR;
//   primestillR = getprimes(r);

//   cout<<endl;
//   for(auto x: primestillR){
//     cout<<x<<" ";
//   }

//   Primes_IN_LR(primestillR, l, r);


//   return 0;
// }