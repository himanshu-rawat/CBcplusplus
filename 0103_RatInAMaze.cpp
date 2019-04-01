#include <iostream>
using namespace std;
bool RatInMaze(char *maze[][5],int sol[][10],int i,int j,int n,int m){
	// base case
	if(i==n-1 && j==m-1){
		// Reached destination
		sol[i][j]=1;
		for(int k=0;k<n;k++){
			for(int l=0;l<m;l++){
				cout<<sol[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return -1;
	}
	// Recursive case
	sol[i][j]=1;
    // Check Rightwards
	if(j+1<m && maze[i][j+1]!='X'){
		bool KyaRightSeRaastaMilla=RatInMaze(maze,sol,i,j+1,n,m);
		if(KyaRightSeRaastaMilla){
			return true;
		}
	}
    // Check Downwards
	if(i+1<n && maze[i+1][j]!='X'){
		bool KyaNeecheSeRaastaMilla=RatInMaze(maze,sol,i+1,j,n,m);
		if(KyaNeecheSeRaastaMilla){
			return true;
		}
	}

	sol[i][j]=0;
	return false;
}


int main(){
    int n,m;
    cin>>n>>m;
    cin.ignore();
	char maze[1000][1000];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>maze[i][j]; 
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<maze[i][j]<<" "; 
    //     }
    //     cout<<endl;
    // }
	int sol[10][10]={0};
    for(int i=0;i<n;i++){
        RatInMaze(maze[i],sol,0,0,4,4);
    }
	// RatInMaze(maze[][],sol,0,0,4,4);
	return 0;
}