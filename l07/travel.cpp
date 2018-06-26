#include <iostream>

struct travel_time {
  int hours;
  int mins;
};
const int Mins_per_hr = 60;

travel_time sum_time(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main() {
  using namespace std;
  travel_time day1 = {1, 30};
  travel_time day2 = {1, 31};

  cout << "Two-day total: ";
  travel_time trip = sum_time(day1, day2);
  show_time(trip);

  travel_time day3 = {1, 33};
  cout << "Three-day total: ";
  show_time(sum_time(trip, day3));

  return 0;
}

travel_time sum_time(travel_time t1, travel_time t2) {
  travel_time total = {};
  total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_per_hr;
  total.mins = (t1.mins + t2.mins) % Mins_per_hr;

  return total;
}

void show_time(travel_time t) {
  using namespace std;
  cout << "hours: " << t.hours << " mins: " << t.mins << endl;
}
