#include <iostream>
using namespace std;

int main() {

    int reading;          // القراءة الحالية
    int count = 0;        // عدد القراءات
    int sum = 0;          // مجموع الطاقة
    int maxValue, minValue;
    double average;       // المتوسط
    int hoursAboveAvg = 0;

    cout << "Enter energy readings in kWh (0 to stop):" << endl;

    // قراءة أول رقم
    cin >> reading;

    while (reading != 0) {

        // أول رقم فقط
        if (count == 0) {
            maxValue = reading;
            minValue = reading;
        }

        sum += reading;
        count++;

        if (reading > maxValue)
            maxValue = reading;

        if (reading < minValue)
            minValue = reading;

        cin >> reading;
    }

    if (count > 0) {

        average = (double)sum / count;

        cout << "\n--- Energy Report ---\n";
        cout << "Number of readings: " << count << endl;
        cout << "Total energy: " << sum << " kWh" << endl;
        cout << "Average energy: " << average << " kWh" << endl;
        cout << "Maximum energy: " << maxValue << " kWh" << endl;
        cout << "Minimum energy: " << minValue << " kWh" << endl;

        cout << "\nRe-enter readings to count hours above average (0 to stop):" << endl;

        cin >> reading;

        while (reading != 0) {
            if (reading > average) {
                hoursAboveAvg++;
            }
            cin >> reading;
        }

        cout << "Hours above average energy: " 
             << hoursAboveAvg << " hours" << endl;

    } else {
        cout << "No readings entered." << endl;
    }

    return 0;
}
