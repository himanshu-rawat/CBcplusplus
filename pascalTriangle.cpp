// procedure pascals_triangle

//    FOR I = 0 to N DO
//       FOR J = 0 to N-1 DO
//          PRINT " "
//       END FOR

//       FOR J = 0 to I DO
//          PRINT nCr(i,j)
//       END FOR

//       PRINT NEWLINE
//    END FOR

// end procedure

#include<iostream>
using namespace std;
int main(){

    int n,i,j,val;
    n=5;
    int nCr(int n, int r);
    
    for(i=0;i<=n;i++){

         for(j=0;j<n;j++){
             cout<<" ";
         }

         for(j=0;j<=i;j++){
             val= nCr(i,j);
             cout<<val;
         }
         cout<<"\n";
    }

    
}
    int factorial(int n) {
    int f;
   
   for(f = 1; n > 1; n--)
      f *= n;
      
   return f;

    int nCr(int n, int r){
        return  factorial(n) / ( factorial(n-r) * factorial(r) );
    }
    
    return 0;
}