//
// Created by Matteo on 30/11/2021.
//

#include "lib.h"
bool numeroprimo (int a,int b){
    if (a<0){
        return false;
    }
    else if (a==1){
        return true;
    }
    else if (b==1){
        return true;
    }
    else if (a%b==0){
        return false;
    }
    numeroprimo(a,--b);
}
