#include <iostream>
#include <vector>
#include <vector>

using namespace std;

class MinStack {
public:
    vector < vector <int> > s;
    
    MinStack() {
    };
    
    void push(int val) {
        if (s.empty()) s.push_back( {val,val} );
        else s.push_back( {val,min( s.back()[1] , val )});
    };
    
    void pop() {
        s.pop_back();
    };
    
    int top() {
        return s.back()[0];    
    };
    
    int getMin() {
        return s.back()[1];    
    };
};

int main(){
    return 0;
}
