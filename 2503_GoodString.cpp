// PLAYING WITH GOOD STRINGS
// A Good String is a string which contains only vowels (a,e,i,o,u) . Given a string S, print a single positive integer N where N is the length of the longest substring of S that is also a Good String.

// Note: The time limit for this problem is 1 second, so you need to be clever in how you compute the substrings.


// Input Format:
// A string 'S'

// Constraints:
// Length of string < 10^5

// Output Format:
// A single positive integer N, where N is the length of the longest sub-string of S that is also a Good String.

// Sample Input:
// cbaeicde
// Sample Output:
// 3
// Explanation:
// Longest good substring is "aei"
 
// Time Limit: 1 sec
#include<iostream>
using namespace std;
int count=0;
void GoodString(char ch[],int i){
    
    if(ch[i]=='\0'){
        count++;
        return;
    }
    if( (ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u') && (ch[i+1]=='a' || ch[i+1]=='e' || ch[i+1]=='i' || ch[i+1]=='o' || ch[i+1]=='u') ){ 
        count++;
        GoodString(ch,i+1);

    }
    else{
        GoodString(ch,i+1);
    }
    
}
int main(){
    char ch[100000];
    cin>>ch;
    GoodString(ch,0);
    cout<<count;
    return 0;
}