#include <iostream>
using namespace std;

class Rect {
private:
    int h; 
    int w;

public:
    Rect() : h(0), w(0) {}

    Rect(int height, int width) : h(height), w(width) {}
    void input() 
    {
        cout << "������� ������: ";
        cin >> h;
        cout << "������� ������: ";
        cin >> w;
    }
    void output() const 
    {
        cout << "�������������: ������ = " << h << ", ������ = " << w << endl;
    }

    int area() const 
    {
        return h * w;
    }
    int getHeight() const 
    {
        return h;
    }
    void setHeight(int height) 
    {
        h = height;
    }
    int getWidth() const 
    {
        return w;
    }
    void setWidth(int width) 
    {
        w = width;
    }
};

int main() 
{
    Rect r1;
    r1.input();
    r1.output();
    cout << "�������: " << r1.area() << endl;
    Rect r2(5, 10);
    r2.output();
    cout << "�������: " << r2.area() << endl;
}