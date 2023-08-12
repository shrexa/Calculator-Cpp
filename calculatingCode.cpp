#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

class StandardCalc{
    public:
    static double add(double,double);
    static double sub(double,double);
    // static double div(double,double);
    // static double mul(double,double);
    // static double mod(double,double);    
};

double StandardCalc::add(double a, double b){
    return (a+b);
}

double StandardCalc::sub(double a,double b){
    return(a-b);
}

// double StandardCalc::div(double a,double b){
//     return(a/b);
// }

// double StandardCalc::mul(double a,double b){
//     return(a*b);
// }
// double StandardCalc::mod(double a,double b){
//     return(a%b);
// }


void clrscr(void);
void askType(){
    int type;
    cout<<"\n\n\t\t\t ~ ~ ~ ~ TYPES OF CALCULATORS ~ ~ ~ ~ \t\t\t\n\n";
    cout<<"1.Standard Calculator\n2.Scientific Calculator\n\nEnter your Choice : ";
    cin>>type;
    clrscr();  
}

int main(){

    StandardCalc obj1;
    
    askType();
   

    if (int type=1){
        cout<<"\n\n\t\t ~ ~ ~ Operations for Standard Calculator ~ ~ ~ \t\t\n\n";
        cout<<"1.Addition\n2.Subraction\n3.Multiplication\n4.Division\n5.Modulus\n6.Go Back\n\nEnter your Choice : ";
        int t;
        cin>>t;
        void clrscr();
        switch (t)
        {
        case 1:
            cout<<obj1.add(5,8);
            break;
        
        default:
        cout<<"\nPlease Enter a valid choice no.! ( between 1 to 6 only) ";

            break;
        }
    }
    else if (type='2')
    {
        cout<<"\n\n\t\t ~ ~ ~ Operations for Scientific Calculator~ ~ ~ \t\t\n\n";
        cout<<"1.Sqaure Root\n2.Square\n3.Cube\n4.Power\n5.Factorial\n6.Sine function\n7.Cos Function\n8.Tan Function\n6.Go Back\n";

    } else{
        cout<<"\nPlease Enter 1 or 2 only ! ";
        cin>>type;
    }
    

    obj1.add ;


    return 0;
}