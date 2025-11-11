#include <iostream>
using namespace std;

int main()
{
     int hour;
     int minutes;
     int seconds;
     
     cout<<"enter the time in hour"<<endl;
    cin>>hour;
     cout<<"enter the time in minutes"<<endl;
     cin>>minutes;
     cout<<"enter the time in seconds"<<endl;
     cin>>seconds;
    cout<<endl;
    cout<<hour*3600 + minutes*60 + seconds<<endl;

    int  totalseconds;
    cout<<"enter the seconds: "<<endl;
    cin>>totalseconds;
    int Hours = totalseconds / 3600;
    int Minutes = (totalseconds % 3600) / 60;
    int Seconds = totalseconds % 60;

    cout<< Hours << ":" << Minutes << ":" << Seconds;
  
}