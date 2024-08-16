#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class ZoobaGame {
private:
    int playerHealth;
    int enemyHealth;
    string playerName;
    string enemyName;

public:
    ZoobaGame() {
        playerHealth = 100;
        enemyHealth = 100;
        playerName = "Player";
        enemyName = "Enemy";
        cout << "Default constructor called" << endl;
    }

    ZoobaGame(string name) {
        playerHealth = 100;
        enemyHealth = 100;
        playerName = name;
        enemyName = "Enemy";
        cout << "Constructor with player name called" << endl;
    }

    ZoobaGame(string playerName, string enemyName) {
        playerHealth = 100;
        enemyHealth = 100;
        this->playerName = playerName;
        this->enemyName = enemyName;
        cout << "Constructor with player name and enemy name called" << endl;
    }

    void displayStatus() {
        cout << "Player " << playerName << " Health: " << playerHealth << endl;
        cout << "Enemy " << enemyName << " Health: " << enemyHealth << endl;
    }

    void attackEnemy(int damage) {
        enemyHealth -= damage;
        cout << playerName << " attacks " << enemyName << " for " << damage << " damage!" << endl;
    }

    void attackEnemy(string specialMove, int damage) {
        enemyHealth -= damage;
        cout << playerName << " uses " << specialMove << " on " << enemyName << " for " << damage << " damage!" << endl;
    }

    void healPlayer(int health) {
        playerHealth += health;
        cout << playerName << " heals for " << health << " health!" << endl;
    }

    bool isGameOver() {
        if (playerHealth <= 0) {
            cout << "Game Over! " << enemyName << " wins!" << endl;
            return true;
        } else if (enemyHealth <= 0) {
            cout << "Game Over! " << playerName << " wins!" << endl;
            return true;
        }
        return false;
    }
};

int main() {
    srand(time(0));

    ZoobaGame game1("Alice");
    game1.displayStatus();

    while (!game1.isGameOver()) {
        int playerChoice = rand() % 3;
        if (playerChoice == 0) {
            game1.attackEnemy(10);
        } else if (playerChoice == 1) {
            game1.attackEnemy("Fireball", 20);
        } else {
            game1.healPlayer(15);
        }

        game1.displayStatus();

        int enemyChoice = rand() % 2;
        if (enemyChoice == 0) {
            game1.attackEnemy(15);
        } else {
            game1.healPlayer(10);
        }

        game1.displayStatus();
    }

    return 0;
}