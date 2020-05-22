#include <iostream>
using namespace std;
struct Triangle {
    int ab;
    int bc;
    int ac;
    Triangle(int x; int y; int z;){
        ab = x;
        bc = y;
        ac = z;
    }
    void method() {
        cout<<(as*bc)/2;
    }
};
