#include<iostream>
using namespace std;

class ParameterizedConstructor {
public:
    int X; // 1. Declare the member variable
    
    // 2. Initialize the member variable in the constructor
    ParameterizedConstructor(int x) { 
        X = x; 
    }
    
    ~ParameterizedConstructor() { }
};

int main() {
    // 3. Create the object
    ParameterizedConstructor obj(10);
    
    // 4. Access X using the object instance 'obj'
    cout << obj.X << endl; 
    
    return 0;
}
