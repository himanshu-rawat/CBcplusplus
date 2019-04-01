#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[1000];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int max;
    if(n>m){
        max=n;
    }
    else{
        max=m;
    }
    int c[1000];
    int i=n-1;
    int j=m-1;
    int k=max-1;
    int loop=max; 

    int carry=0;
    while(i>=0 && j>=0){
         int sum=a[i]+b[j]+carry;
            if(sum<0){
                    if(sum<-9){
                    c[k]=sum%10;
                    carry=sum/10;
                    }
                    else{
                    c[k]=sum;
                    carry=0;
                    }
            }

         if(sum>0){
                if(sum>9){
                c[k]=sum%10;
                carry=sum/10;
                }
                else{
                    c[k]=sum;
                    carry=0; 
                }
         }
        k--;
        i--;
        j--;
    }
    if(i>=0 && j<0){
        int sum;
        while(i>=0){
            sum=a[i]+carry;
            if(sum>0){
                if(sum>9){
                c[k]=sum%10;
                carry=sum/10;
                }
                else{
                    c[k]=sum;
                    carry=0; 
                }
            }
            if(sum<0){
                    if(sum<-9){
                    c[k]=sum%10;
                    carry=sum/10;
                    }
                    else{
                    c[k]=sum;
                    carry=0;
                    }
            }
            k--;
            i--;
        }
    }
    else{
        int sum;
        while(j>=0){
            sum=b[j]+carry;
            if(sum>0){
                if(sum>9){
                c[k]=sum%10;
                carry=sum/10;
                }
                else{
                    c[k]=sum;
                    carry=0; 
                }
            }
            if(sum<0){
                    if(sum<-9){
                    c[k]=sum%10;
                    carry=sum/10;
                    }
                    else{
                    c[k]=sum;
                    carry=0;
                    }
            }
            k--;
            j--;
        }
    }
    if(carry!=0){
        cout<<carry<<", ";
    }
    for(int i=0;i<loop;i++){
        cout<<c[i]<<", ";
    }
    cout<<"END";
    return 0;	
}