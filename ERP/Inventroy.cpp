#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

typedef struct
{
    int date;
    int month;
    int year;
} dateOfManufacture;

class Stock
{
public:
    int s_no;
    string Product_name;
    double Purchasing_price;
    double Selling_price;
    int TotalQantity;
    dateOfManufacture dom;
    double Amount;
    int QuantityAdded;

    static int ID;

public:
    Stock()
    {
        this->Amount = 0;
        this->QuantityAdded = 0;
    }

    void setItem()
    {
        cout << "Enter product name : ";
        cin >> this->Product_name;
        cout << "Enter Purchasing price : ";
        cin >> this->Purchasing_price;
        cout << "Enter Selling price : ";
        cin >> this->Selling_price;
        cout << "Enter Quantity : ";
        cin >> this->TotalQantity;
        cout << "Enter date of manufacture : \n";
        cout << "Enter date : ";
        cin >> this->dom.date;
        cout << "Enter month : ";
        cin >> this->dom.month;
        cout << "Enter year : ";
        cin >> this->dom.year;
    }

    void getItem()
    {
        ID++;

        if (ID == 1)
            cout << left << setw(5) << "ID"
                 << left << setw(20) << "Product Name" << left << setw(20) << "Purchasing price"
                 << left << setw(20) << "Selling price" << left << setw(20) << "Quantity added"
                 << left << setw(20) << "Total Quantity"
                 << left << setw(20) << "Date of manuf." << left << setw(20) << "Amount"
                 << endl;

        cout << left << setw(5) << ID
             << left << setw(20) << this->Product_name << left << setw(20) << this->Purchasing_price
             << left << setw(20) << this->Selling_price << left << setw(20) << this->QuantityAdded
             << left << setw(20) << this->TotalQantity
             << right << setw(2) << this->dom.date << "/" << right << setw(2) << this->dom.month << "/"
             << left << setw(16) << this->dom.year
             << endl;
    }
};

int Stock::ID = 0;

class Purchase : public Stock
{

public:
    void addQuantity(int id)
    {
        if (id <= ID)
        {
            for ()
        }
    }
};

int main()
{
    /*    Stock item[3];

        for (int i = 0; i < 3; i++)
        {
            item[i].setItem();
            cout << endl;
        }

        for (int i = 0; i < 3; i++)
        {
            item[i].getItem();
        } */

    Stock i, j, k;

    i.Product_name = "pen";
    i.Purchasing_price = 4;
    i.Selling_price = 5;
    i.TotalQantity = 100;
    i.dom.date = 3;
    i.dom.month = 3;
    i.dom.year = 2020;

    j.Product_name = "pencil";
    j.Purchasing_price = 6;
    j.Selling_price = 6;
    j.TotalQantity = 100;
    j.dom.date = 2;
    j.dom.month = 5;
    j.dom.year = 2020;

    k.Product_name = "box";
    k.Purchasing_price = 10;
    k.Selling_price = 15;
    k.TotalQantity = 50;
    k.dom.date = 7;
    k.dom.month = 6;
    k.dom.year = 2020;

    i.getItem();
    j.getItem();
    k.getItem();

    Purchase p;
    p.addQuantity(2);

    getch();
}