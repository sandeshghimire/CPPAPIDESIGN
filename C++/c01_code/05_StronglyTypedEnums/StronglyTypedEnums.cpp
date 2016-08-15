namespace DX
{
    enum class DAYS : unsigned char
    {
        SUN, MON, TUE, WED, THU, FRI, SAT,
    };


    enum class MONTH : unsigned char
    {
        JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
    };


    enum class MyEnum
    {
        EnumValue1, EnumValue2 = 10, EnumValue3
    };

    enum class MyEnumLong : unsigned long
    {
        EnumValueLong1, EnumValueLong2 = 10, EnumValueLong3
    };
}


int main()
{
    DX::DAYS day = DX::DAYS::MON;

    DX::MyEnum value1 = DX::MyEnum::EnumValue1;


    return 0;
}
