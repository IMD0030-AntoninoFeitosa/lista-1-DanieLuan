/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{
    location_t location;
    Ponto IE, SD, P;
    while(cin >> std::ws >> IE.x >> IE.y >> SD.x >> SD.y >> P.x >> P.y){
        location = pt_in_rect(IE, SD, P);
        if(location == BORDER){
            cout << "border" << endl;
        }
        else if(location == INSIDE){
            cout << "inside" << endl;
        }
        else if(location == OUTSIDE){
            cout << "outside" << endl;
        }
        else if(location == INVALID){
            cout << "invalid" << endl;
        }
    }
    return 0;
}
