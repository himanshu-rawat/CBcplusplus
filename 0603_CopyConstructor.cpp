// Classes
#include <iostream>
#include<cstring>
using namespace std;
// ---------------- BLUEPRINT ------------------
class Car{
private:
	int price;
public:
	int seats;
	char *name;
	int model;

 	// Default Constructor
	Car(){
		name=NULL;
		cout<<"Creating an Object"<<endl;
	}
    // Copy Constructor
    Car(Car &X){
      name = new char[strlen(X.name)+1];
      strcpy(name,X.name);
      price=X.price;
      model=X.model;
      seats=X.seats;
    }

 	
 	void SetPrice(int p){
			price=p;	
	}

 	int GetPrice(){
		return price;
	}

 	void SetName(char *n){
		name=new char[strlen(n)+1];
		strcpy(name,n);
	}

 	void print(){
		cout<<"Name   : "<<name<<endl;
		cout<<"Price  : "<<"$"<<price<<endl;
		cout<<"Model  : "<<model<<endl;
		cout<<"Seats  : "<<seats<<endl<<endl;;
	}
    void operator+=(Car X){
        char *oldname=name;
        name = new char[ strlen(X.name) +strlen(name)+ 1 ];
        strcpy(name,oldname);
        int length=strlen(X.name);
        int oldlength=strlen(oldname);
        int k=0;
        for(int i=0;i<length;i++){
            name[i]=X.name[k];
            k++;
        }
        price=price+X.price; 
        seats=seats+X.seats;
        model=model+X.model;
    }
    void operator>(Car X){
        if(price>X.price){
            cout<<"E is greater than C";
        }
        else{
            cout<<" C is greater than E";
        }
    }
    ~Car(){
        cout<<"Deleting The Car "<<name<<endl;
    }
};

 int main(){		
	Car E; // Object of class car
    E.SetName("BMW");
    E.SetPrice(300);
    E.seats=2;
    E.model=1010;

    Car C;
    C.SetName("Suzuki");
    C.SetPrice(200);
    C.seats=3;
    C.model=1011;

    Car *MyCar= new Car;
    (*MyCar).SetName("Hummer");
    (*MyCar).SetPrice(300);
    (*MyCar).model=1111;
    (*MyCar).seats=12;
    (*MyCar).print();
    delete MyCar;
    // E+=C;
    // E>C; 
    
 	
 	return 0;
} 
