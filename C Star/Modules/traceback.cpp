#include "traceback.h"
#include <iostream>
using namespace std;
void raise_error(int code ,string error,string definition){
    cout << "C* Traceback [Error "<< code <<"]\n";
    cout << error <<"\n" << definition <<"\n";
    exit(code);
}