#include<iostream>
using namespace std;
int main(){

    //switchCase
    char ch;
    cin>>ch;
    switch (ch)
    {   default:cout<<"invalid input"<<endl;
                break;

        case 'n':
        case 'N': cout<<"North"<<endl;
                  break;
        case 's':
        case 'S': cout<<"South"<<endl;
                    break;
        case 'e':
        case 'E': cout<<"East"<<endl;
                break;
        case 'w':
        case 'W': cout<<"West"<<endl;
                    break;
        
       
    }

    
    return 0;
}