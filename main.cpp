#include <iostream>
using namespace std;

   // Every fourth 2016, 2020 according to Julian calendar: 365.25 d. -> 365.2496 d.
   // Gregorian calendar: 1582 the difference was 10 days. since 1583
   // 1600 leap year.
      // 1700 not leap year.
      // 1800 not leap year.
      // 1900 not leap year.
   // 2000 leap year.

 bool Jul_cal (int);
 bool Greg_cal (int);

int main()
{
   int year;

    cout << "Enter the year" << endl;
    cin >> year;
    if (Jul_cal(year)) cout << "According to the Julian calendar, year "<< year <<" is leap year" <<endl;
    else cout <<"According to the Julian calendar, year " << year << " is not leap year" <<endl;
    if (Greg_cal(year)) cout << "According to the Gregorian calendar, year "<< year <<" is leap year " <<endl;
    else cout <<"According to the Gregorian calendar, year " << year << " is not leap year " <<endl;

    return 0;
}
bool Jul_cal (int y) {
 return (y % 4 == 0) ;
}
bool Greg_cal (int y) {
 return (y % 400 == 0) || ((y % 4 == 0) && (y % 100 !=0)) ;
}
