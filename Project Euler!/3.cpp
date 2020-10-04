/******************************* Problem 3: Largest prime factor ***************************************/

/*The prime factors of 13195 are 5, 7, 13 and 29.What is the largest prime factor of the number 600851475143 ?*/

#include<iostream>
using namespace std;

void prime(long long int n){
    int i=2;
    if(n==1)
         return;
    while(n%i!=0)
         i++;
    cout<<i<<endl;
    return prime(n/i);

}


int main(){
    prime(600851475143);
    return 0;
}
//Ans:6857