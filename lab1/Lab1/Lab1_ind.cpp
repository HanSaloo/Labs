#include <iostream>

using namespace std;

class time {
    int first; //hours
    int second; //minutes
    int mints; //math dice
public:
    time() {
        first = 0;
        second = 0;
        mints = 0;
    }

    int minutes() //convert all in minutes
    {
        mints = (first * 60)+second;
        return mints;
    }
    void Print() { //print tool
        cout << "Converted sucsses!\nMinutes:" << mints << endl;
    }
                void Input() { //intput tool
                cout << "Input your hour: ";
                cin >> first;
                cout << "Input your minutes: ";
                cin >> second;
    }
};

        int main() // main fucntion
        {
            time MyTime;
            cout << "Welcome to time converter!" << endl;
            MyTime.Input();
            MyTime.minutes();
            MyTime.Print();
        }
