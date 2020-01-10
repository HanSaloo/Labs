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

class Book : public Publication {
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

class Type : public Publication {
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
