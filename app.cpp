#include <iostream>
#include "math.h"
using namespace std;

int main(){
    
    int x = 20;
    int y = 30;

    cout << "WELCOME TO MY APP!" << endl;
    cout << "I'm using git!" << endl;

    //THIS IS A COMMENT
    //THIS IS ANOTHER COMMENT

    cout << x << "plus" << y << " is " << x+y << endl;
    cout << x << "minus" << y << " is " << x-y << endl;
    cout << x << "divided by" << y << " is " << x/y << endl;
    cout << x << "multiplied by" << y << " is " << x*y << endl;   
   
    cout << x << " plus " << y << " is " << add(x,y) << endl;
    cout << x << " minus " << y << " is " << subtract(x,y) << endl;
    cout << x << " divided by " << y << " is " << divide(x,y) << endl;
    cout << x << " multiplied by " << y << " is " << multiply(x,y) << endl;   
    
    return 0;
}
