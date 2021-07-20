#include "Point.hpp"
#include "Square.hpp"
int main(){
    Point top_left(3,4);
    Square square(top_left,5);
    cout<<square.get_surface()<<endl;
    square.decribe_object();
    cout<<square.get_double_surface();
    return 0;
}