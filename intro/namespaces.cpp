#include <iostream>

int myGlobal = 30;
int cout(){
    return myGlobal ;
}
namespace userDefined {
    int insideNamespace = 10 ;


    int cout(){
        return insideNamespace;
    }

}

int main(){
    userDefined::cout();
    cout();

    return 0;
}
