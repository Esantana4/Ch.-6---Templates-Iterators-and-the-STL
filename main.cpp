/*
 Erik Santana
 10/4/23
 CPMR 131 - Professor Q

 Credit:
 Part 1: Non-template MyBag container of int - Christian Hernandez & Saul Merino
 Part 2: Template MyBag<double> container - Thanh Tran & John Kim
 Part 3: Application using MyBag container - Erik Santana & Joe Bryant & Otoniel Torres Bernal
 */

#include "input.h"
#include "MyBag.h"
#include "MyBagTemplate.h"
#include "Course.h"

using namespace std;

void mainMenu();

int main()
{
    mainMenu();

    return 0;
}

// Pre-Condition: NA
// Post-Condition: no return. Main menu
void mainMenu()
{
    MyBag mybagObject;
    MyBagTemplate<double> myBagTemplateObject;
    Course courseObject;

    cout << endl;
    cout << "\tCMPR131 - Chapter 6: non-template and template Container by Erik Santana (10 / 4 / 23)";
    cout << "\n\t" << string(80, char(205)) << endl;
    cout << "\t1> Non-template MyBag container of int" << endl;
    cout << "\t2> Template MyBag<double> container" << endl;
    cout << "\t3> Application using MyBag container" << endl;
    cout << "\n\t" << string(80, char(169));
    cout << "\n\t0 > exit" << endl;
    cout << "\n\t" << string(80, char(205)) << endl;

    // get user input/option of main menu
    int option = inputInteger("\n\tOption: ", 0, 3);

    // loop through main menu until user exits
    do
    {
        switch (option)
        {
        case 0: exit(1); break;
        case 1: system("cls"); mybagObject.subMenu(); break;
        case 2: system("cls"); myBagTemplateObject.subMenu(); break;
        case 3: system("cls"); courseObject.menuInformation(); break;
        }

        // new line
        cout << "\n";

    } while (true);
}