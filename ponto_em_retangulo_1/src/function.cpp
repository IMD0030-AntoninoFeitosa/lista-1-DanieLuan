#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P ){
    if((P.x > IE.x && P.x < SD.x) && ((P.y > IE.y && P.y < SD.y))){
        return INSIDE;
    }
    else if(
        (IE.y == P.y && (IE.x <= P.x && P.x <= SD.x)) ||
        (SD.y == P.y && (IE.x <= P.x && P.x <= SD.x)) ||
        (IE.x == P.x && (IE.y <= P.y && P.y <= SD.y)) ||
        (SD.x == P.x && (IE.y <= P.y && P.y <= SD.y)) ){
        return BORDER;
    }
    else{
        return OUTSIDE;
    }
}
