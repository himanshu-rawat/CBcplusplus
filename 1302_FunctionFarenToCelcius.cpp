#include<iostream>
using namespace std;

void fToC(int f){

    float celcius;
    //T(°C) = (68°F - 32) × 5/9 = 20 °C
    // -50 °F =	-45.56 °C
    celcius =  5*(f-32)/9.0;
    cout<<"the temperature in celcius is:  "<<celcius<<endl;

}

int main(){

    int f;
    cout<<"enter the temperature in farenhenit: ";
    cin>>f;
    fToC(f); 
    return 0;
}