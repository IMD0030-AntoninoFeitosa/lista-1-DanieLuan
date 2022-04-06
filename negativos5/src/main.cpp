#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int vet[SIZE];
    int neg = 0;

    for(int i = 0; i < SIZE; i++){
        cin >> vet[i];
        if(vet[i] < 0){
            neg++;
        }
    }
    
    cout << neg << std::endl;

    return 0;
}
