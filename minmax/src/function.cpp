#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int, int> min_max( int V[], std::size_t n )
{
    int min = V[0], minIndex = 0;
    int max = V[0], maxIndex = 0;

    for(int i = 0; i < n; i++){
        if(V[i] < min){
            min = V[i];
            minIndex = i;
        }
        if(V[i] >= max && i > maxIndex){
            max = V[i];
            maxIndex = i;
        }
    }
    if(n == 0){
        return { -1, -1 };
    }
    
    return { minIndex, maxIndex };
}
