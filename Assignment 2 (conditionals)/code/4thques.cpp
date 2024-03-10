//volume of cylinder =(3.14*r^2*h)
#include <iostream>
using namespace std;
int main(){
    float radius,height;
    cout<<"enter the radius and height: ";
    cin>>radius>>height;
    float volume_cylinder=(3.14*radius*radius*height);
    cout<<"the volume of the cylinder:"<<volume_cylinder;
    return 0;
}