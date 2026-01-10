#include <iostream>
using namespace std;

int main() {

    int grade;                  
    int studentCount = 0;       
    int passedCount = 0;        
    int failedCount = 0;        
    int maxGrade, minGrade;     

    cout << "Enter students' grades (from 0 to 100):" << endl;

    do {
        cin >> grade;

        // التحقق من صحة الدرجة
        if (grade < 0 || grade > 100) {
            cout << "Invalid grade! Please enter a value between 0 and 100." << endl;
            continue;   // تجاهل الإدخال الخاطئ
        }

        // أول درجة صحيحة
        if (studentCount == 0) {
            maxGrade = grade;
            minGrade = grade;
        }

        // ناجح أو راسب (نفترض النجاح من 50)
        if (grade >= 50) {
            passedCount++;
        } else {
            failedCount++;
        }

        // تحديث القيم
        if (grade > maxGrade) maxGrade = grade;
        if (grade < minGrade) minGrade = grade;

        studentCount++;

    } while (studentCount < 10);

    cout << "\nPassed students: " << passedCount << endl;
    cout << "Failed students: " << failedCount << endl;
    cout << "Highest grade: " << maxGrade << endl;
    cout << "Lowest grade: " << minGrade << endl;

    return 0;
}
