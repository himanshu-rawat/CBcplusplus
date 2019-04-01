#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n,int i){
    //Base Case
    if(i==n-1){
        return;
    }
    //Recursive Case
    int min=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
            min=j;
        }
    }
    swap(arr[i],arr[min]);
    SelectionSort(arr,n,i+1);

}
int main(){
    int arr[5]={1,5,2,0,4};
    SelectionSort(arr,5,0);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}