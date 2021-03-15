// //Find the number of valid parenthesis exporessions of given length N
// //Application of catalan numbers

// // Even possible 
// //Odd 0 cases

// //Number of open == number of closed braces
// //number of opening braces should be while travesing 

// //0 -> 1
// //1 -> odd-> 0
// //2 -> () 1
// //3 -> odd -> 0
// //4 -> ()(), (())-> 2
// //6 -> ()()() , ()(()) , (())(), ((())), (()()) -> 5

// //Approach is t0 check for possible insides and outsides

// #include<bits/stdc++.h>
// using namespace std;

// int NumberOfValidParenthesisOfLengthN(int n){

//   if(n&1){
//     return 0;
//   }

//   else if( n==0 || n==2) return 1;
//   else{
//     n /=2;
//     cout<<endl<<"N now is: "<<n<<endl;
//     vector<int>count(n+1,0);
//     count[0]=count[1]=1;

//     //constructing count array till n;
//     for(int i=2; i<n+1 ; i++){
//       for(int j=0;j<i;j++){
//         count[i] += count[j]* count[i-j-1];
//         //Catalan Numbers
//       }
//     }

//     for(int i=0; i<count.size();i++){
//       cout<<endl<<i<<" :"<<count[i];
//     }
//     cout<<endl<<endl;

//     cout<<endl<<"Number of possible valid parenthesis exporessions of given pairs "<<n<<" : ";
    
//   return count[n];
//   }
  
// }

// int main(){

//   int n;
//   cin>>n;
//   cout<< NumberOfValidParenthesisOfLengthN(n) ; 


//   return 0;
// }
