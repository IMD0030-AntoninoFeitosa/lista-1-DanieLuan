#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.

    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    std::vector<unsigned int> fibs;
    unsigned int fib1 = 0;
    unsigned int fib2 = 1;
    unsigned int fib3 = 0;

    fibs.push_back(fib2);

    while(fib3 < n){

        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;

        if(fib3 > n){
            break;
        }
        fibs.push_back(fib3);
    }

    return fibs;
}
