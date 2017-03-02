#include <iostream>

#ifndef LAB5_VAR11_TTRIAD_H
#define LAB5_VAR11_TTRIAD_H

class TTriad
{
private:
    int First;
    int Second;
    int Third;

public:
    TTriad();
    TTriad(const int first, const int second, const int third);

    virtual void SetFirts(int value);
    virtual void SetSecond(int value);
    virtual void SetThird(int value);

    virtual void UpFirst();
    virtual void UpSecond();
    virtual void UpThird();

    virtual int GetFirst();
    virtual int GetSecond();
    virtual int GetThird();

    virtual ~TTriad() = default;
    virtual void Print(std::ostream & stream);
};

#endif //LAB5_VAR11_TTRIAD_H
