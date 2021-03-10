//Four Divisors Sum 
#include<bits/stdc++.h>
using  namespace std;

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {

        int n = nums.size();
        for(int i=0;i<n;i++){
          cout<<nums[i]<<" "<<i<<endl;
        }
        int count,sqt;
        int sum_total=0 ;
        int sum;
        for(int i=0; i<n; i++){
          count = 1;
          sum = nums[i]+1;
          sqt = sqrt(nums[i]);
          if(sqt*sqt != nums[i]) sqt++;
          cout<<sqt<<endl;
          for(int j = 2; j<sqt;j++){
            if( (nums[i] % j) == 0){
              count++;
              cout<<count<<" "<<nums[i]<<" "<<j<<endl;
            }
            if(count>2){
              cout<<"count greater than 2 break"<<endl;
              break;
            }
          }       
          if(count==2){
            cout<<"count 2 calc done"<<endl;
            for(int j = 2; j<sqt;j++){
              if( nums[i]%j == 0 ){
                sum += j;
                sum += nums[i]/j;
                sum_total +=sum;
              }
            }    
            cout<<nums[i]<<" "<<sum<<endl;
          }

        }
        return sum_total;
    }
};
int main() {
  
  int n;
  cin>>n;

  vector<int>nums;
  int data;
  for(int i=0 ; i < n ; i++){
    cin>>data;
    nums.push_back(data);
  }  
  Solution obj;
  cout<<endl<<obj.sumFourDivisors(nums);

  return 0;
}
