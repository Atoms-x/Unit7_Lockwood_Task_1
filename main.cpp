/*Unit7_Lockwood_Task_1 Dr_T 24 FEB 2020
  Abstract Data Structures
  IDE: Repl.it
*/

#include <iostream>

using namespace std;

//Abstract Data Structures ***************************************************************************************
struct timeOfDay
{
  short Hour;
  short Minute;
  short Second;
};

struct appData
{
  short dayOfMonth;
  short month;
  int year;
};

struct event
{
  string eventName;
  timeOfDay eventTime;
  appData eventDate;
  bool isUrgent;
};

//Main Function **************************************************************************************************
int main() 
{
  timeOfDay t; //Declare instance of the Structure timeOfDay

  //Put data in the Structure
  t.Hour = 7; 
  t.Minute = 11;
  t.Second = 17;
  cout << "\nCurrent Time - " << t.Hour << ":" << t.Minute << ":" << t.Second << endl;

  appData a = {16, 3, 1989}; //Declare and initilize instance of the Structure appData
  cout << "\nMy birthday is - " << a.dayOfMonth << "/" << a.month << "/" << a.year << endl;

  event eOne;
  eOne.eventName = "Birthday of Dr_T";
  eOne.isUrgent = true;
  //Set the event dayOfMonth
  eOne.eventDate.dayOfMonth = 24; //instance.memberStruct.memberVariable
  eOne.eventDate.month = 2;
  eOne.eventDate.year = 2020;
  //set event time
  eOne.eventTime = t;

  cout << "\n\nElements in the event eOne:";
  cout << "\nEvent Name: " << eOne.eventName;

  string status = "";
  eOne.isUrgent = true;
  cout << "\nIs the event Urgent: ";
  (eOne.isUrgent) ? cout << "yes" : cout << "no";

  cout << "Day: " << eOne.eventDate.dayOfMonth << "/"
                  << eOne.eventDate.month << "/"
                  << eOne.eventDate.year;
  
  cout << "\nTime: " << eOne.eventTime.Hour << ":"
                     << eOne.eventTime.Minute << ":"
                     << eOne.eventTime.Second;
  

  return 0;
}