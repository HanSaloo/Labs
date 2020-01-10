#include <iostream>

using namespace std;


class Int {
    int a;
    int b;
    int c;
public:
    Int() {
        a = 0;
        b = 0;
        c = 0;
    }
    int sum() {
        c = a + b;
        return c;
    }
    void Input(){
        cout << "Input a and b: " << endl;
        cin >> a >> b;

    }


    void Print() { //print tool
        cout << a << " + "<< b << " = " << c << endl;
    }

};

int main()
{
    Int sum;
    sum.Input();
    sum.sum();
    sum.Print();
    system("pause");

}
