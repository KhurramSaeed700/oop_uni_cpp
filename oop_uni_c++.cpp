/*

#include <iostream>
using namespace std;

class Customer {
private:
    string Name, Address, Cnic;
    int Id;
public:
    void inputCustDetails() {
        cout << "Enter Name: ";
        cin >> Name;
        cout << "\n";
        cout << "Enter Address: ";
        cin >> Address;
        cout << "\n";
        cout << "Enter Cnic";
        cin >> Cnic;
        cout << "\n";
    }
    string getName() {
        return Name;
    }
    string getAddress() {
        return Address;
    }
    string getCnic() {
        return Cnic;
    }
    Customer(string name, string address, string cnic) {
        Name = name;
        Address = address;
        Cnic = cnic;
    }
};

class DailyCustomer : Customer {
public:
    int Qty, Price, milk_type;
    DailyCustomer(string name, string address, string cnic, int qty, int milk, int price):Customer(name,address,cnic){
        Qty = qty;
        milk_type = milk;
        Price = price;
    }
    void setQty() {
        cout << "Enter Quantity: ";
        cin >> Qty;
    }
    void setPrice() {
        cout << "Enter Price: ";
        cin >> Price;
    }
    void setMilkType() {
        cout << "\nTypes of milk:\n1. soy milk --- Rs 15\n2. milk pak --- Rs 10\n3. desi milk --- Rs 6\nChoos by entering number: \n";
        cin >> milk_type;
    }
    void bill(int qty, int milk, int price) {
        int total;

        if (milk == 1) {
            price == 15;
        }
        else if (milk == 2) {
            price == 10;
        }
        else
        {
            price == 6;
        }
        total = qty * price;
        cout << "*******   Bill   ********\n  Quantity = " << qty << "\n  Price = " << price << "\n  Total = " << total << "\n***************************";
    }
};

class MonthlyCustomer : Customer {

};

int main() {
    cout << "Hello World!\n";
    //Customer c1 = Customer("", "", "");
    //c1.inputCustDetails();
    //DailyCustomer dc = DailyCustomer()


    return 0;
}



*/
//======================================


#include<iostream>
#include<string>
using namespace std;

class customer
{
protected:
    string name, address;
    int cnic, id;
public:
    void customer_input()
    {
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter your id : ";
        cin >> id;
        cout << "Enter your cnic: ";
        cin >> cnic;
        cout << "Enter your address : ";
        cin >> address;
    }
    void customer_output()
    {
        cout << " your name : " << name << endl;
        cout << "your id : " << id << endl;
        cout << "your cnic: " << cnic << endl;
        cout << "Enter your address : " << address << endl;
    }
};

class daily_customer : public customer
{
protected:
    int qty;
    int price = 100;
public:
    static int count_daily_cust;
    void bill_calculation()
    {
        cout << "Enter quantity of milk : ";
        cin >> qty;
        //cout <<"your total price is : " << price*qty<<endl;
    }
    void diplay_bill()
    {
        cout << "your quantity of milk : " << qty << endl;
        cout << "your total price is : " << price * qty << endl;
    }
};

class mountly_customer : public customer
{
protected:
    int qty, mounth_days = 0;
    int price = 100;
public:
    static int count_monthly_cust;
    void montly_bill_calculation()
    {
        cout << "Enter your day for buying milk : ";
        cin >> mounth_days;
        cout << "Enter quantity of milk : ";
        cin >> qty;
        //cout <<"your total price is : " << price*qty<<endl;
    }
    void monthly_diplay_bill()
    {
        cout << "your quantity of milk : " << qty << endl;
        cout << "Enter your day for buying milk : " << mounth_days << endl;
        cout << "your total price is : " << price * qty << endl;
    }
};

int main()
{
    char cho{};

    cout << "WELCOME\npress d if you are daily customer\npress m if you are mountly customer\nchoice: ";
    cin >> cho;
    if (cho == 'd'||cho == 'D')
    {
        daily_customer c1;
        c1.customer_input();
        c1.bill_calculation();
        c1.customer_output();
        c1.diplay_bill();
    }
    else {
        mountly_customer c2;
        c2.customer_input();
        c2.montly_bill_calculation();
        c2.customer_output();
        c2.monthly_diplay_bill();

    }

    return 0;

}
