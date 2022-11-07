#include <iostream>

void RecursiveEquation(int startNumber, int numberOfRecursions){
    if(numberOfRecursions == 0){ // >= maybe use this?
        return;
    }
    int n = startNumber;
    int x = n;

    x = (x-1)*(x-2);
    std::cout << x << std::endl;
    RecursiveEquation(x, numberOfRecursions -= 1);
}

int main() {


    return 0;
}
