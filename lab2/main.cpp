#include <iostream>
#include <string>
using namespace std;

class Vegetables
{
    string Color;
    int Price;
public:
    Vegetables()
    {
        Color= "none";
        Price =0;
    }
    Vegetables( string c , int _price)
    {
        c = Color;
        _price = Price;
    }
    Vegetables( const Vegetables&);

    void SetColor( string c )
    {
        Color = c;
    }
    string GetColor( ) {
        return Color;
    }
    ~Vegetables()
    {

    }


    void SetPrice( int _price)
    {
        Price = _price;
    }
    int GetPrice( )
    {
        return Price;
    }
    void Print ()
    {
        cout << "Color-" << Color << endl;
        cout << "Price-" << Price << endl;
    }
    void Input ()
    {
        cout << "Vvedit' colir:";
        cin >> Color;
        cout << "Vvedit' cinu:";
        cin >> Price;
    }
};

int main() {
    Vegetables carrot;
    carrot.SetColor("none");
    carrot.GetColor();
    carrot.SetPrice(0);
    carrot.GetPrice();
    carrot.Input();
    carrot.Print();

    system("pause");
    return 0;
}
