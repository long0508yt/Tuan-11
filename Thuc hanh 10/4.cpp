#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
class Fraction
{
    int a, b;

  public:
    Fraction()
    {
        a = 1;
        b = 1;
    }
    Fraction(int a, int b)
    {
        int g = gcd(a, b);
        this->a = a / g;
        this->b = b / g;
    }

    int getA() const
    {
        return a;
    }
    int getB() const
    {
        return b;
    }
    friend ostream &operator<<(ostream &os, const Fraction &f)
    {
        if (f.getB() == 0)
            os << "invalid";
        else
            os << f.getA() << "/" << f.getB();
        return os;
    }
    Fraction operator+(const Fraction &f) const
    {
        int x = a * f.getB() + b * f.getA();
        int y = b * f.getB();
        int g = gcd(x, y);
        return Fraction(x / g, y / g);
    }
    Fraction operator-(const Fraction &f) const
    {
        int x = a * f.getB() - b * f.getA();
        int y = b * f.getB();
        int g = gcd(x, y);
        return Fraction(x / g, y / g);
    }
    Fraction operator*(const Fraction &f) const
    {
        int x = a * f.getA();
        int y = b * f.getB();
        int g = gcd(x, y);
        return Fraction(x / g, y / g);
    }
    Fraction operator/(const Fraction &f) const
    {
        int x = a * f.getB();
        int y = b * f.getA();
        int g = gcd(x, y);
        return Fraction(x / g, y / g);
    }
    bool operator==(const Fraction &f) const
    {
        return a * f.getB() == b * f.getA();
    }
    bool operator!=(const Fraction &f) const
    {
        return a * f.getB() != b * f.getA();
    }
    bool operator<(const Fraction &f) const
    {
        return a * f.getB() < b * f.getA();
    }
    bool operator>(const Fraction &f) const
    {
        return a * f.getB() > b * f.getA();
    }
    bool operator<=(const Fraction &f) const
    {
        return a * f.getB() <= b * f.getA();
    }
    bool operator>=(const Fraction &f) const
    {
        return a * f.getB() >= b * f.getA();
    }
    void simplify()
    {
        int g = gcd(a, b);
        a /= g;
        b /= g;
    }
};

// int main()
// {
//     Fraction x(1, 3), y(1, 3);
//     x = x + y;
//     cout << x;
// }