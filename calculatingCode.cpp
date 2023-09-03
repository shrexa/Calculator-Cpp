#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

class StandardCalc
{
public:
    static double add(double, double);
    static double sub(double, double);
    static double div(double, double);
    static double mul(double, double);
    // static double mod(double, double);
};

double StandardCalc::add(double a, double b)
{
    return (a + b);
}

double StandardCalc::sub(double a, double b)
{
    return (a - b);
}

double StandardCalc::div(double a, double b)
{
    return (a / b);
}

double StandardCalc::mul(double a, double b)
{
    return (a * b);
}
// double StandardCalc::mod(double a, double b)
// {
//     double mo = a % b;
//     return mo;
// }

// int type;
// void askType(){
// int type;
// cout<<"\n\n\t\t\t ~ ~ ~ ~ TYPES OF CALCULATORS ~ ~ ~ ~ \t\t\t\n\n";
// cout<<"1.Standard Calculator\n2.Scientific Calculator\n\nEnter your Choice : ";
// cin>>type;
// // clrscr();
// }

int main()
{

    // void clrscr(void);
    // void askType(int type);

    // askType;

    cout << "\n\n\t\t\t ~ ~ ~ ~ TYPES OF CALCULATORS ~ ~ ~ ~ \t\t\t\n\n";
    cout << "1.Standard Calculator\n2.Scientific Calculator\n\nEnter your Choice : ";
    int type;
    cin >> type;
    if (type==1)
    {
        cout<<"one";
    }
    else if (type==2)
    {
        cout<<"2";
    }
    else
    {
        cout<<"idk";
    }
    
    // clrscr();

    // if (type == 1)
    // {
    //     StandardCalc obj1;
    //     cout << "\n\n\t\t ~ ~ ~ Operations for Standard Calculator ~ ~ ~ \t\t\n\n";
    //     cout << "1.Addition\n2.Subraction\n3.Multiplication\n4.Division\n5.Modulus\n6.Go Back\n\nEnter your Choice : ";
    //     int t;
    //     cin >> t;
    //     // void clrscr();
    //     switch (t)
    //     {
    //     case 1:
    //     {
    //         double n1, n2;
    //         cout << "Enter the number 1 : ";
    //         cin >> n1;
    //         cout << "Enter the number 2 : ";
    //         cin >> n2;
    //         double ans1;
    //         ans1 = obj1.add(n1, n2);
    //         cout << "Addition is " << ans1 << endl;
    //         break;
    //     }
    //     case 2:
    //     {
    //         double n1, n2;
    //         cout << "Enter the number 1 : ";
    //         cin >> n1;
    //         cout << "Enter the number 2 : ";
    //         cin >> n2;
    //         double ans2;
    //         ans2 = obj1.sub(n1, n2);
    //         cout << "Subtraction is " << ans2;
    //         break;
    //     }
    //     case 3:
    //     {
    //         double n1, n2;
    //         cout << "Enter the number 1 : ";
    //         cin >> n1;
    //         cout << "Enter the number 2 : ";
    //         cin >> n2;
    //         double ans2;
    //         ans2 = obj1.mul(n1, n2);
    //         cout << "Multiplication is " << ans2;
    //         break;
    //     }
    //     case 4:
    //     {
    //         double n1, n2;
    //         cout << "Enter the number 1 : ";
    //         cin >> n1;
    //         cout << "Enter the number 2 : ";
    //         cin >> n2;
    //         double ans2;
    //         ans2 = obj1.div(n1, n2);
    //         cout << "Division is " << ans2;
    //         break;
    //     }
    //     case 5:
    //     {
    //         int n1, n2;
    //         cout << "Enter the number 1 : ";
    //         cin >> n1;
    //         cout << "Enter the number 2 : ";
    //         cin >> n2;
    //         //         double ans2;
    //         //         ans2 = obj1.mod(n1, n2);
    //         //         cout << "Modulus is " << ans2;
    //         int modul;
    //         modul = n1 % n2;
    //         cout << "The modulus of " << n1 << " and " << n2 << " is " << modul << endl;
    //         break;
    //     }
    //     default:
    //     {
    //         cout << "\nPlease Enter a valid choice no.! ( between 1 to 6 only) ";
    //         break;
    //     }
    //     }
    // }
    // else if (type == 2){
    //     cout << "\n\n\t\t ~ ~ ~ Operations for Scientific Calculator~ ~ ~ \t\t\n\n";
    //     cout << "1.Sqaure Root\n2.Square\n3.Cube\n4.Power\n5.Factorial\n6.Sine function\n7.Cos Function\n8.Tan Function\n9.Go Back\n\nEnter your Choice : ";
    //     int n;
    //     cin >> n;
    //     // void clrscr();
    //     switch (n)
    //     {
    //     case 1:
    //         cout << "power lga";
    //         break;
    //     case 2:
    //         break;
    //     case 3:
    //         break;
    //     case 4:
    //         break;

    //     default:
    //         cout << "\nPlease Enter a valid choice no.! ( between 1 to 9 only) ";
    //         break;
    //     }
    // }
    // else
    // {
    //     cout << "\nPlease Enter 1 or 2 only ! ";
    //     cin >> type;
    // }

    return 0;
}