/*
INVERSE OF NUMBER
Take the following as input.
A number
Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. 
E.g. 32145 is a valid input number.
Write a function that returns its inverse, where inverse is defined as follows

Inverse of 32145 is 12543.
 In 32145, “5” is at 1st place, therefore in 12543, “1” is at 5th place; in 32145, “4” is at 2nd place,
  therefore in 12543, “2” is at 4th place.

Print the value returned.

ALGO:-
1.get the value from user
2. then extract each digit  (num)
3. initialize a variable postion with 0 and increase each time after extracting the value.
4. the value which comes in num is used as powerten= 10^num-1 and 
5. then simply sum =sum +powerten*position
6  It will give the required value in given format.
*/
#include<iostream>     
using namespace std;
int main(){
    int n,num,position=0,powten,i,sum=0;
    cin>>n;
    
    while(n>0){
        num=n%10;
        position++;                     
         i=1;
        powten=1;

        while(i<=(num-1)){
            powten=powten*10;
            i++;
        }
        //cout<<powten<<endl;
        sum = sum + position*powten;

        dfgfcbcvbg
        n=n/10;
    }
   
    cout<<sum<<endl;
    return 0;
    
}