#include <iostream>
#include <windows.h>
using namespace std;
int main()
{int a,houra,minutea,seconda,second,minute,hour,e;
cout<<"Welcome to the timer:\n";
cout<<"If you type '-' and press enter it will show a blank screen, \nif it shows a blank screen type '1' and press enter!\n";
cout<<"Enter hours: ";
cin>> hour;
cout<<"Enter minutes: ";
cin>> minute;
cout<<"Enter seconds: ";
cin>>second;
(seconda = second, minutea = minute, houra = hour);
cout<<"Type '1' or any number to start the timer: ";
while (!(cin>>e))
{system("CLS");
cin.clear();
string error;
cin >> error;
system("CLS");
cout<< "Error! \nResetting. ";Sleep(450);cout<<". ";Sleep(450);cout<<". ";Sleep(450);
system("CLS");return main();}
if (second == 0 && minute == 0 && hour == 0)
{system("CLS");
cout<<"Why would you set the timer to 0??? 0_o\n";
Sleep(3000);
system("CLS");
return main();}
system("CLS");
cout<< "Starting timer!\n";
while(true){
cout<< "Hours: " << hour << " Minutes: " << minute << " Seconds: " << second << "\n";
Sleep(1000);
system("CLS");
if (second == 60)
{second = -1;}
if (minute == -1)
{minute = -2;}
cout<<"Timer started and set to: " << houra << " Hour(s), " << minutea << " Minute(s), " << seconda << " Second(s). \nTime left:\n";
second = second - 1;
if (second == -1)
{minute = minute - 1;
second = 59;}
if (minute == -1)
{hour = hour - 1;
minute = 59;}
if (hour == 0)
{hour == 0;}
if (hour <= -1 || hour >= 1000 || minute <= -1 || minute >= 60 || second <= -1 || second >= 60)
{system("CLS");cout<<"Error:\n"
"Seconds and minutes can't be larger than 59 or less than 0, \n"
"hours can't be less than 0 or larger than 999,\n"
"and your value can't be a letter or symbol!\n"
"Also you could have not typed the right value in!";Sleep(12000);system("CLS");
return main();}
if (second  == 0 && minute == 0 && hour == 0)
{system("CLS");
cout<<"Timer ended from: " << "Hours: " << houra << " Minutes: " << minutea << " Seconds: "  << seconda << "\n";
cout<<"\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a";
cout<<"Type '1' to reset the timer or '0' to exit: ";
cin>> a;}
if (a == 0)
{return 0;}
if (a == 1)
{system("CLS");
return main();}
}}
