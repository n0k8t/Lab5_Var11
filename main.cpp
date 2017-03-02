#include "TTime.h"

int main()
{
    TTriad test(1, 2, 3);
    test.UpFirst();
    test.UpSecond();
    test.UpThird();
    test.SetThird(10);
    test.UpThird();
    test.Print(std::cout);


    TTime time(00, 00, 00);
    time.UpHour();
    time.UpMin();
    time.UpSec();
    time.SetNewTimeMin(31);
    time.SetNewTimeSec(1200);
    time.Print(std::cout);

    return 0;
}