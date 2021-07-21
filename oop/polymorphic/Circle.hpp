#include <bits/stdc++.h>
using namespace std;
class Circle:public Shape{
    private:
        double r;
        Point center;
    public:
        Circle(){}
        Circle(Point &center, double r){
            this->center = center;
            this->r = r;
        }
        double get_surface(){
            return r*r*3.14;
        }
        
};