//
// Created by Matteo on 30/11/2021.
//

#include "lib.h"
bool numeroprimo(int a){
    bool t;
    for(int i=2;i<a;){
        if (a%i != 0){
            t= true;
            return (t);
        }else{
            t=false;
            return (t);
        }
    }return bool(a);
}
