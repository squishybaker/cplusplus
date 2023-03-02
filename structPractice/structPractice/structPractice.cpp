// structures/ classes notes
// https://www.w3schools.com/cpp/cpp_structs.asp

#include <iostream>
#include <string>

//using namespace std;

class Pokemon {
public:
    std::string name;
    int health;
    char gender;
    void takeDamage(int damage) {
        health -= damage;
    }
//    char getGender() {
//        return gender;
//    }
protected:
    char gender;
};

class FireTypePokemon : public Pokemon {
public:
    void burn() {
        std::cout << "BURRRRNN!\n";
    }
};

struct Trainer {
    std::string name;
    Pokemon pokemon[];
};

void printPokemon(Pokemon p) {
    std::cout << p.name << " " << " (" << p.health << ")" << "\n";
}

int main() {


    Pokemon vaporeon;
    vaporeon.name = "Fishy";
    vaporeon.health = 120;
    vaporeon.gender = 'Z';

    vaporeon.takeDamage(100);
    printPokemon(vaporeon);

    Pokemon* pointoreon = &vaporeon;
    std::cout << pointoreon << std::endl;

    Trainer ash;
    ash.name = "Ash";
    ash.pokemon[0] = vaporeon;
}