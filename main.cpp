#include <iostream>
#include <math.h>      

using namespace std;

int main()
{
    double pi{ 3.1415926535 };
    double g{  9.80665 };
    cout<< "Enter the angle of launch:" << '\n';
    double th{};
    cin>> th;
    cout<< "Enter the initial velocity" << '\n';
    double v0{};
    cin>> v0;
    double sinth {(sin(th*pi/180))};
    double costh {(cos(th*pi/180))};
    double vy0{sinth*v0};
    double vx0{costh*v0};
    cout<<"Initial vertical speed is:"<< vy0<< '\n';
    cout<<"Initial horizontal speed is:"<< vx0<< '\n';
    double v0to2{ pow(v0, 2)};
    double sinthto2{ pow(sinth, 2)};
    double ymax{(v0to2*sinthto2)/(2*g)};
    cout<< "Maximum height is:"<< ymax<< '\n';
    double x_at_ymax{(v0to2*sinth*costh)/g};
    cout<< "Distance reached at the maximum height is:"<< x_at_ymax<< '\n';
    double t_at_ymax{(v0*sinth)/g};
    cout<< "Time, wherein the object reaches maximum height:"<< t_at_ymax<< '\n';
    double xmax{(2*v0to2*sinth*costh)/g};
    cout<< "Maximum distance is:"<< xmax<< '\n';
    double t_at_xmax{(2*v0*sinth)/g};
    cout<< "Time, wherein the object reaches maximum distance:"<< t_at_xmax<< '\n';
    

    return 0;
}

