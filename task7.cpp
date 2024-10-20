#include <iostream>

using namespace std;

int main() {
    int days, treatedPatients = 0, untreatedPatients = 0, doctors = 7;

    cout << "Enter the number of days: ";
    cin >> days;

    for (int day = 1; day <= days; day++) {
        int patients;
        cout << "Enter the number of patients on day " << day << ": ";
        cin >> patients;

        if (patients <= doctors) {
            treatedPatients += patients;
        } else {
            treatedPatients += doctors;
            untreatedPatients += patients - doctors;
        }

        if ( untreatedPatients > treatedPatients) {
            doctors++;
        }
    }

    cout << "Total treated patients: " << treatedPatients << endl;
    cout << "Total untreated patients: " << untreatedPatients << endl;

    return 0;
}


