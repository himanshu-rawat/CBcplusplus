// SudokuSolver
#include <iostream>
#include <cmath>
using namespace std;
bool KyaNumberRakhSkteHai(int mat[][9],int n,int i,int j,int number){
	// Check Row and COl
	for(int k=0;k<n;k++){
		if(mat[i][k]==number||mat[k][j]==number){
			return false;
		}
	}
	// Check in grid
	n=sqrt(n);
	int starti=(i/n)*n;
	int startj=(j/n)*n;
	for(int k=starti;k<starti+n;k++){
		for(int l=startj;l<startj+n;l++){
			if(mat[k][l]==number){
				return false;
			}
		}
	}
	return true;
}

bool SudokuSolver(int mat[][9],int n,int i,int j){
	if(i==n){
		// print the solution
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				cout<<mat[k][l]<<" "; 
			}
			cout<<endl;
		}

		return true;
	}
	if(j==n){
		return SudokuSolver(mat,n,i+1,0);
	}
	if(mat[i][j]!=0){
		return SudokuSolver(mat,n,i,j+1);
	}
	// Place the number
	for(int number=1;number<=n;number++){
		if(KyaNumberRakhSkteHai(mat,n,i,j,number)){
			mat[i][j]=number;
			bool KyaBaakiBaatBani=SudokuSolver(mat,n,i,j+1);
			if(KyaBaakiBaatBani){
				return true;
			}
			mat[i][j]=0;
		}
	}
	return false;

}

int main(){
    int num;
    cin>>num;
	int mat[100][100];
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<num;i++){
        SudokuSolver(mat[i],9,0,0);
    }
	


	return 0;
}