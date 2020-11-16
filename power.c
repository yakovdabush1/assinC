#include "myMath.h"
#define e 2.7182

double Exp(int x){
    return Pow(e, x);
}

double Pow(double x, int y){
    double sum = 1;

    for(int i = 0; i < y; i++){
        sum = sum * x;
    }

    return sum;
}