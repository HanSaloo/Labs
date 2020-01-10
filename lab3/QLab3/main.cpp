#include <iostream>
#include <ostream>
#include <string>
#include <windows.h>
#include <assert.h>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <QtMath>

using namespace std;

class TreeD {
public:
    int x,y;
    double r;
    TreeD(int a, int b , double c) {
        x = a;
        y = b;
        r = c;

    }
    TreeD(){

    }
    TreeD operator+(TreeD& obj) { //owerload +
        TreeD temp;
        temp.x = this->x+obj.x;
        temp.y = this->y+obj.y;
        temp.r = this->r+obj.r;
        return temp;
    }
    TreeD operator-(TreeD& obj) { //owerload -
        TreeD temp;
        temp.x = this->x-obj.x;
        temp.y = this->y-obj.y;
        temp.r = this->r-obj.r;
        return temp;
    }
    TreeD operator*(TreeD& obj) { //owerload *
        TreeD temp;
        temp.x = this->x*obj.x;
        temp.y = this->y*obj.y;
        temp.r = this->r*obj.r;
        return temp;
    }
    TreeD operator/(TreeD& obj) { //owerload /
        TreeD temp;
        temp.x = this->x/obj.x;
        temp.y = this->y/obj.y;
        temp.r = this->r/obj.r;
        return temp;
    }
    TreeD operator=(TreeD& obj) { //owerload =
        this->x = obj.x;
        this->y = obj.y;
        this->r = obj.r;
        return *this;
    }
    bool operator>(TreeD& obj) { //owerload >
        return (this->r > obj.r);

    }
    bool operator<(TreeD& obj) { //owerload <
        return (this->r < obj.r);
    }
    bool operator==(TreeD& obj) { //owerload ==
        return (this->r == obj.r);
    }
    friend istream& operator>>(istream& stream, TreeD& obj);
    friend ostream& operator<<(ostream& stream, TreeD& obj);
    double MathPl() {
        double S;
        S = r * r * M_PI;
        return S;
    }

    void Input() {
        cout << "Input x,y,r:\n";
        cin  >> x >> y >> r;
    }
    void Print(){

        cout << "Plo" << MathPl();

    }


};
ostream& operator<<(ostream& stream,TreeD& obj){
    stream << "X = " << obj.x << "\nY = " << obj.y << "\nR = " << obj.r;

    return stream;
}
istream& operator>>(istream& stream, TreeD& obj){
    stream >> obj.x >> obj.y >> obj.r;
    return stream;
}

int main() {

    TreeD A(2, 5, 8.0), B, C;
    cin >> B;
    cout << A << endl << B << endl;

    A.MathPl();

    return 0;
}
