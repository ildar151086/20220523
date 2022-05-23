/*
Факультет в университете.  
класса универа и класс факультета организовать связь в виде композии
и мешок с шариками организовать связь в виде агрегации
в main провести обращение к каждому объекту

*/

#include <iostream>

using namespace std;

class Fakultet {
    string fakultet;
    int countKafedra;
    int countLaboratorya;
public:
    void stFakultet(string name) {
        fakultet = name;
    }
    void setKafedra(int name) {
        countKafedra = name;
    }
    void setLaboratorya(int name) {
        countLaboratorya = name;
    }
    string getFakultet() {
        return fakultet;
    }
    int getKafedra() {
        return countKafedra;
    }
    int getLaboratorya() {
        return countLaboratorya;
    }
};

class University {
    static const int SIZE = 5;
    Fakultet fakeltet[SIZE];
public:
    University() {
        for (int i = 0; i < SIZE; i++) {
            fakeltet[i].stFakultet("Name Fakul");
            fakeltet[i].setLaboratorya(3);
            fakeltet[i].setKafedra(5);
        }
    }
    void print() {
        for (int i = 0; i < SIZE; i++) {
            cout << "Факультет " << fakeltet[i].getFakultet() << endl;
            cout << "Кафедра " << fakeltet[i].getKafedra() << endl;
            cout << "Лабораторий " << fakeltet[i].getLaboratorya() << endl;
        }
    }
};


int main(){
    setlocale(LC_ALL, "RUS");
    University univer;

    univer.print();


}
