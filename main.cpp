#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int a=0;
    cin >>a;
    if (numeroprimo(a,a-1)){
        cout<<"numero primo";
    }else{
        cout<<"numero non primo";
    }
    return 0;
}
