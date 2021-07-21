#include "Point.hpp"
#include "Square.hpp"
#include "circle.hpp"
int main(){
    Point top_left(3,4);
    Square square(top_left,5);
    cout<<square.get_surface()<<endl;
    square.decribe_object();
    cout<<square.get_double_surface();
    // circle
    Circle circle(top_left,4);
    cout<<circle.get_surface();
    return 0;
}