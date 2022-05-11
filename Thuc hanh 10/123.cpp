#include <bits/stdc++.h>
using namespace std;

class Vector
{
  private:
    double x, y;

  public:
    Vector()
    {
        this->x = 0;
        this->y = 0;
    }
    Vector(double x, double y)
    {
        this->x = x;
        this->y = y;
    }

    void print(int precision = 2, bool newLine = true)
    {
        cout << fixed << setprecision(precision) << "(" << x << ", " << y << ")";
        if (newLine)
            cout << endl;
    }
    void truncate(double length)
    {
        x -= length;
        y -= length;
    }
    double getX() const
    {
        return x;
    }
    double getY() const
    {
        return y;
    }
    void setX(double x)
    {
        this->x = x;
    }
    void setY(double y)
    {
        this->y = y;
    }
    void setXY(double x, double y)
    {
        this->x = x;
        this->y = y;
    }

    bool isOrtho(const Vector &v) const
    {
        return (x * v.getX() + y * v.getY()) == 0;
    }
    static float dot(const Vector &v1, const Vector &v2)
    {
        float dotProduct = v1.getX() * v2.getX() + v1.getY() * v2.getY();
        return dotProduct;
    }
    static float cross(const Vector &v1, const Vector &v2)
    {
        float crossProduct = v1.getX() * v2.getY() - v1.getY() * v2.getX();
        return crossProduct;
    }
    friend ostream &operator<<(ostream &os, const Vector &v)
    {
        os << "(" << v.x << ", " << v.y << ")";
        return os;
    }
    Vector &operator=(const Vector &v)
    {
        this->x = v.x;
        this->y = v.y;
        return *this;
    }
    Vector operator+(const Vector &v) const
    {
        return Vector(x + v.getX(), y + v.getY());
    }
    Vector operator+(const double &s) const
    {
        return Vector(s + x, s + y);
    }
    Vector operator-(const Vector &v) const
    {
        return Vector(x - v.getX(), y - v.getY());
    }
    Vector operator-(const double &s) const
    {
        return Vector(x - s, y - s);
    }
    Vector operator*(const Vector &v) const
    {
        return Vector(x * v.getX(), y * v.getY());
    }
    Vector operator/(const Vector &v) const
    {
        return Vector(x / v.getX(), y / v.getY());
    }
    Vector operator*(const double &s) const
    {
        return Vector(x * s, y * s);
    }
    Vector operator/(const double &s) const
    {
        return Vector(x / s, y / s);
    }
    Vector operator-() const
    {
        return Vector(-x, -y);
    }
    Vector &operator+=(const Vector &v)
    {
        x += v.getX();
        y += v.getY();
        return *this;
    }
    Vector &operator-=(const Vector &v)
    {
        x -= v.getX();
        y -= v.getY();
        return *this;
    }
    Vector &operator*=(const Vector &v)
    {
        x *= v.getX();
        y *= v.getY();
        return *this;
    }
    Vector &operator/=(const Vector &v)
    {
        x /= v.getX();
        y /= v.getY();
        return *this;
    }
    Vector &operator+=(const double &s)
    {
        x += s;
        y += s;
        return *this;
    }
    Vector &operator-=(const double &s)
    {
        x -= s;
        y -= s;
        return *this;
    }
    Vector &operator*=(const double &s)
    {
        x *= s;
        y *= s;
        return *this;
    }
    Vector &operator/=(const double &s)
    {
        x /= s;
        y /= s;
        return *this;
    }
};
