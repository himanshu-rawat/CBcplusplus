#include<iostream>
using namespace std;
int  StringToInt(char ch[],int n){
    if(n==0){
        return 0;
    }
    int val=ch[n-1]-'0';
    int recCase=StringToInt(ch,n-1);
    return recCase*10+val;

}
void IntToString(int n){
    char ch[][100]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0){
        return;
    }
    IntToString(n/10);
    cout<<ch[n%10]<<" ";
}
int  BinarySearch(int arr[],int start,int end,int key){
    //Base Case
    if(start>end){
        return -1;
    }
    //Recursive Case
    int mid=(start+end)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
        end=mid-1;
        BinarySearch(arr,start,end,key);
    }
    else{
        start=mid+1;
        BinarySearch(arr,start,end,key);

    }

}
void BubbleSort(int arr[],int size){
    //Base Case
    if(size==0){
        return ;
    }
    // Recursive Case
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    BubbleSort(arr,size-1);

}
void merge(int a[],int x[],int y[],int s,int e){
	int mid=(s+e)/2;
	int i=s,j=mid+1,k=s;

	while(i<=mid && j<=e){
		if(x[i]<y[j]){
			a[k]=x[i];
			k++;
			i++;
		}
		else{
			a[k]=y[j];
			k++;
			j++;
		}
	}
	if(i<=mid && j>e){
		while(i<=mid){
			a[k]=x[i];
			k++;
			i++;
		}
	}
	else{	
		while(j<=e){
			a[k]=y[j];
			k++;
			j++;
		}
	}
}
void MergeSort(int arr[],int start,int end){
    //Base Case
    if(start>=end){
        return;
    }
    //Divide
    int mid=(start+end)/2;
    int a[100],b[100];
    for(int i=0;i<=mid;i++){
        a[i]=arr[i];
    }
    for(int i=mid+1;i<=end;i++){
        b[i]=arr[i];
    }
    //Sort
    MergeSort(a,start,mid);
    MergeSort(b,mid+1,end);

    //Merge the Above Two Arrays after performing MergeSort.
    merge(arr,a,b,start,end);

}
int main(){
    int arr[]={3,5,1,6,2,5,3,67,22,77,27,34};
    
    int size=sizeof(arr)/sizeof(int);
    MergeSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}