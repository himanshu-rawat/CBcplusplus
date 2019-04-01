#include<iostream>
#include<cstring>
using namespace std;
class Car{
    public:
    static int  count;
    const int tyres;
    int price;
    int seats;
    int model;
    char *name;
    //to print the values
    void print() const{
        cout<<endl<<"---------In Print() Function-------"<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Price "<<price<<endl;
        cout<<"Mode "<<model<<endl;
        cout<<"Seats "<<seats<<endl;
        cout<<"Tyres "<<tyres<<endl; 
        cout<<" The Value of Count is "<<count<<endl;
        cout<<"=============End of Print() Function========"<<endl;
    }
    //SetName
    void SetName(char *ch){
        count++;
        name=new char[strlen(ch)+1];
        strcpy(name,ch);
    }
    //Default Constructor
    Car():tyres(4){         // Here tyres(4) is called Initializatin List
        name=NULL;
        cout<<"In Default Constructor"<<endl;
    }
    // Parameterized Constructor
    Car(char *n,int p,int m, int s):
        tyres(4),price(p),model(m),seats(s){    
        
        name=new char[strlen(n)+1];
        strcpy(name,n);

    }
    //Copy Constructor
    // Car(Car &X ){ 
    //     cout<<"In Copy Constructor"<<endl;
    //     name=new char[strlen(X.name)+1];
    //     strcpy(name,X.name);
    //     price=X.price;
    //     seats=X.seats;
    //     model=X.model;
    // }

    //Copy Assingnment Operator
    void operator=(Car X){
        if(name!=NULL){
            delete name;
            name=NULL;
        }
        cout<<" In Assingnment Operator"<<endl;
        name=new char[strlen(X.name)+1];
        strcpy(name,X.name);
        seats=X.seats;
        model=X.model;
        price=X.price;
    } 
    ~Car(){
        cout<<"In Destructor"<<endl;
    }
};
 int Car::count=0; 
int main(){
    Car MyCar("Hummer",50000,111,5);
    Car YourCar(MyCar);
    Car OurCar(YourCar);
    //MyCar.name[0]='S'; // Shallow Copy And Deep Copy Concept.
    Car AdvancedCar=MyCar; //Copy Assingment Operator
    AdvancedCar.price=300000;
    // AdvancedCar.print();
     MyCar.print();
    // YourCar.print();
    // OurCar.print();
    Car *DynoCar=new Car;       //Dynamic Object Allocation
    (*DynoCar).SetName("Dyno Automatic");
    (*DynoCar).price=999999;
    (*DynoCar).seats=1;
    (*DynoCar).model=999;
    (*DynoCar).print();
    delete DynoCar; // deleting dynamic object to free the memory space.
    return 0; 
}