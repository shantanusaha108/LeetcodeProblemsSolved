
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

        double oneAngle = std::abs(hourAngle-minutesAngle);

        return std::min(oneAngle,360-oneAngle);
    }
};