#include <iostream>
#include <fstream>
using namespace std;

const int MAX = 4;

struct Company
{
    string DivName[MAX];
    int quarter [MAX];
    double sales[MAX];
};

int main () {

Company A1;

for (int i = 1; i <= 4; i++)
{
    cout << "Which division will you input?" << endl;
    cin >> A1.DivName[i];
    for (int i = 1; i <= 4; i++)
    {
        cout << "Please enter the sales for quarter " << i << endl;
        cin >> A1.sales[i];
        if (A1.sales[i] < 0)
        {
            cout << "Invalid Input" << endl;
            cin >> A1.sales[i];
        }
    }
}

fstream DivisionSales;
DivisionSales.open("DivisionSales.txt", ios::out);

DivisionSales.write(reinterpret_cast<char *> (&A1), sizeof(A1));

DivisionSales.close();

return 0;
}
