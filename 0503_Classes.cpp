#include<iostream>
#include<cstring>
using namespace std;
class Car{
    private:
    int price;
    public:
    int model;
    int seats;
    char *name;
    
    void print(){
        cout<<"Price "<<price<<endl;
        cout<<"Model "<<model<<endl;
        cout<<"Seats "<<seats<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"-------------end-----------------"<<endl;
    }
    void SetName(char *n){
        name=new char[strlen(n)+1];
        strcpy(name,n);
    }
    void SetPrice(int p){
        if(p<100){
            price=150;
        }
        else{
            price=p;
        }
        
    }
    void GetPrice(){
        cout<<price<<endl;
    }
    // Default Constructor
    Car(){
        name=NULL;

        cout<<"------I am Default Constructor------"<<endl;
        cout<<"------Creating An Object------"<<endl;
        
    }
    // Parameterized Constructor
    Car(char *n,int p, int s,int m){
        cout<<"------I am Parameterized Constructor------"<<endl;
        name=new char[strlen(n)+1];
        strcpy(name,n);
        price=p;
        seats=s;
        model=m;
    }
}; 
int main(){
    Car A;
    A.SetPrice(230);
    A.model=101;
    A.seats=4;
    A.SetName("Tiago");
    A.print();
    cout<<"price of A ";
    A.GetPrice();
    Car B("Jaguar",4523,2,001);
    B.print();
    

}