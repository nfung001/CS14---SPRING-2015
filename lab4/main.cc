//Nicholas Fung
//SID: 861143399
//4/27/15
#include <cstdlib>
#include <iostream>
#include "lab4.h"

using namespace std;
int main(int argc, char *argv[]) {
    if(argc != 2)
    {
        cout << "Invalid number of arguments." << endl;
        exit(-1);
    }
    int k = atoi(argv[1]);
    
    cout << "Pre-order: " << endl;
	preorder(k);
	cout << endl;
	
	cout << "Post-order: " << endl;
	postorder(k);
	cout << endl;
	
	cout << "In-order: " << endl;
	inorder(k);
	cout << endl;
    
    return 0;
}