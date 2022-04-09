#include <iostream>
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr ){
    int end = arr.size() - 1;
    int start = 0;
    std::string aux;

    while(start < end){
        aux = arr[start];
        arr[start] = arr[end];
        arr[end] = aux;

        start++;
        end--;
    }
}