/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void){

    int x;
    double range[5];

    range[0] = 0;
    range[1] = 0;
    range[2] = 0;
    range[3] = 0;
    range[4] = 0;

    while(cin >> std::ws >> x){
        if(x >= 0 && x < 25){ //Ver isso depois!
            range[0]++;
        }
        else if(x >= 25 && x < 50){
            range[1]++;
        }
        else if(x >= 50 && x < 75){
            range[2]++;
        }
        else if(x >= 75 && x < 100){
            range[3]++;
        }
        else{
            range[4]++;
        }
    }

    double total = range[0] + range[1] + range[2] + range[3] + range[4];

    for(int i = 0; i < 5; i++){
        cout << std::setprecision(4) << (range[i]/total)*100.0 << std::endl;
    }


    return 0;
}
