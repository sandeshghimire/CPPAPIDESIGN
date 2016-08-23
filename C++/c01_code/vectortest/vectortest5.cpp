#include <string>
#include <iostream>

using namespace std;


class A
{
    friend class B;

private:

    int x;
public:
    A()
    {
    }

    int getX() const;

    void setX(int x);

    virtual ~A()
    {
    }

public:

};

class B
{
private:
    A a;

public:

    B()
    {
        a.setX(40);
        a.x = 8;

    }

    virtual ~B()
    {

    }

public:

};

int A::getX() const
{
    return x;
}

void A::setX(int x)
{
    A::x = x;
}


int main()
{
    A a;
    B b;
    std::cout << "hello world | " << std::endl;

}
