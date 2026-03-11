#include <iostream>
using namespace std;

class TollBooth
{
private:
    int totalVehicles;
    double totalRevenue;

public:
    // Constructor
    TollBooth()
    {
        totalVehicles = 0;
        totalRevenue = 0;
    }

    // Reset Method
    void reset()
    {
        totalVehicles = 0;
        totalRevenue = 0;
        cout << "Booth Reset Successfully\n";
    }

    // Vehicle Paying Toll
    void vehiclePayingToll(int vehicleType, double tollAmount)
    {
        totalVehicles++;
        totalRevenue += tollAmount;
    }

    // Getters
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
    TollBooth t;
    int choice;

    do
    {
        cout << "\n1. Add Standard Car (Rs 180)";
        cout << "\n2. Add Truck (Rs 300)";
        cout << "\n3. Add Bus (Rs 350)";
        cout << "\n4. Display Total Vehicles";
        cout << "\n5. Display Total Revenue";
        cout << "\n6. Reset Booth";
        cout << "\n7. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                t.vehiclePayingToll(1,180);
                break;

            case 2:
                t.vehiclePayingToll(2,300);
                break;

            case 3:
                t.vehiclePayingToll(3,350);
                break;

            case 4:
                cout << "Total Vehicles: "
                     << t.getTotalVehicles() << endl;
                break;

            case 5:
                cout << "Total Revenue: Rs "
                     << t.getTotalRevenue() << endl;
                break;

            case 6:
                t.reset();
                break;

            case 7:
                cout << "Program Ended";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(choice != 7);

    return 0;
}