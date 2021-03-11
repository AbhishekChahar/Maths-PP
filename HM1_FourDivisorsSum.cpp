//Four Divisors Sum 
// #include<bits/stdc++.h>
// using  namespace std;

// class Solution {
// public:
//     int sumFourDivisors(vector<int>& nums) {

//         int n = nums.size();
//         for(int i=0;i<n;i++){
//           cout<<nums[i]<<" "<<i<<endl;
//         }
//         int count,sqt;
//         int sum_total=0 ;
//         int sum;
//         for(int i=0; i<n; i++){
//           count = 0;
//           sum = 0;
//           sqt = sqrt(nums[i]);
//           if(sqt*sqt != nums[i]){
//             sqt++;
//           } 
//           else{
//             continue;
//           }
//           cout<<sqt<<endl;
//           for(int j = 1; j<sqt;j++){
//             if( (nums[i] % j) == 0){
//               count++;
//               sum += j;
//               sum += nums[i]/j;
//               cout<<count<<" "<<nums[i]<<" "<<j<<endl;
//             }
//             if(count>2){
//               cout<<"count greater than 2 break"<<endl;
//               break;
//             }
//           }       
//           if(count==2){
//             cout<<"count 2 calc done"<<endl;
//             sum_total +=sum;                
//             cout<<sum<<endl;
//           }
//         }
//         return sum_total;
//     }
// };
// int main() {
  
//   int n;
//   cin>>n;

//   vector<int>nums;
//   int data;
//   for(int i=0 ; i < n ; i++){
//     cin>>data;
//     nums.push_back(data);
//   }  
//   Solution obj;
//   cout<<endl<<obj.sumFourDivisors(nums);

//   return 0;
// }
