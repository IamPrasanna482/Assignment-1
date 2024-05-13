// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <vector>
using namespace std;


// Defining Class Commissioner
class Commissioner
{

private:
    string name;
    int age;

public:
    // constructor
    Commissioner(string cName, int cAge)
    {
        name = cName;
        age = cAge;
    }

    int canArrest(bool canGetArrested, int totalSpendings, int spendingLimit)
    {

        return (canGetArrested && (totalSpendings > spendingLimit));
    }
};

// Defining Class MP
class MP
{

private:
    string name;
    int age;
    int spendingLimit = 100000;
    string constituency;
    int canGetArrested = true;

public:
    // constructor to initialize name,age and constituency of the MP
    MP(string mpName, int mpAge, string mpConstituency)
    {
        name = mpName;
        age = mpAge;
        constituency = mpConstituency;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    string getConstituency()
    {
        return constituency;
    }
};

class Vehicle : public MP
{
private:
    vector<string> types;
    string driverName;

public:
    Vehicle(string designation, string driver)
    {
        types.push_back("car");
        if (designation == "PM")
        {
            types.push_back("aircraft");
        }
        driverName = driver;
    }

    string getDriverName()
    {
        return driverName;
    }
};

// Defining Class PrimeMinister

class PrimeMinister : public MP
{
private:
    int spendingLimit = 10000000; // 1 crore
    int canGetArrested = false;
};

// Defining Class PrimeMinister

class Minister : public MP
{
private:
    int spendingLimit = 1000000; // 10 Lakh
    int canGetArrested = true;
};

int main()
{

    // MP mp1("prasanna",21,"Uttar Pradesh");
    // cout<<"MP name is : "<<mp1.getName()<<endl;
    //  cout<<"MP age is : "<<mp1.getAge()<<endl;

    return 0;
}