#include <bits/stdc++.h>
using namespace std;

int getDaysInMonth(int month, int year)
{
    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
        days_in_month[1] = 29;

    return days_in_month[month - 1];
}
int getFirstDay(int month, int year)
{
    struct tm time_in = {0, 0, 0, 1, month - 1, year - 1900};
    time_t time_temp = mktime(&time_in);

    if (time_temp == -1)
    {
        cout << "Error: unable to make time using mktime\n";
        return -1;
    }

    struct tm *time_out = localtime(&time_temp);

    return time_out->tm_wday;
}

void printCalendar(int month, int year)
{
    int days_in_month = getDaysInMonth(month, year);
    int first_day = getFirstDay(month, year);

    cout << "|---------------------------|\n";
    cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|\n";
    cout << "|---------------------------|\n";

    for (int i = 0; i < first_day; i++)
        cout << "| - ";

    for (int day = 1; day <= days_in_month; day++)
    {
        cout << "|" << setw(3) << day;
        if ((day + first_day) % 7 == 0)
            cout << "|\n|---------------------------|\n";
    }

    for (int i = (days_in_month + first_day) % 7; i < 7 && i != 0; i++)
        cout << "| - ";
    cout << "|\n|---------------------------|\n";
}

int main()
{
    string date_str;

    getline(cin, date_str);

    istringstream date_stream(date_str);

    int day, month, year;
    string weekday, delimiter;

    getline(date_stream, delimiter, '/');
    day = stoi(delimiter);

    getline(date_stream, delimiter, '/');
    month = stoi(delimiter);

    getline(date_stream, delimiter, ' ');
    year = stoi(delimiter);

    getline(date_stream, weekday);

    // cout << "Day: " << day << "\n";
    // cout << "Month: " << month << "\n";
    // cout << "Year: " << year << "\n";
    // cout << "Weekday: " << weekday << "\n";

    // cout << month << " " << day << " " << year << '\n';
    printCalendar(month, year);
    return 0;
}
