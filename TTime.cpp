#include "TTime.h"

    TTime::TTime()
            : TTriad()
    {}

    TTime::TTime(const int hour, const int min, const int sec)
    {
        SetFirts(hour);
        SetSecond(min);
        SetThird(sec);
    }

    void TTime::UpHour()
    {
        UpFirst();
        if(GetFirst() == 24)
        {
            SetFirts(0);
        }
    }

    void TTime::UpMin()
    {
        UpSecond();
        if(GetSecond() == 60)
        {
            SetSecond(0);
            UpHour();
        }
    }

    void TTime::UpSec()
    {
        UpThird();
        if (GetThird() ==  60)
        {
            SetThird(0);
            UpMin();
        }
    }

    void TTime::SetNewTimeSec(int sec)
    {
        for (int i = 0; i < sec ; i++)
        {
            UpSec();
        }
    }

    void TTime::SetNewTimeMin(int min)
    {
        for (int i = 0; i < min ; i++)
        {
            UpMin();
        }
    }
