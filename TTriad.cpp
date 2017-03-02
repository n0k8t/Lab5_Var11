#include "TTriad.h"

    TTriad::TTriad()
            : First(0)
            , Second(0)
            , Third(0)
    {}

    TTriad::TTriad(const int first, const int second, const int third)
            : First(first)
            , Second(second)
            , Third(third)
    {}

// setters
    void TTriad::SetFirts(int value)
    {
        First = value;
    }

    void TTriad::SetSecond(int value)
    {
        Second = value;
    }

    void TTriad::SetThird(int value)
    {
        Third = value;
    }


// +1
    void TTriad::UpFirst()
    {
        First++;
    }

    void TTriad::UpSecond()
    {
        Second++;
    }

    void TTriad::UpThird()
    {
        Third++;
    }

// getters
    int TTriad::GetFirst()
    {
        return First;
    }

    int TTriad::GetSecond()
    {
        return Second;
    }

    int TTriad::GetThird()
    {
        return Third;
    }


    void TTriad::Print(std::ostream & stream)
    {
        stream << First << " " << Second << " " << Third << std::endl;
    }