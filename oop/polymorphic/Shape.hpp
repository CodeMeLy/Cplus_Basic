#include<iostream>
using namespace std;
class Shape{
    public:
        Shape(){}
        virtual ~Shape() = default;
        virtual double get_surface() = 0;// thuần ảo
        virtual void decribe_object() {cout<<"this is a shape";}
        double get_double_surface() {return get_surface()*2;}
};