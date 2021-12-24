#include "traceback.h"
#include <iostream>
using namespace std;
void raise_error(int code ,string error,string definition){
    cout << "C* Traceback [Error "<< code <<"]\n";
    cout << "\033[0;31m" << error << "\n" << definition << "\033[0;37m\n";
    exit(code);
}