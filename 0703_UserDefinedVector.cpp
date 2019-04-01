#include <iostream>
using namespace std;

 class Vector{
public:
	int *arr;
	int cs;
	int ms;
	Vector(int s=4){
		cs=0;
		ms=s;
		arr=new int[s];
	}

 	void push_back(int data){
		if(cs==ms){
			int *oldArr=arr;
			int oldms=ms;

 			ms=2*ms;
			arr=new int[ms];
			for(int i=0;i<oldms;i++){
				arr[i]=oldArr[i];
			}
			delete []oldArr;
		}
		arr[cs]=data;
		cs++;
	}

 	void pop_back(){
		if(cs>0){
			cs--;
		}
	}

 	int size(){
		return cs;
	}

 	int capacity(){
		return ms;
	}

 	int operator[](int i){
		return arr[i];
	}

 };



 int main(){
	Vector v;

 	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	v.push_back(10);

 	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
 	v.pop_back();
	v.pop_back();
 	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
 	cout<<v.capacity()<<endl;
 	return 0;
} 