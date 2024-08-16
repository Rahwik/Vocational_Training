#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

class Game
{
private:
    int ph;
    int eh;
    string pn;
    string en;
    vector<pair<string, int>> inv;

public:
    Game(string pn, string en)
    {
        ph = 100;
        eh = 100;
        this->pn = pn;
        this->en = en;
        cout << "Constructor with player name and enemy name called" << endl;

    
        inv.push_back(make_pair("Punch", 10));
        inv.push_back(make_pair("Kick", 15));
        inv.push_back(make_pair("Fireball", 20));
        inv.push_back(make_pair("Healing Potion", 15));
    }

    void displayStatus()
    {
        cout << "Player " << pn << " Health: " << ph << endl;
        cout << "Enemy " << en << " Health: " << eh << endl;
    }

    void playerAttack(int d)
    {
        eh -= d;
        cout << pn << " attacks " << en << " for " << d << " damage!" << endl;
    }

    void playerAttack(string sm, int d)
    {
        eh -= d;
        cout << pn << " uses " << sm << " on " << en << " for " << d << " damage!" << endl;
    }

    void playerHeal(int h)
    {
        ph += h;
        cout << pn << " heals for " << h << " health!" << endl;
    }

    void enemyAttack(int d)
    {
        ph -= d;
        cout << en << " attacks " << pn << " for " << d << " damage!" << endl;
    }

    void enemyHeal(int h)
    {
        eh += h;
        cout << en << " heals for " << h << " health!" << endl;
    }

    bool isGameOver()
    {
        if (ph <= 0)
        {
            cout << "Game Over! " << en << " wins!" << endl;
            return true;
        }
        else if (eh <= 0)
        {
            cout << "Game Over! " << pn << " wins!" << endl;
            return true;
        }
        return false;
    }

    void playerUseAttack()
    {
        int attackChoice = rand() % inv.size();
        string attackName = inv[attackChoice].first;
        int attackDamage = inv[attackChoice].second;

        if (attackName == "Healing Potion")
        {
            playerHeal(attackDamage);
        }
        else
        {
            playerAttack(attackName, attackDamage);
        }
    }
};

int main()
{
    srand(time(0));
    cout << "Choose your character to fight:" << endl;
    cout << "1. Nix" << endl;
    cout << "2. Joy" << endl;
    cout << "3. Jade" << endl;
    cout << "4. Paco" << endl;

    int choice;
    cin >> choice;

    string playerName;
    string enemyName;

    switch (choice)
    {
    case 1:
        playerName = "Nix";
        enemyName = "Joy";
        break;
    case 2:
        playerName = "Joy";
        enemyName = "Jade";
        break;
    case 3:
        playerName = "Jade";
        enemyName = "Paco";
        break;
    case 4:
        playerName = "Paco";
        enemyName = "Nix";
        break;
    default:
        cout << "Invalid choice. Defaulting to Nix." << endl;
        playerName = "Nix";
        enemyName = "Joy";
        break;
    }

    Game g1(playerName, enemyName);
    g1.displayStatus();

    while (!g1.isGameOver())
    {
        g1.playerUseAttack();

        g1.displayStatus();

        int ec = rand() % 2;
        if (ec == 0)
        {
            g1.enemyAttack(15);
        }
        else
        {
            g1.enemyHeal(10);
        }

        g1.displayStatus();
    }

    return 0;
}