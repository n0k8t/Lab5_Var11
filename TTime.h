#include "TTriad.h"

#ifndef LAB5_VAR11_TTIME_H
#define LAB5_VAR11_TTIME_H

class TTime : public TTriad
{
public:
    TTime();
    TTime(const int hour, const int min, const int sec);

    void UpHour();
    void UpMin();
    void UpSec();
    void SetNewTimeSec(int sec);
    void SetNewTimeMin(int min);
};

#endif //LAB5_VAR11_TTIME_H