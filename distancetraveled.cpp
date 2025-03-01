
//distance traveled program. Oladamola Ola-Buraimo. 03/18/24. This code will take user input miles per hour and hours traveled, then calculate the distance traveled per hour using a loop.
#include <iostream>

using namespace std;

int main() {
    int speed, time;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    cout << "How many hours has it traveled? ";
    cin >> time;

    cout << "\nHour\tDistance Traveled\n";
    cout << "--------------------------------\n";

    for (int hour = 1; hour <= time; ++hour) {
        int distance = speed * hour;
        cout << hour << "\t" << distance << endl;
    }

    return 0;
}
