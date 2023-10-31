#include <iostream>
using namespace std;

class student
{
    protected:
        string name[3];
        long long int prn[3];
        
    public:
        void get_data()
        {
            cout << "Enter name and PRN of students" << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << "Name of student " << i+1 << " : ";
                cin >> name[i];
                cout << "PRN of student " << i+1 << " : ";
                cin >> prn[i];
                cout << endl;
            }
        }
};

class UT_Marks : virtual public student 
{
    protected:
        int math[3], pp[3], ds[3];
    public:
        void get_marks()
        {
            for (int i = 0; i < 3; i++)
            {
                cout << "Enter marks of student " << i+1 << " :" << endl;
                cout << "Math: ";
                cin >> math[i];
                cout << "PP: ";
                cin >> pp[i];
                cout << "DS: ";
                cin >> ds[i];
                cout << endl;
            }
        }
};

class sports : virtual public student 
{
    protected:
        string sports_name[3];
    public:
        void get_sports()
        {
            cout << "Enter sports of students" << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << "Sports of Student " << i+1 << " : ";
                cin >> sports_name[i];
                cout << endl;
            }
        }
};

class result : public UT_Marks, public sports
{
public:
    void calculate_results()
    {
        for (int i = 0; i < 3; i++)
        {
            int total_marks = UT_Marks::math[i] + UT_Marks::pp[i] + UT_Marks::ds[i];
            cout << "Name: " << student::name[i] << endl;
            cout << "PRN: " << student::prn[i] << endl;
            cout << "Math Marks: " << UT_Marks::math[i] << endl;
            cout << "PP Marks: " << UT_Marks::pp[i] << endl;
            cout << "DS Marks: " << UT_Marks::ds[i] << endl;
            cout << "Sports : " << sports::sports_name[i] << endl;
            cout << "Total Score: " << total_marks << endl;
            cout << endl;
        }
    }
};

int main()
{
    result r1;
    r1.get_data();
    r1.get_marks();
    r1.get_sports();

    r1.calculate_results();
}
