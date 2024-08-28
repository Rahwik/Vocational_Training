#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int choice;
    int mHealth, pHealth, pInit, pAtk, pDef, pAgi;
    int mAtk, mDef, mMag;
    pAtk = 10;
    pDef = 15;
    pAgi = 5;
    mAtk = 10;
    mDef = 15;
    mMag = 5;
    srand((unsigned)time(0));
    pInit = rand() % 2 + 1;
    mHealth = rand() % 50 + 60;
    pHealth = rand() % 20 + 80;

    if (pInit == 1)
    {
        cout << "You start.\n==========\n";
        while (pHealth > 0 && mHealth > 0)
        {
            cout << "What do you want to do?\n1 - Fierce Attack\n2 - Lithe Attack\n3 - Defensive moves\n";
            do
            {
                cin >> choice;
            } while (choice > 3 || choice < 1);

            switch (choice)
            {
            case 1:
                pAtk = rand() % 20 + 10;
                pDef = rand() % 10 + 10;
                pAgi = rand() % 5;
                break;
            case 2:
                pAtk = rand() % 5 + 10;
                pDef = rand() % 10 + 10;
                pAgi = rand() % 15;
                break;
            case 3:
                pAtk = rand() % 10 + 10;
                pDef = rand() % 20 + 10;
                pAgi = rand() % 5;
                break;
            }

            choice = rand() % 3;
            switch (choice)
            {
            case 1:
                mAtk = rand() % 20 + 10;
                mDef = rand() % 10 + 10;
                mMag = rand() % 5;
                break;
            case 2:
                mAtk = rand() % 5 + 10;
                mDef = rand() % 10 + 10;
                mMag = rand() % 15;
                break;
            case 3:
                mAtk = rand() % 10 + 10;
                mDef = rand() % 20 + 10;
                mMag = rand() % 5;
                break;
            }

            int mHurt = (pAtk - mMag) - (mDef / pAtk);
            if (mHurt < 0)
            {
                mHurt = 0;
            }
            mHealth -= mHurt;
            cout << "You did " << mHurt << " damage to the monster!\n";
            if (mHealth < 1)
            {
                cout << "You killed the beast!! You won with " << pHealth << " hp left.\n";
                cin.get();
                return 0;
            }
            cout << "The monster now has " << mHealth << " hp left.\n";

            int pHurt = (mAtk - pAgi) - (pDef / mAtk);
            if (pHurt < 0)
            {
                pHurt = 0;
            }
            pHealth -= pHurt;
            cout << "The monster hit you for " << pHurt << " damage.\n";
            if (pHealth < 1)
            {
                cout << "You died. The beast still has " << mHealth << " hp left.\n";
                cin.get();
                return 0;
            }
            cout << "You now have " << pHealth << " hp left.\n\n";
        }
    }
    else
    {
        cout << "Monster starts.\n==============\n";
        while (pHealth > 0 && mHealth > 0)
        {
            choice = rand() % 3;
            switch (choice)
            {
            case 1:
                mAtk = rand() % 20 + 10;
                mDef = rand() % 10 + 10;
                mMag = rand() % 5;
                break;
            case 2:
                mAtk = rand() % 5 + 10;
                mDef = rand() % 10 + 10;
                mMag = rand() % 15;
                break;
            case 3:
                mAtk = rand() % 10 + 10;
                mDef = rand() % 20 + 10;
                mMag = rand() % 5;
                break;
            }

            int pHurt = (mAtk - pAgi) - (pDef / mAtk);
            if (pHurt < 0)
            {
                pHurt = 0;
            }
            pHealth -= pHurt;
            cout << "The monster hit you for " << pHurt << " damage.\n";
            if (pHealth < 1)
            {
                cout << "You died. The beast still has " << mHealth << " hp left.\n";
                cin.get();
                return 0;
            }
            cout << "You now have " << pHealth << " hp left.\n\n";

            cout << "What do you want to do?\n1 - Fierce Attack\n2 - Lithe Attack\n3 - Defensive moves\n";
            do
            {
                cin >> choice;
            } while (choice > 3 || choice < 1);

            switch (choice)
            {
            case 1:
                pAtk = rand() % 20 + 10;
                pDef = rand() % 10 + 10;
                pAgi = rand() % 5;
                break;
            case 2:
                pAtk = rand() % 5 + 10;
                pDef = rand() % 10 + 10;
                pAgi = rand() % 15;
                break;
            case 3:
                pAtk = rand() % 10 + 10;
                pDef = rand() % 20 + 10;
                pAgi = rand() % 5;
                break;
            }

            int mHurt = (pAtk - mMag) - (mDef / pAtk);
            if (mHurt < 0)
            {
                mHurt = 0;
            }
            mHealth -= mHurt;
            cout << "You did " << mHurt << " damage to the monster!\n";
            if (mHealth < 1)
            {
                cout << "You killed the beast!! You won with " << pHealth << " hp left.\n";
                cin.get();
                return 0;
            }
            cout << "The monster now has " << mHealth << " hp left.\n";
        }
    }
}
