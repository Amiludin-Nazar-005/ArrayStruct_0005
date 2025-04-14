#include <iostream>
#include <string>
using namespace std;

struct player{
    string name;
    string id;
    string level;
    Weapon weapon;
};
struct Weapon{
    string name;
    int damage;
};


int main(){
    player pl;

    cout << "masukkan nama player= " ;
    getline(cin,pl.name) ;
    cout << "masukkan id= " ;
    cin >> pl.id ;
    cout << "masukkan level= " ;
    cin >> pl.level ;
    cin.ignore();
    cout << "masukkan nama weapon= ";
    getline(cin, pl.weapon.name);
    cout << "masukkan damage= ";
    cin >> pl.weapon.damage;

    cout << "tampilkan player" << endl;
    cout << "nama player= " << pl.name << endl;
    cout << "id player= " << pl.id << endl;
    cout << "level player= " << pl.level << endl;\
    cout << "nama weapon= " << pl.weapon.name << endl;
    cout << "damage weapon= " << pl.weapon.damage << endl;

}
