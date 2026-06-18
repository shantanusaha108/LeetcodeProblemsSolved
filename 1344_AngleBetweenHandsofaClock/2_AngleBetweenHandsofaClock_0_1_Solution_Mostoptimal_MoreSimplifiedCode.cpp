#include<iostream>
#include<cmath>
#include<algorithm>

class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourAngle = (hour)%12 * 30 + 0.5 * minutes;
        double minutesAngle = 6 * minutes;

        double oneAngle = std::fabs(hourAngle-minutesAngle);

        return std::min(oneAngle,360-oneAngle);
    }
};


int main()
{
    return 0;
}