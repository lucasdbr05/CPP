#include <iostream>
using namespace std;

int main()
{
    double finalGrade;
    cout << "Enter the final grade: " << endl;
    cin >> finalGrade;

    bool goodBehavior;
    cout << "Is she/he well-behaved?" << endl;
    cin >> goodBehavior;

    bool goodStudent = finalGrade >= 9 && goodBehavior;
    bool averageStudent = (finalGrade >= 9) ^ goodBehavior;
    bool badStudent = finalGrade <= 3 && !goodBehavior;
    bool loadCancelled = finalGrade <= 3 || !goodBehavior;

    cout << "Good student? " << goodStudent << endl;
    cout << "Average student? " << averageStudent << endl;
    cout << "Bad student? " << badStudent << endl;
    cout << "Load cancelled? " << loadCancelled << endl;

    return 0;
}