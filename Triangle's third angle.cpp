#include <iostream>
using namespace std;

int findThirdAngle(int angle1, int angle2) {
    return 180 - (angle1 + angle2);
}

int main() {
    int angle1, angle2;

    cout << "Enter the first angle: ";
    cin >> angle1;
    cout << "Enter the second angle: ";
    cin >> angle2;

    if (angle1 <= 0 || angle2 <= 0 || angle1 + angle2 >= 180) {
        cout << "Invalid angles! The angles must be positive and their sum must be less than 180." << endl;
    } else {
        
        int thirdAngle = findThirdAngle(angle1, angle2);
        cout << "The third angle is: " << thirdAngle << " degrees." << endl; 
    }

    return 0;
}

