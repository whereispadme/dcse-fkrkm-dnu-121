#pragma once
class Function
{

private:
    double data;

public:
    Function();
    Function(double);
    ~Function();

    void setData(double);
    double getData();

    double calculateSin();
    double calculateLog();
    double calculateSquare();
    double calculateSquqreRoot();

};
