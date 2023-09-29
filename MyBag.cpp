#include "MyBag.h"

void MyBag::subMenu()
{

    do
    {
        system("cls");
        cout << endl;
        cout << "\t1> Non-template MyBag of integers" << endl;
        cout << "\t" << string(80, char(205)) << endl;
        cout << "\t\tA> clear" << endl;
        cout << "\t\tB> insert" << endl;
        cout << "\t\tC> search" << endl;
        cout << "\t\tD> remove" << endl;
        cout << "\t\tE> sort" << endl;
        cout << "\t\tF> display" << endl;
        cout << "\n\t" << string(80, char(169));
        cout << "\n\t0 > exit" << endl;
        cout << "\t" << string(80, char(205)) << endl;

        // get user input/option of main menu
        char option = inputChar("\n\tOption: ", "0ABCDEF");

        switch (option)
        {
            case '0': system("cls"); mainMenu();
            case 'A': 
            {
                myBag.clear();
            
                cout << "My bag is cleared of all elements.\n";
            }system("pause"); system("cls"); break;
            case 'B': 
            {
                int insertInt = inputInteger("\nEnter a value and insert into MyBag: ");
                myBag.push_back(insertInt);
            }break;
            case 'C':
            { 
                int findValue = inputInteger("\nEnter a value to search from MyBag: ");
                bool found = false;

                for (int i = 0; i < myBag.size(); i++)
                {
                    if (myBag.at(i) == findValue)
                    {
                        found = true;
                        cout << "\n" << findValue << " is at index: " << i << endl;
                    }
                }

                if (!found)
                {
                    cout << "\nThe number you entered is not in the bag.\n";
                }
                
            }system("pause"); system("cls"); break;
            case 'D':
            {
                int index = inputInteger("\nEnter an index to erase: ",0, 100);
                cout << endl;
                if (index < 0 || index >= myBag.size())
                {
                    cout << "Invalid index or index out of range.\n";
                }
                else
                {
                    myBag.erase(myBag.begin() + index);
                }
                
            }system("pause"); system("cls"); break;
            case 'E':
            {
                // Use std::sort to sort the vector
                sort(myBag.begin(), myBag.end());

            }system("pause"); break;
            case 'F':
            {
                // Print the sorted vector
                cout << "\nSorted Vector: ";
                for (int num : myBag) {
                    cout << num << " ";
                }
                cout << endl << endl;
            }system("pause"); break;
        }

        // new line
        cout << "\n";

    } while(true);

}