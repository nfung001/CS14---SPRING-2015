//Nicholas Fung
//SID: 861143399
//4/20/15
#include "lab3.h"
#include <iostream>
#include <stack>

using namespace std;

int main() {
    
    TwoStackFixed<int> a(5,2);
    a.pushStack1(3);
    a.pushStack1(4);
    a.pushStack2(5);
    a.pushStack2(6);
    a.pushStack1(2);
    a.display();
    cout << endl;
    a.popStack1();
    a.popStack2();
    a.display();
    cout << endl;
    
    
    TwoStackOptimal<int> b(4);
    b.pushFlexStack1(2);
    b.pushFlexStack1(1);
    b.pushFlexStack2(3);
    b.pushFlexStack2(4);
    b.display();
    cout << endl;
    
    stack<int> A;
    A.push(1);
    A.push(2);
    A.push(3);
    cout << A.size();
    cout << endl;
    int n = A.size();
    stack<int> B;
    stack<int> C;
    showTowerStates(n,A,B,C);
    return 0;
}