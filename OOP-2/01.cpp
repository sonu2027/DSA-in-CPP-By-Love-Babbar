#include <iostream>
using namespace std;
class date
{
    int c_d, c_m, c_y;
    int dob_d, dob_m, dob_y;

public:
    void current_date(int d, int m, int y)
    {
        c_d = d;
        c_m = m;
        c_y = y;
    }
    void date_of_birth(int d, int m, int y)
    {
        dob_d = d;
        dob_m = m;
        dob_y = y;
    }
    void compute_age()
    {
        int d, m, y;
        y = c_y - dob_y;
        m = c_m - dob_m;
        d = c_d - dob_d;
        cout << "The person age is: " << y << "/" << m << "/" << d;
    }
};
int main()
{
    date d1;
    d1.current_date(7, 10, 2022);
    d1.date_of_birth(27, 11, 2001);
    d1.compute_age();
    return 0;
}