#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int choice, pHP, mHP, pAtk, pDef, pAgi, mAtk, mDef, mMag;

    // Initialize attributes
    pAtk = 10;
    pDef = 15;
    pAgi = 5;
    mAtk = 10;
    mDef = 15;
    mMag = 5;

    // Seed random number generator
    srand(time(0));

    // Set health points
    mHP = rand() % 50 + 60;
    pHP = rand() % 20 + 80;

    // Battle loop
    while (pHP > 0 && mHP > 0)
    {
        // Player's turn
        cout << "Choose action: 1-Attack 2-Quick Attack 3-Defend\n";
        cin >> choice;

        if (choice == 1)
        {
            pAtk = rand() % 20 + 10;
            pDef = rand() % 10 + 10;
            pAgi = rand() % 5;
        }
        else if (choice == 2)
        {
            pAtk = rand() % 5 + 10;
            pDef = rand() % 10 + 10;
            pAgi = rand() % 15;
        }
        else
        {
            pAtk = rand() % 10 + 10;
            pDef = rand() % 20 + 10;
            pAgi = rand() % 5;
        }

        // Monster takes damage
        int mDmg = max(0, (pAtk - mMag) - (mDef / pAtk));
        mHP -= mDmg;
        cout << "You dealt " << mDmg << " damage. Monster HP: " << mHP << "\n";

        if (mHP <= 0)
        {
            cout << "You won!\n";
            break;
        }

        // Monster's turn
        mAtk = rand() % 20 + 10;
        int pDmg = max(0, (mAtk - pAgi) - (pDef / mAtk));
        pHP -= pDmg;
        cout << "Monster dealt " << pDmg << " damage. Your HP: " << pHP << "\n";

        if (pHP <= 0)
        {
            cout << "You lost.\n";
            break;
        }
    }
    return 0;
}
