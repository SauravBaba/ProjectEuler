/******************************* Problem 4: Largest palindrome product ***************************************/

/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.*/


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int palin(int n){
    int rev=0,rem,org=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }

    if(rev==org)
        return org;
    return 0;    
}




int main(){
    vector<int> v;
    int r;

for(int i=100;i<=999;i++){
    for(int j=i;j<=999;j++){
        r=palin(i*j);
        if(r!=0){
        v.push_back(r);
    }
            }
      }

    sort(v.begin(), v.end());
    cout << "Sorted \n"; 
    //for (auto x : v) 
      //  cout << x << " ";
      cout << v.back();
    return 0;
}
//Ans 906609