#include <iostream>
#include <string>

using namespace std;

class Publication{
public:
    string name;
    float price;
    Publication(){
        name = "NULL";
        price = 0;
    }
    void PutData(){
        cout << "Input name and price: \n";
        cin >> name >> price;
    }
    void GetData() {
        cout << "Book - " << name << endl << "Price - " << price << endl;

    }
};


class Sales{
public:
    float x1,x2,x3;
    Sales(){
        x1=0;
        x2=0;
        x3=0;
    }
    void GetData(){
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
        cout << "x3 = " << x3 << endl;
    }

    void PutData( ){
        cout << "Input x1 ,x2 ,x3:"<< endl;
        cin >> x1 >> x2 >> x3;
    }

};

class Book : public Publication,Sales {
public:
    int PageCount;
    Book(){
        PageCount = 0;
    }
    void PutData() {
        Publication::PutData();
        cout << "Input count of pages: \n";
        cin >> PageCount;
    }
    void GetData(){
        Publication::GetData();
        cout << "Count of pages: " << PageCount;
    }

};

class Type : public Publication, Sales {
public:
    float RecSize;
    Type() {
        RecSize = 0;
    }
    void PutData() {
        Publication::PutData();
        cout << "Input size of audio record: \n";
        cin >> RecSize;
    }
    void GetData() {
        Publication::GetData();
        cout << "Size of audio revord: ";

    }


};

int main()
{
    Publication book;
    book.PutData();
    book.GetData();
    return 0;
}
