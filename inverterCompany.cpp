#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Inverter {
    private:
        int powerRating;

    public:
        Inverter(int curr, int vol){
            cout<<"power rating is : "<<curr*vol<<endl;
        }
    // define virtual functions for all the info that can be available in some but not all
    virtual bool isSolar() const = 0;
    virtual bool hasBattery() const = 0;
    virtual bool isGridOn() const = 0;

    int getPowerRating() {
        return powerRating;
    }
};

class SolarInverter : public Inverter {
private:
    bool hasSolarPanels;
    bool batteryVersion;

public:
    
    bool isSolar() const override {
        return true;
    }

    bool hasBattery() const override {
        return batteryVersion;
    }

    bool isGridOn() const override {
        return true;
    }
};

class NonSolarInverter : public Inverter {
private:
    bool hasBattery;

public:

    bool isSolar() const override {
        return false;
    }

    bool hasBattery() const override {
        return hasBattery;
    }

    bool isGridOn() const override {
        return false;
    }
};

int main(){

    
    return 0;
}