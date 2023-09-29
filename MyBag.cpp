#include "MyBag.h"

MyBag::MyBag()
{
    size = 0;
    capacity = 0;
}

MyBag::MyBag(int newSize, int newCapacity)
{
    size = newSize;
    capacity = newSize;
}

void MyBag::setSize(int newSize)
{
    size = newSize;
}

int MyBag::getSize()
{
    size = myBag.size();
    return size;
    //return myBag.size();
}

void MyBag::setCapacity(int newCapacity)
{
    capacity = newCapacity;
}

int MyBag::getCapacity()
{
    capacity = myBag.capacity();
    return capacity;
    //return myBag.capacity();
}

MyBag::~MyBag()
{}

void MyBag::subMenu()
{

    do
    {
        system("cls");
        cout << endl;
        cout << "\t1> Non-template MyBag of integers" << endl;
        cout << "\t" << string(80, char(205)) << endl;
        cout << "\t\t1> clear" << endl;
        cout << "\t\t2> insert" << endl;
        cout << "\t\t3> search" << endl;
        cout << "\t\t4> remove" << endl;
        cout << "\t\t5> sort" << endl;
        cout << "\t\t6> display" << endl;
        cout << "\n\t" << string(80, char(169));
        cout << "\n\t0 > exit" << endl;
        cout << "\t" << string(80, char(205)) << endl;

        // get user input/option of main menu
        int option = inputInteger("\n\tOption: ", 1,6);

        switch (option)
        {
        case '0': system("cls"); mainMenu(); break;
            case 1: 
            {
                myBag.clear();
                cout << "\nMy bag is cleared of all elements.\n";

            }system("pause"); system("cls"); break;
            case 2: 
            {
                int insertInt = inputInteger("\nEnter a value and insert into MyBag: ");
                myBag.push_back(insertInt);

                cout << insertInt << " has been inserted into MyBag.\n\n";
            }break;
            case 3:
            { 
                int findValue = inputInteger("\nEnter a value to search from MyBag: ");
                bool found = false;

                for (int i = 0; i < getSize(); i++)
                {
                    if (myBag.at(i) == findValue)
                    {
                        found = true;
                        cout << "\nValue " << findValue << " is at found at subscript #" << i << endl;
                    }
                }

                if (!found)
                {
                    cout << "\nValue " << findValue << " is not in MyBag.\n\n";
                }
                
            }system("pause"); system("cls"); break;
            case 4:
            {
                int index = inputInteger("\nEnter an index to be deleted: ", 0, myBag.size() - 1);
                cout << endl;
                if (index < 0 || index >= myBag.size())
                {
                    cout << "Invalid index or index out of range.\n\n";
                }
                else
                {
                    myBag.erase(myBag.begin() + index);
                }
                
            }system("pause"); system("cls"); break;
            case 5:
            {
                // sort the vector
                sort(myBag.begin(), myBag.end());

                cout << "\nMyBag has been sorted.\n\n";

            }system("pause"); break;
            case 6:
            {
                cout << "\nMyBag:\n ";

                for (int i = 0; i < myBag.size(); i++)
                {
                    cout << endl << "[" << i << "] - " << myBag[i] << " \n";
                }
                cout << endl << endl;

            }system("pause"); break;
            default:
                cout << "Invalid option. Please enter a valid option.\n";
        }

        // new line
        cout << "\n";

    } while(true);

}