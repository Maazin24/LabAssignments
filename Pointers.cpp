#include <iostream>
using namespace std;

void getNum(int *ptr);

int main () {

int num = 1;

int *ptr = nullptr;

ptr = &num;

cout << num << endl;
cout << ptr << endl;

int x = 25;

int *intptr = &x;

cout << *intptr << endl;

int vals[] = {4, 7, 11};

int *valptr = vals;

cout << valptr << endl;

return 0;
}
