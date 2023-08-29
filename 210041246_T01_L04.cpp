#include "bits/stdc++.h"
using namespace std;

class Flight {
private:
  int flightNumber;
  string destination;
  double distance;
  double maxFuelCapacity;
public: 
  Flight(int flightNum = 0, string dest = "", double dist = 0.0, double maxFuel = 0.0) {
    flightNumber = flightNum;
    destination = dest;
    distance = dist;
    maxFuelCapacity = maxFuel;
  }
  int CalFuel() {
    if (distance == 0) return 0;
    else if (distance <= 1000) return 500;
    else if (distance > 1000 and distance <= 2000) return 1100;
    return 2200;
  }
  void ShowInfo() {
    cout << "Flight number :" << flightNumber << '\n';
    cout << "Destination :" << destination << '\n';
    cout << "Distance :" << distance << '\n';
    cout << "Max Fuel Capacity : " << maxFuelCapacity << '\n';  
    cout << "Fuel Needed : " << CalFuel() << '\n';  
  }
  ~Flight () {
    cout << "The destructor is called for the flight number : " << flightNumber << '\n';
  }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    Flight f1;
    f1.ShowInfo();

    Flight f2 (121, "Greenland", 1250.54, 1150);
    f2.ShowInfo();

    Flight f3 (333, "Canada", 2350.54, 3000);
    f3.ShowInfo();
}