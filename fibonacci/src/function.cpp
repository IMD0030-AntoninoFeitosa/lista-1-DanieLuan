#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.

    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    std::vector<unsigned int> fib_vector{};

    int fib1 = 0;
    int fib2 = 1;
    int fib3 = 0;


    while(fib3 < n){

        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;

        if(fib3 < n){
            if(fib3 == 1){ //First case to put {1, 1, ...};
                fib_vector.push_back(fib2);
            }
            fib_vector.push_back(fib3);
        }
    }

    return fib_vector;
}
