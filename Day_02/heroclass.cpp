#include <iostream>
#include <string>

using namespace std;

class Superhero {
private:
    string name;
    bool isWearingCap;
    bool hasInvitation;

public:
    // Constructor
    Superhero(string name, bool isWearingCap, bool hasInvitation) 
        : name(name), isWearingCap(isWearingCap), hasInvitation(hasInvitation) {}

    // Method to check if the superhero can enter the party
    bool canEnterParty() {
        if (isWearingCap) {
            if (hasInvitation) {
                cout << name << " is wearing a cap and has an invitation. Can enter the party!" << endl;
                return true;
            } else {
                cout << name << " is wearing a cap but does not have an invitation. Cannot enter the party." << endl;
                return false;
            }
        } else {
            if (hasInvitation) {
                cout << name << " has an invitation but is not wearing a cap. Cannot enter the party." << endl;
                return false;
            } else {
                cout << name << " is neither wearing a cap nor has an invitation. Cannot enter the party." << endl;
                return false;
            }
        }
    }
};

int main() {
    // Create superhero objects
    Superhero Deadpool("Deadpool", true, true);
    Superhero Wolverine("Wolverine", false, true);
    Superhero HumanTorch("HumanTorch", true, false);
    Superhero ProfessorX("ProfessorX", false, false);

    // Check if the superheroes can enter the party
    Deadpool.canEnterParty();
    Wolverine.canEnterParty();
    HumanTorch.canEnterParty();
    ProfessorX.canEnterParty();

    return 0;
}