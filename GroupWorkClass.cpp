// Maazin Ahmed & Faith Galang
// Group work with Classes 2/22/18

#include <iostream>
using namespace std;

class SavingsAccount
{
private:
    double dollars;
public:
    double OpenAccount(double);
    double Withdrawal(double);
    double Deposit(double);
    double CurrentBalance(double, double, double);

};

int main () {

SavingsAccount Person;

int x, y, z;
cout << "How much money will you start with in your bank account?" << endl;
cin >> x;
x = Person.OpenAccount(x);
y = Person.Withdrawal(x);
z = Person.Deposit(x);
cout << Person.CurrentBalance(x,y,z);

return 0;
}

double SavingsAccount::OpenAccount(double x)
{
    cout << "You have " << x << " dollars in your bank account" << endl;
    return x;
}
double SavingsAccount::Withdrawal(double x)
{
    cout << "Please insert the amount of money you would like to Take-out of your account" << endl;
    cin >> x;
    return x;
}
double SavingsAccount::Deposit(double x)
{
    cout << "Please insert the amount of money you would like to Put-in of your account" << endl;
    cin >> x;
    return x;
}
double SavingsAccount::CurrentBalance(double x, double y, double z)
{
    cout << "This is the current balance in your account: " << x-y+z << endl;
}
