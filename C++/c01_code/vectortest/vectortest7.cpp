#include <string>
#include <vector>
#include <iostream>
#include <iterator>

using namespace std;

class Data
{
private:
    int mDay;
    int mMonth;
    int mYear;
public:
    Data()
    {
        this->mDay = 1;
        this->mYear = 1970;
        this->mMonth = 1;
    }

    Data(int mDay, int mMonth, int mYear) : mDay(mDay), mMonth(mMonth), mYear(mYear)
    {}

    virtual ~Data()
    {
    }

    Data(Data & d)
    {
        this->mDay = d.mDay;
        this->mMonth = d.mMonth;
        this->mYear = d.mYear;
    }

    int getMDay() const
    {
        return mDay;
    }

    void setMDay(int mDay)
    {
        Data::mDay = mDay;
    }

    int getMMonth() const
    {
        return mMonth;
    }

    void setMMonth(int mMonth)
    {
        Data::mMonth = mMonth;
    }

    int getMYear() const
    {
        return mYear;
    }

    void setMYear(int mYear)
    {
        Data::mYear = mYear;
    }

    Data &operator + ( Data & d )
    {
        this->mDay += d.mDay;
        this->mMonth += d.mMonth;
        this->mYear += d.mYear;
    }

    Data &operator - ( Data & d)
    {
        this->mDay -= d.mDay;
        this->mMonth -= d.mMonth;
        this->mYear -= d.mYear;

    }


    Data &operator = ( Data &d0  )
    {
        this->mDay = 300 * d0.mDay;
        this->mMonth = 300 * d0.mMonth;
        this->mYear = 300 * d0.mYear;
    }


};


int main()
{
    Data date;
    Data d0(1,1,2000), d1(1,1,2001);

    std::cout << "Date " << std::endl;
    std::cout << "Day " << date.getMDay() << std::endl;
    std::cout << "Month " << date.getMMonth() << std::endl;
    std::cout << "Year " << date.getMYear() << std::endl;


    std::cout << "++++++++++++++++++++++++++++++++++" << std::endl;
    Data d = d0 + d1;




    std::cout << "Date " << std::endl;
    std::cout << "Day " << d0.getMDay() << std::endl;
    std::cout << "Month " << d0.getMMonth() << std::endl;
    std::cout << "Year " << d0.getMYear() << std::endl;

    std::cout << "++++++++++++++++++++++++++++++++++" << std::endl;


    d = d0 - d1;

    std::cout << "Date " << std::endl;
    std::cout << "Day " << d1.getMDay() << std::endl;
    std::cout << "Month " << d1.getMMonth() << std::endl;
    std::cout << "Year " << d1.getMYear() << std::endl;

    std::cout << "++++++++++++++++++++++++++++++++++" << std::endl;

    Data x(d0);

    std::cout << "Date " << std::endl;
    std::cout << "Day " << x.getMDay() << std::endl;
    std::cout << "Month " << x.getMMonth() << std::endl;
    std::cout << "Year " << x.getMYear() << std::endl;

    std::cout << "++++++++++++++++++++++++++++++++++" << std::endl;


    Data  y = x;

    std::cout << "Date " << std::endl;
    std::cout << "Day " << y.getMDay() << std::endl;
    std::cout << "Month " << y.getMMonth() << std::endl;
    std::cout << "Year " << y.getMYear() << std::endl;

    std::cout << "++++++++++++++++++++++++++++++++++" << std::endl;



    return 0;
}
