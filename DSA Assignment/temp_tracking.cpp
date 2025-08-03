/*Write a program for tracking daily temperatures of 3 cities for a week.
The program calculates the average temperature for each day and for the
week*/
#include <iostream>
using namespace std;
int main() {
float temp[3][7];
float cityAverage[3];
float dayAverage[7];
cout << "Enter temperature data for 3 cities over 7 days:\n";
for (int i = 0; i < 3; i++) {
cout << "City " << i + 1 << ":\n";
for (int j = 0; j < 7; j++) {
cout << " Day " << j + 1 << ": ";

cin >> temp[i][j];
}
}
for (int i = 0; i < 3; i++) {
float sum = 0;
for (int j = 0; j < 7; j++) {
sum += temp[i][j];
}
cityAverage[i] = sum / 7;
}
for (int j = 0; j < 7; j++) {
float sum = 0;
for (int i = 0; i < 3; i++) {
sum += temp[i][j];
}
dayAverage[j] = sum / 3;
}
cout << "\nTemperature Tracker (in Celsius):\n";
cout <<
"City\tDay1\tDay2\tDay3\tDay4\tDay5\tDay6\tDay7\tCityAvg\n";
for (int i = 0; i < 3; i++) {
cout << "City " << i + 1 << "\t";
for (int j = 0; j < 7; j++) {
cout << temp[i][j] << "\t";
}
cout << cityAverage[i] << "\n";
}
cout << "Day Avg\t";
for (int j = 0; j < 7; j++) {
cout << dayAverage[j] << "\t";
}
cout << "\n";
return 0;
}