#include<iostream>
using namespace std;

class ParameterizedConstructor {
public:
    int X; 
    ParameterizedConstructor(int x) { 
        X = x; 
    }
    
    ~ParameterizedConstructor() { }
};

int main() {
    ParameterizedConstructor obj(10);
    
    cout << obj.X << endl; 
    
    return 0;
}
