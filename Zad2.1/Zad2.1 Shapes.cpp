#include <iostream>

class Rectangle
{
    int a = 0, b = 0;
public:
    void setDementions(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int getField()
    {
        return a * b;
    }

    int getCircuit()
    {
        return (2 * a) + (2 * b);
    }
};

class Circle
{
    int r = 0;
    const float pi = 3.14f;

public:
    void setDimention(int r)
    {
        this->r = r;
    }
    float getField()
    {
        return r * r * pi;
    }
    float getCircuit()
    {
        return 2 * r * pi;
    }

};

class Triangle
{
    int a = 0, b = 0, c = 0, h = 0;
public:
    void setDimentions(int a, int b, int c, int h)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->h = h;
    }
    int getField()
    {
        return a + b + c;
    }
    float getCircuit()
    {
        return (a*h)/2;
    }
};

int main()
{
    Rectangle rec;
    rec.setDementions(2, 5);
    std::cout << rec.getCircuit() << " " << rec.getField() << std::endl;

    Circle cir;
    cir.setDimention(5);
    std::cout << cir.getCircuit() << " " << cir.getField() << std::endl;

    Triangle tri;
    tri.setDimentions(3, 4, 5, 3);
    std::cout << tri.getCircuit() << " " << tri.getField() << std::endl;

}

