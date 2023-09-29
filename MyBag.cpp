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
            }break;
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
                        break;  // Exit the loop once the value is found
                    }
                }

                if (!found)
                {
                    cout << "\nThe number you entered is not in the bag.\n";
                }
                
            }break;
            case 'D':
            {
                int index = inputInteger("Enter an index to erase: ");
                if (!index)
                {
                    cout << "There is no number at this index.\n";
                    break;
                }
                myBag.emplace_back(index);
            }break;
            case 'E':
            {
                // Use std::sort to sort the vector
                sort(myBag.begin(), myBag.end());

            }break;
            case 'F':
            {
                // Print the sorted vector
                cout << "Sorted Vector: ";
                for (int num : myBag) {
                    cout << num << " ";
                }
                cout << std::endl;
            }break;
        }

        // new line
        cout << "\n";

        system("pause");

    } while(true);

}