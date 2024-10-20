#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num_cargo;
    double total_tonnage = 0, total_cost = 0;
    double minibus_tonnage = 0, truck_tonnage = 0, train_tonnage = 0;

    cout << "Enter the count of cargo for transportation: ";
    cin >> num_cargo;

    for (int i = 1; i <= num_cargo; i++) {
        cout << "Enter the tonnage of cargo " << i << ": ";
        int tonnage;
        cin >> tonnage;

        if (tonnage <= 3) {
            minibus_tonnage += tonnage;
            total_cost += tonnage * 200;
        } else if (tonnage <= 11) {
            truck_tonnage += tonnage;
            total_cost += tonnage * 175;
        } else {
            train_tonnage += tonnage;
            total_cost += tonnage * 120;
        }

        total_tonnage += tonnage;
    }

    double average_price_per_ton = total_cost / total_tonnage;
    double minibus_percentage = (minibus_tonnage / total_tonnage) * 100;
    double truck_percentage = (truck_tonnage / total_tonnage) * 100;
    double train_percentage = (train_tonnage / total_tonnage) * 100;

    cout << fixed << setprecision(2);
    cout << "Average price per ton of the cargo: $" << average_price_per_ton << endl;
    cout << "Percentage of cargo carried by minibus: " << minibus_percentage << "%" << endl;
    cout << "Percentage of cargo carried by truck: " << truck_percentage << "%" << endl;
    cout << "Percentage of cargo carried by train: " << train_percentage << "%" << endl;

    return 0;
}