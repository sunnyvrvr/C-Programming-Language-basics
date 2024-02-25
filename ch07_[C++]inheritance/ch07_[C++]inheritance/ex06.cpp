#include <iostream>
#include <string>
using namespace std;

class Item {
public:
    Item() {
        cout << "Item()" << endl;
    }
    explicit Item(int num) : num(num) {
        cout << "Item(int)" << endl;
    }
    explicit Item(string name) : name(name) {
        cout << "Item(string)" << endl;
    }
    Item(int num, string name) : num(num), name(name) {
        cout << "Item(int, string)" << endl;
    }
    operator int() const {
        cout << "Item::operator int()" << endl;
        return num;
    }
    operator string() const {
        cout << "Item::operator string()" << endl;
        return name;
    }
private:
    int num;
    string name;
};

int main() {
    cout << "===== A =====" << endl;
    Item a1 = Item(1);
    Item a2(2);
    Item a3 = (Item)3; // Item(3)와 같음
    //Item a4 = 4; //explicit 키워드에 의해 허용을 금함

    Item a5, a6, a7;
    a5 = Item(5);
    //a6 = 6; //explicit 키워드에 의해 혀용을 금함
    a7 = (Item)7;

    cout << "===== B =====" << endl;
    Item b4 = Item(string("Stone"));
    Item b6 = Item((string)"Stone");

    Item b7 = Item("Stone");
    Item b8 = (Item)"Stone";

    cout << "===== C =====" << endl;
    Item c1 = Item(1, "Stone");
    Item c2(2, "Dirt");
    //Item c4 = { 3, "Wood" };
    Item c5, c6;
    c5 = Item(4, "Grass");
    //c6 = { 5, "Water" };

    cout << "===== D =====" << endl;
    Item i1(1, "Stone");
    int inum = i1;
    cout << inum << endl;
    string iname = i1;
    cout << iname << endl;

    inum = (int)i1;
    cout << inum << endl;
    iname = (string)i1;
    cout << iname << endl;

    return 0;
}
