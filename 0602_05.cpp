#include<iostream>
using namespace std;
int main()
{
	int n,num=0,line,i;
	cin>>n;
	line=1;
	while(line<=n){
	    if(line%2!=0){
            num=num+line;
        }
		if(line%2==0){
            num=num+line-1;
        }
		    
		if(line%2==0){
		  	i=1;
		  	while(i<=(2*line-1) ){
		  	      if(i%2==0){
                        cout<<"*";
                    }
				  else{
				        cout<<num;
				        num=num-1;
					}
				i=i+1;	
			}
		}
	   if(line%2!=0){
	      	i=1;
	      	while(i<=(2*line-1) ){
	      	    if(i%2==0){
                    cout<<"*";
                }
				 else{
				    cout<<num;
				    num=num+1;
				}
				i++;	
			}
		}
		  
	    cout<<"\n";
		line++;
	}
}