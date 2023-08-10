#include<iostream>
using namespace std;

class StandardCalc{
    public:
    void add();
    void double sub();

};

static double StandardCalc::add(double a, double b){
    return (a+b);
}

static double StandardCalc::sub(double a,double b){
    return(a-b;)
}

static double StandardCalc::div(double a,double b){
    return(a/b;)
}

static double StandardCalc::mul(double a,double b){
    return(a*b;)
}
static double StandardCalc::mod(double a,double b){
    return(a%b;)
}



void askType(){
    int type;
    cout<<"\n\n\t\t\t ~ ~ ~ ~ TYPES OF CALCULATORS ~ ~ ~ ~ \t\t\t\n\n";
    cout<<"1.Standard Calculator\n2.Scientific Calculator\n\nEnter your Choice (1 or 2) : ";
    cin>>type;
}

int main(){

    StandardCalc obj1;
    
    askType();
    if (type=1){
        cout<<"\n\n\t\t ~ ~ ~ Operations ~ ~ ~ \t\t\n\n";
        cout<<"1.Addition\n2.Subraction\n3.Multiplication\n4.Division\n5.Modulus\n";
    }
    else if (type='2')
    {
        cout<<"\n\n\t\t ~ ~ ~ Operations ~ ~ ~ \t\t\n\n";
        cout<<"1.Sqaure Root\n2.Square\n3.Cube\n4.Power\n5.Factorial\n6.Sine function\n7.Cos Function\n8.Tan Function\n";

    } else{
        cout<<"\nPlease Enter 1 or 2 only ! ";
    }
    

    obj1.add

}