//Nicholas Fung
//SID: 861143399
//4/13/15
#include "lab2.h"

using namespace std;

List<Type> list::elementSwap( List<Type> lst, int pos )
{
    
    
    
}

int forward_list::primeCount( forward_list<int> lst)
{
    return primeCount(lst.head);

}

int forward_list::primeCount(Node *i)
{
    if (i->next == 0)
    {
        if (isPrime(i->data))
        {
            return + 1;
        }
        
        return 0;
    }
    
    if (isPrime(i->data))
    {
        return primeCount(i->next) + 1;
    }
    
    return primeCount(i->next) + 0;
}


bool forward_list::isPrime(int i)
{
    for(int p = 2; p <= i; ++p)
    {
        if (i % p == 0)
        {
            return false;
        }
    }
    return true;
}