#include<iostream>
#include<cstring>
using namespace std;
class School{
    private:
    int marks;
    char *designation;
    public:
    char *name;
    char subject[20];
    float popular;

    School(){
        marks=0;
        *name=NULL;
    }
    School(int MarksObtained){

    }
    void SetDesig(char *d){
        strcpy(designation,d);
        cout<<"Designation "<<designation<<endl;
    }
    void GetDesig(){
        cout<<"Designation "<<designation<<endl;
    }
    void SetName(char *n){
        strcpy(name,n);
    }
    void GetName(){
        cout<<"Name :-"<<name<<endl;
    }
    void SetMarks(int MarksObtained ){
        marks=MarksObtained;
    }
    void GetMarks(){
        cout<<"Marks :-"<<marks<<endl;
    }

    void print(){
    
    }

    ~School(){

    }
};

int main(){
    School Student;
    // char post[100]="Student";
    // Student.SetDesig(post);
    // Student.GetDesig();
    Student.SetName("Ram");
    Student.GetName();
    Student.SetMarks(89);
    Student.GetMarks();
    return 0;
}