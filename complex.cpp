#include <iostream>
using namespace std;

class complex
{
public:
    int x, y;

    complex add(complex a, complex b)
    {
        complex sum;

        sum.x = a.x + b.x;
        sum.y = a.y + b.y;

        return sum;
    };

    complex multiply(complex a, complex b)
    {

        complex i;

        i.x = (a.x * b.x) - (a.y * b.y);
        i.y = (a.x * b.y) + (a.y * b.x);

        return i;
    };

    void getdata(void)
    {
        cout << "Enter the value of complex number: \n";
        cin >> x >> y;
    };

    void display(complex q)
    {
        cout << q.x << " + " << q.y << "i" << endl;
    };
};
int main()
{
    complex c1, c2, c3;
    c1.getdata();
    c2.getdata();
    c3 = c3.add(c1, c2);
    c3.display(c3);
    c3 = c3.multiply(c1, c2);
    c3.display(c3);

    return 0;
}