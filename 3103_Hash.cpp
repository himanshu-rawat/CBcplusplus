#include<iostream>
#include "hashmap.h"
using namespace std;
int main(){
    hashMap <int> h;
    h.insert("Rohan",100);
    h.insert("aman",200);
    h.insert("ram",300);
    h.insert("shyam",400);
    h.insert("shyam",400);
    h.show();
    return 0;
}