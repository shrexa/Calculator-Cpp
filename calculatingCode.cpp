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

int main(){
    float a,b,sum,sub,div,mul;
    char c;
    cout<<"Enter your first number please : ";
    cin>>a;
    cout<<"Enter arithmetic symbol please (+,-,*,/) : ";
    cin>>c;
    cout<<"Enter your second number please : ";
    cin>>b;
    
    switch(c){
    case '+':
    sum=addition(a,b);
    show(sum);
    break;
    case '-': 
    sub=subtract(a,b);
    show(sub);
    break;
    case '/':
    div=divide(a,b);
    show(div);
    case '*' :
    mul=multiply(a,b);
    show(mul);
    }

}
