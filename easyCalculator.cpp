#include<iostream>
using namespace std;
float addition(float , float);
float subtract(float , float);
float divide(float , float);
float multiply(float, float);
void show(float);
float addition(float x, float y){
    return(x+y);
}
float subtract(float x, float y){
    return(x-y);
}
float divide(float x, float y){
    return(x/y);
}
float multiply(float x, float y){
    return(x*y);
}
void show(float c){
    cout<<"The answer is : "<<c;
}