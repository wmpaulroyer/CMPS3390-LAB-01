#include <iostream>
#include "math.h"
using namespace std;

int main(){
    
    int x = 30;
    int y = 10;

    cout << "WELCOME TO MY APP!" << endl;
    cout << "I'm using git!" << endl;

    cout << x << " plus " << y << " is " << add(x,y) << endl;
    cout << x << " minus " << y << " is " << subtract(x,y) << endl;
    cout << x << " divided by " << y << " is " << divide(x,y) << endl;
    cout << x << " multiplied by " << y << " is " << multiply(x,y) << endl;   
    
    return 0;
}
