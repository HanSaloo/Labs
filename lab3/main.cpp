#include <iostream>
#include <string>
#include <windows.h>
#include <assert.h>
#include <conio.h>

using namespace std;

class Kolo {
    double x, y;
    double r;
private:
    Kolo() {
        x = 0;
        y = 0;
        r = 0;
    }
    Kolo(double r_,double px_, double py_) {
        r_ = r;
        px_= x;
        py_ = y;
    }
public:
    Kolo(double=0,double=0);
    Kolo operator +(Kolo&);
    Kolo operator -(Kolo&);
    Kolo operator ==(Kolo&);
    Kolo operator >(Kolo&);
    Kolo operator <(Kolo&);
    friend istream& operator >>(istream&,Kolo&);
    friend ostream& operator <<(ostream&,Kolo&);

Kolo::Kolo(double r, double i)
{
    x = r; y = i;
}
Kolo~Kolo()
{
}
Kolo Kolo::operator+(Kolo& p)
{
    return Kolo(x+p.r , x+p.x);
}

  /* ostream& operator<<(ostream& os,const Kolo& klo) {
        os<<Kolo;



        return os;
    }*/




    void Input() {
        cout << "Input radius: " << endl;
        cin >> r;
        cout << "Input cnter pos(x and y): " << endl;
        cin >> x >> y;
    }
    /*   void Print () {
        cout << "Radius -  " << radiusP;
        cout << "Cnter pos(x and y)" << centerPx << centerPy;

    }*/
};

int main() {
    setlocale(LC_ALL, "ukr");

   //Kolo klo(1,2);
   // cout << klo;
}
