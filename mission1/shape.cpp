#include <iostream>
#define PI 3.1415926
using namespace std;
class Shape {
public:
    double r;
    int a;
    int b;
    virtual void calculateArea(){
        cout<<"area:"<<endl;
    }
};
class Circle : public Shape {
public:
    Circle(double a){
        r=a;
    }
    void calculateArea() override{
        double s=r*r*PI;
        cout<<"area:"<<s<<endl;
    }
    void putr(int a){
        r=a;
    }
};
class Rectangle : public Shape {
public:
    Rectangle(int x,int y){
        a=x;
        b=y;
    }
    void calculateArea() override{
        int s=a*b;
        cout<<"area:"<<s<<endl;
    }
};

int main() {
    Circle c(1);
    Rectangle r(1,2);
    c.calculateArea();
    r.calculateArea();
    return 0;
}