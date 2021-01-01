#include <iostream>
using namespace std;

struct ListNode
{
    int value;
    struct ListNode *next;

};
ListNode *head;

int main () {

ListNode *nodePtr = head;
while (nodePtr != NULL)
{
    cout << nodePtr -> value << endl;
    nodePtr = nodePtr -> next;
}



return 0;
}
