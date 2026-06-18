#include<iostream>
#include<cstdlib>
#include<algorithm>
#include <cmath>

//amar bhava samadhan
class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourAngle = 0;
        double minutesAngle = 0;
        if(hour>=0 && hour<=11){
            hourAngle = hour * 30 + 0.5 * minutes;
        }else{
            hourAngle = 0.5*minutes;
        }

        if(minutes>=0 && minutes<=59){
            minutesAngle = 6 * minutes;
        }else{
            minutesAngle = 0;
        }

        // double oneAngle = std::abs(hourAngle-minutesAngle);
        /*
        Compiler Note:
        While using:
            std::abs(hourAngle - minuteAngle);
        I encountered the error:
            call of overloaded 'abs(double)' is ambiguous
        Reason:
        - The code was compiled using an older compiler (MinGW GCC 6.3.0).
        - With only <cstdlib> available, the compiler mainly sees integer overloads:
            abs(int)
            abs(long)
            abs(long long)
        - Since the argument is a double, the compiler cannot resolve the correct overload.

        Solutions:
        1. Include <cmath> and use std::fabs()
            #include <cmath>
            double angle = std::fabs(x);
        This is the safest solution for floating-point values and works on old compilers.

        2. Include <cmath> and use std::abs()
            #include <cmath>
            double angle = std::abs(x);
        This works on modern compilers because <cmath> provides floating-point overloads of std::abs().

        Recommendation:
        - For doubles/floats on older compilers, prefer std::fabs().
        - On modern compilers (including LeetCode), std::abs() and std::fabs() both work.
        The issue was not with the logic of the code but with compiler/header support for floating-point overloads of std::abs().
        */

        double oneAngle = std::fabs(hourAngle-minutesAngle);

        return std::min(oneAngle,360-oneAngle);
    }
};

int main(){
    return 0;
}