#include <iostream>
#include <ostream>
#include <string>
#include <windows.h>
#include <assert.h>
#include <conio.h>

using namespace std;

class TreeD {
public:
    int x,y,z;
    TreeD(int a, int b , int c) {
        x = a;
        y = b;
        z = c;
    }
    ostream & operator <<(ostream &stream, TreeD obj) {
        stream << obj.x << ", ";
        stream << obj.y << ", ";
        stream << obj.z << endl;
        return stream;
    }

    int main(){
        TreeD a(1,4,7);
        TreeD b(2,5,8);
        TreeD c(3,6,9);

    }

};
