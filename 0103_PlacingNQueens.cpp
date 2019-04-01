// N_Queen
#include <iostream>
using namespace std;

bool KyaYahaQueenRakhSkteHai(int chess[][12],int n,int i,int j){
	// Check Row and column
	for(int k=0;k<n;k++){
		if(chess[i][k]==1 || chess[k][j]){
			return false;
		}
	}

	// Check Diagnol right
	int k=i;
	int l=j;
	while(k>=0 && l<n){
		if(chess[k][l]){
			return false;
		}
		k--;
		l++;
	}
	// Left Diagnol Check
	k=i;
	l=j;
	while(k>=0 && l>=0){
		if(chess[k][l]){
			return false;
		}
		k--;
		l--;
	}

	return true;
}


int count=0;
bool NQueen(int chess[][12],int n,int i){
	// base case
	if(i==n){
		// Print the solution
		// for(int k=0;k<n;k++){
		// 	for(int l=0;l<n;l++){
		// 		cout<<chess[k][l]<<" ";
		// 	}
		// 	cout<<endl;
		// }
        count++;

		return false;
	}

	// Recursive case

	for(int j=0;j<n;j++){
		if(KyaYahaQueenRakhSkteHai(chess,n,i,j)==true){
			chess[i][j]=1; // Place the queen
			bool KyaBaakiBaatBani=NQueen(chess,n,i+1);
			if(KyaBaakiBaatBani){
				return true;
			}
			chess[i][j]=0;
		}
	}

	return false;
}
int main(){
	int chess[12][12]={0};
	int n;
	cin>>n; // nxn
	NQueen(chess,n,0);
	cout<<count;
	return 0;
}