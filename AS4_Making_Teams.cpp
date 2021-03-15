// //making Teams MATSH
// //N number of boys  greater than= 4
// //M Number of girls greater than= 1
// // T size of time <= n+m
// //N+M <= 60
// //60! cannot be calculated  even in long long int --> SO will construct PASCAL TRAINGLE

// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<long long>> PascalTriangle(int n){
//   vector<vector<long long>>ptriangle(n+1, vector<long long>(n+1));
//   // for(int i =0; i<n ;i++){
//   //   for(int j=0;j<n;j++){
//   //     cout<<ptriangle[i][j]<<" ";
//   //   }
//   //   cout<<endl;
//   // }
//   // ptriangle[0][0]=1;
//   // ptriangle[1][0]=1;
//   // ptriangle[1][1]=1;
//   for(int i=0;i<=n;i++){
//     for(int j=0; j<=i; j++){
//       if(j==0 || j== i ){
//         ptriangle[i][j]=1;
//       }
//       else{
//         ptriangle[i][j] = ptriangle[i-1][j]+ptriangle[i-1][j-1];
//       }
//     }
//   }
//   // for(int i =0; i<n ;i++){
//   //    for(int j=0;j<n;j++){
//   //      cout<<ptriangle[i][j]<<" ";
//   //    }
//   //   cout<<endl;
//   // }

//   return ptriangle;
// }

// long long WaysToChooseGrp(long long n,long long m, long long t, vector<vector<long long>> &PasTriangle){
//   long long res = PasTriangle[n+m][t];
//   for(int i=0 ;i<4;i++){
//     if(t-3+i<=m){
//       res -= (PasTriangle[n][3-i]*PasTriangle[m][t-3+i]);
//     }
//     else{
//       break;
//     }
//   }
//   if(n>=t) res -= (PasTriangle[n][t]*PasTriangle[m][0]);
//   return res;
// }

// int main(){
//   long long n , m ,t;
//   cin>>n>>m>>t;
//   // cout<<"Pascal triangle looks like: " << endl;
//   vector<vector<long long>>PasTriangle = PascalTriangle(n+m+1);
//   // for(int i =0; i<PasTriangle.size() ;i++){
//   //    for(int j=0;j<PasTriangle[i].size();j++){
//   //      cout<<PasTriangle[i][j]<<" ";
//   //    }
//   //   cout<<endl;
//   // }
//   // cout<<endl<<"Ways to choose a group: ";
//   cout<<WaysToChooseGrp(n,m,t, PasTriangle);

//   return 0;
// }