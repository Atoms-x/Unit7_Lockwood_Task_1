#include <iostream>

using namespace std;

struct TimeOfDay
{
  short hour;
  short minute;
  short second;
};

struct AppData
{
  short dayOfMonth;
  short month;
  int year;
};

struct Event
{
  string eventName;
  TimeOfDay eventTime;
  AppData eventData;
  bool isUrgent;
};

int main() 
{
  
  return 0;
}