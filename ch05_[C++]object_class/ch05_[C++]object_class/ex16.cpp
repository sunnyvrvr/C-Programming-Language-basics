#include <iostream>
using namespace std;

struct Animal {
    float xpos = 1;
    float ypos = 2;
    virtual ~Animal() {}
};

struct FlyingAnimal : public Animal {
    float zpos = 3;
};

void printAnimals(Animal** a, int n) {
    for (int i = 0; i < n; i++) {
        cout << "(" << a[i]->xpos << ", " << a[i]->ypos << ")" << endl;
    }
}

int main() {
    Animal** a = new Animal * [5];
    for (int i = 0; i < 5; i++) {
        a[i] = new FlyingAnimal;
    }

    printAnimals(a, 5);

    for (int i = 0; i < 5; i++) {
        delete a[i];  // �� ĭ���� �Ҵ�� ��ü�� �����Ƿ� �� ĭ���� �����Ѵ�.
    }
    delete[] a;       // ������ �迭�� �����Ѵ�.
}