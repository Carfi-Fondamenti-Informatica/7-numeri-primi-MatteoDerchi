#include <iostream>
using namespace std;
#include "lib.h"

int main() {
    int a=0;
    cin>>a;
    if (numeroprimo(a)==true){
        cout<< "numero primo";
    }else{
        cout<<"numero non primo";
    }
    return 0;
}
