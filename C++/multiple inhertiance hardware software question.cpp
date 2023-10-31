#include <iostream>
using namespace std;

class Sales
{
protected:
    int totalHardwareRevenue;
    int totalSoftwareRevenue;

public:
    Sales()
    {
        totalHardwareRevenue = 0;
        totalSoftwareRevenue = 0;
    }

    void recordHardwareSale(int quantity, int price)
    {
        totalHardwareRevenue += quantity * price;
    }

    void recordSoftwareSale(int quantity, int price)
    {
        totalSoftwareRevenue += quantity * price;
    }

    void displayHardwareSales()
    {
        cout << "Total Hardware Revenue: " << totalHardwareRevenue << endl;
    }

    void displaySoftwareSales()
    {
        cout << "Total Software Revenue: " << totalSoftwareRevenue << endl;
    }
};

class Item
{
protected:
    int price[100];
    string name[100];
};

class hwitem : public Item, public Sales
{
protected:
    int no;
    int quant[100];

public:
    void getdetails();
    void display();
};

void hwitem::getdetails()
{
    cout << "Enter number of hardware components: ";
    cin >> no;
    for (int i = 0; i < no; i++)
    {
        cout << "Enter item " << i + 1 << " name: ";
        cin >> name[i];
        cout << "Enter item " << i + 1 << " price: ";
        cin >> price[i];
        cout << "Enter item " << i + 1 << " quantity: ";
        cin >> quant[i];
        recordHardwareSale(quant[i], price[i]);
    }
}

void hwitem::display()
{
    cout <<endl<< "Hardware Details:\n";
    for (int i = 0; i < no; i++)
    {
        cout <<  "Name: " << name[i] << ", Price: " << price[i] << ", Quantity: " << quant[i] << endl;
    }
}

class switem : public Item, public Sales
{
protected:
    int num;
    int quantity[100];

public:
    void getdetails();
    void display();
};

void switem::getdetails()
{
    cout << "Enter number of software components: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter item " << i + 1 << " name: ";
        cin >> name[i];
        cout << "Enter item " << i + 1 << " price: ";
        cin >> price[i];
        cout << "Enter item " << i + 1 << " quantity: ";
        cin >> quantity[i];
        recordSoftwareSale(quantity[i], price[i]);
    }
}

void switem::display()
{
    cout <<endl<< "Software Details:\n";
    for (int i = 0; i < num; i++)
    {
        cout << "Name: " << name[i] << ", Price: " << price[i] << ", Quantity: " << quantity[i] << endl;
    }
}

int main()
{
    hwitem hardware;
    switem software;

    hardware.getdetails();
    software.getdetails();

    hardware.display();
    software.display();

    hardware.displayHardwareSales();
    software.displaySoftwareSales();

    return 0;
}