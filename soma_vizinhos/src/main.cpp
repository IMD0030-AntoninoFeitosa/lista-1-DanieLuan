/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void ){
    int n, m;
    int sum = 0;

    while(cin >> std::ws >> m >> n){
        if(n > 0){
            for(int i = 0; i < n; i++){
                sum += m + i;
            }
        }
        else if(n < 0){
            for(int i = 0; i > n; i--){
                sum += m + i;
            }
        }
        else{
            sum = m;
        }

        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
