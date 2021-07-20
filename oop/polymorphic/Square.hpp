#include <bits/stdc++.h>
#include "Shape.hpp"
using namespace std;
class Square: public Shape {
    private:
        Point top_left;
        double side_length;
    public:
        Square(){
            top_left = Point(0,0);
            side_length = 0;
        }
        Square(const Point &top_left, double side_length){
            this->top_left = top_left;
            this->side_length = side_length; 
        }
        double get_surface() {
            return side_length*side_length;
        }
        void decribe_object(){
            cout<<"this is Square starting at ("<<top_left.x<<", "<<top_left.y<<")!"<<endl;
        }
};       