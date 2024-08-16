#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Character
 {
private:
    string name;
    string species;
    string skill;
    vector<string> inventory;
    int health;
    int level;
    bool status;

public:
    // Default constructor
    Character()
     {
        this->name = "Unknown";
        this->species = "Unknown";
        this->skill = "Unknown";
        this->inventory = {};
        this->health = 100;
        this->level = 0;
        this->status = true;
    }

    // Single-parameter constructor
    Character(string species)
     {
        this->name = "Unknown";
        this->species = species;
        this->skill = "Unknown";
        this->inventory = {};
        this->health = 100;
        this->level = 0;
        this->status = true;
    }

    // Three-parameter constructor
    Character(string name, string species, string skill)
     {
        this->name = name;
        this->species = species;
        this->skill = skill;
        this->inventory = {};
        this->health = 100;
        this->level = 0;
        this->status = true;
    }

    void setSkill(string skill) 
    {
        this->skill = skill;
    }

    void setInventory(string item)
    
     {
        for (string i : inventory)
         {
            if (i == item) 
            
            {
                cout << "Player " << name << " already has " << item << endl;
                return;
            }
        }
        inventory.push_back(item);
    }

    void displayInventory()
     {
        cout << "Player " << name << " has [";
        for (size_t i = 0; i < inventory.size(); ++i)
         {
            cout << inventory[i];
            if (i < inventory.size() - 1) 
            {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    void setHealth(int health)
     {
        this->health = health;
    }

    void setLevel(int level)
     {
        this->level = level;
    }

    void setStatus(bool status) 
    
    
    {
        this->status = status;
    }

    void setName(string name)
     {
        this->name = name;
    }

    void setSpecies(string species)
     {
        this->species = species;
    }

    void performAction(string action)
     {
        cout << "Player " << name << " is " << action << endl;
    }

    void performAction(string action, string direction) 
    {
        cout << "Player " << name << " is " << action << " towards " << direction << endl;
    }

    void performAction(Character target, string weapon) 
    {
        cout << "Player " << name << " is attacking " << target.name << " with " << weapon << endl;
    }

    string getName() 
    {
        return name;
    }
};

int main()
 {
    Character nix("Nix", "Fox", "Dash");
    nix.setInventory("Shot Gun");
    nix.setInventory("Bomb");
    nix.setInventory("Bow & Arrow");
    nix.setInventory("Bomb"); 
    nix.displayInventory();

    Character fuze("Fuze", "Bird", "Fly");
    Character jade("Jade", "Ape", "Thunder clap");
    Character frank("Frank", "Bird", "Stomp");
    Character duke("Duke", "Rabbbit", "Catch");

    nix.performAction("walking");
    fuze.performAction("walking");
    jade.performAction("walking");
    frank.performAction("walking");

    jade.performAction("running", "East");
    jade.setInventory("Spear");
    jade.setInventory("Shot Gun");
    jade.displayInventory();

    jade.performAction(nix, "Shot Gun");

    duke.setInventory("Shot Gun");
    duke.setInventory("Bomb");
    duke.setInventory("Spear");
    duke.displayInventory();

    duke.performAction(jade, "Bomb");
    jade.performAction(duke, "Shot Gun");

    cout << "Player Nix is the King of the ZOO!" << endl;
    cout << "Total Animals in Zoo is 5" << endl;

    return 0;
}