#include <iostream>
using namespace std;

class TollBooth
{
private:
    int totalVehicles;
    double totalRevenue;

public:

    TollBooth()
    {
        totalVehicles = 0;
        totalRevenue = 0;
    }

    void vehiclePayingToll(double amount)
    {
        totalVehicles++;
        totalRevenue += amount;
    }

    void reset()
    {
        totalVehicles = 0;
        totalRevenue = 0;
        cout<<"Booth statistics reset\n";
    }

    int getTotalVehicles()
    {
        return totalVehicles;
    }

    double getTotalRevenue()
    {
        return totalRevenue;
    }
};

int main()
{
    TollBooth booth;
    int choice;

    do
    {
        cout<<"\n1. Add Standard Car (180)";
        cout<<"\n2. Add Truck (300)";
        cout<<"\n3. Add Bus (350)";
        cout<<"\n4. Display Vehicles";
        cout<<"\n5. Display Revenue";
        cout<<"\n6. Reset";
        cout<<"\n7. Exit";

        cout<<"\nEnter choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                booth.vehiclePayingToll(180);
                break;

            case 2:
                booth.vehiclePayingToll(300);
                break;

            case 3:
                booth.vehiclePayingToll(350);
                break;

            case 4:
                cout<<"Total Vehicles: "<<booth.getTotalVehicles()<<endl;
                break;

            case 5:
                cout<<"Total Revenue: "<<booth.getTotalRevenue()<<endl;
                break;

            case 6:
                booth.reset();
                break;
        }

    } while(choice != 7);

    return 0;
}
