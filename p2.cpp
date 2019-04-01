#include<iostream>
using namespace std;
int main(){
	int n,line,i,inc,dec,j;
	cin>>n;
	line=1;
	while(line<=n){
		i=1;
		while(i<=n-line){
			cout<<"  ";
			i++;
		}
		
		inc=line;
		while(inc<=2*line-1){
			cout<<inc<<" ";
			inc++;
		}
		j=1;
		dec=(2*line-2);
		while(j<=line-1){
			cout<<dec<<" ";
			j++;
			dec--;
		}
		cout<<"\n";
	 line++;	
	}
}
