#include <iostream>
using namespace std;

int main() {
    int reading;       // قراءة كل ساعة
    int max, min;      // أعلى وأدنى قراءة
    int maxHour;       // الساعة التي حدث فيها أعلى قراءة
    double sum = 0.0;  // مجموع الاستهلاك
    double avg;        // متوسط الاستهلاك

    cout << "Enter 24 hourly readings (Wh) for the device:\n";

    for (int i = 1; i <= 24; i++) {
        do {
            cout << "Hour " << i << ": ";
            cin >> reading;

            if (reading < 0) {
                cout << "Invalid input! Reading must be 0 or greater. Please enter again.\n";
            }

        } while (reading < 0); // إعادة الإدخال إذا كانت القراءة سالبة

        // تحديث المجموع
        sum += reading;

        // لأول قراءة: تهيئة max و min
        if (i == 1) {
            max = min = reading;
            maxHour = i;
        }

        // تحديث أعلى قراءة
        if (reading > max) {
            max = reading;
            maxHour = i;
        }

        // تحديث أدنى قراءة
        if (reading < min) {
            min = reading;
        }
    }

    // حساب المتوسط
    avg = sum / 24.0;

    // عرض النتائج بشكل مرتب
    cout << "\n--- Daily Power Usage Report ---\n";
    cout << "Total consumption: " << sum << " Wh" << endl;
    cout << "Average consumption per hour: " << avg << " Wh" << endl;
    cout << "Maximum consumption: " << max << " Wh (Hour " << maxHour << ")" << endl;
    cout << "Minimum consumption: " << min << " Wh" << endl;

    return 0;
}

