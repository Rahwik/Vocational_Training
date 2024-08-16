#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Character
{
public:
    int hp, atk, def, agi, mag;

    Character(int health, int attack, int defense, int agility, int magic = 0)
        : hp(health), atk(attack), def(defense), agi(agility), mag(magic) {}

    int attack(Character &target)
    {
        int dmg = max(0, (atk - target.mag) - (target.def / atk));
        target.hp -= dmg;
        return dmg;
    }

    void operator()(int newAtk, int newDef, int newAgi)
    {
        atk = newAtk;
        def = newDef;
        agi = newAgi;
    }
};

int main()
{
    srand(time(0));

    Character player(rand() % 20 + 80, 10, 15, 5);
    Character monster(rand() % 50 + 60, 10, 15, 5, 5);

    while (player.hp > 0 && monster.hp > 0)
    {
        int choice;
        cout << "Choose action: 1-Attack 2-Quick Attack 3-Defend\n";
        cin >> choice;


        if (choice == 1)
            player(rand() % 20 + 10, rand() % 10 + 10, rand() % 5);
        else if (choice == 2)
            player(rand() % 5 + 10, rand() % 10 + 10, rand() % 15);
        else
            player(rand() % 10 + 10, rand() % 20 + 10, rand() % 5);

        int dmg = player.attack(monster);
        cout << "You dealt " << dmg << " damage. Monster HP: " << monster.hp << "\n";

        if (monster.hp <= 0)
        {
            cout << "You won!\n";
            break;
        }

        monster.atk = rand() % 20 + 10;
        dmg = monster.attack(player);
        cout << "Monster dealt " << dmg << " damage. Your HP: " << player.hp << "\n";

        if (player.hp <= 0)
        {
            cout << "You lost.\n";
            break;
        }
    }
    return 0;
}
