#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){
    int flag;
    for(int i=0;i<n-1;i++){
        flag=0;
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
                flag=1;
                swap(arr[j],arr[j+1]);
			}
		}
        if(flag==0){
            return;
        }
        // Print After i th iteration
        for(int i=0;i<n;i++){
             cout<<arr[i]<<" ";
         }
        cout<<endl;
	}
    
}
void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}
int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    SelectionSort(a,n);
    //BubbleSort(a,n);
    //Selection Sort
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(a[i]>a[j]){
    //             swap(a[i],a[j]);
    //         }
    //     }
    //     for(int i=0;i<n;i++){
    //          cout<<a[i]<<" ";
    //      }
    //     cout<<endl;
    // }
    // for(int i=0;i<n-1;i++){
	// 	int min_index=i;
	// 	for(int j=i+1;j<n;j++){
	// 		if(a[j]<a[min_index]){
	// 			min_index=j;
	// 		}
	// 	}
	// 	if(min_index!=i){
	// 		int temp=a[min_index];
	// 		a[min_index]=a[i];
	// 		a[i]=temp;
	// 	}
    //     for(int i=0;i<n;i++){
    //           cout<<a[i]<<" ";
    //     }
    //     cout<<endl;
	// }
   // Implement Bubble Sort
   // cout<<endl<<"Bubble Sort "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}