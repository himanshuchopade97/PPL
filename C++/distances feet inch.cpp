#include <iostream>
using namespace std;

class dist
{
    int feet;
    int inches;

public:
    dist ()
    {
        feet=inches=0;
    }
    dist(int f, int i)
    {
        feet = f;
        inches = i;
    }
    void get_data();
    void display();
    void operator ++()
    {
        ++feet;
        ++inches;
    }
    void operator --(int )
    {
        feet--;
        inches--;
    }
    dist operator +(dist &d)
    {
        dist temp(0,0);
        temp.feet=feet+d.feet;
        temp.inches=inches+d.inches;
        return temp;
    }
    bool operator <(dist &d)
    {
        dist temp(0,0);
        if (temp.feet<d.feet)
            return true;
        else if ( (temp.feet==d.feet) && (temp.inches<d.inches))
            return true;
        else    
            return false;
    }

};
void dist::get_data()
{
    cout<<"Enter feet :";
    cin>>feet;
    cout<<"Enter inches :";
    cin>>inches;
}
void dist::display()
{
    cout<<"Feet :"<<feet<<endl;
    cout<<"Inches :"<<inches<<endl;
}

int main()
{
    int choice;
    dist d1, d2, d3, d4;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Enter and display distance\n";
        cout << "2. Increment distance\n";
        cout << "3. Decrement distance\n";
        cout << "4. Add two distances\n";
        cout << "5. Compare distances (less than)\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                d1.get_data();
                d1.display();
                break;
            case 2:
                ++d1;
                d1.display();
                break;
            case 3:
                d1--;
                d1.display();
                break;
            case 4:
                cout << "Enter data for second object:\n";
                d2.get_data();
                d3 = d1 + d2;
                cout << "After adding two objects:\n";
                d3.display();
                break;
            case 5:
                cout << "Enter data for comparison:\n";
                d4.get_data();
                if (d4 < d1)
                {
                    cout << "First measurement is Less than seconnd measurement\n";
                }
                else
                {
                    cout << "First measurement is Not less than second measurement\n";
                }
                break;
            case 6:
                cout << "Exiting ... \n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}