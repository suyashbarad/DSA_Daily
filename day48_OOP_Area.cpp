#include<iostream>
using namespace std;

class Area{
    private:
        int a;
        int b;
    public:
        void sqArea();
        void recArea();
        void triArea();
        void circArea();
};
void Area::sqArea(){
    cout<<"Enter side: ";
    cin>>a;
    cout<<"Area of square: "<<a*a<<endl;
}
void Area::recArea(){
    cout<<"Enter side1: ";
    cin>>a;
    cout<<"Enter side2: ";
    cin>>b;
    cout<<"Area of rectangle: "<<a*b<<endl;
}
void Area::triArea(){
    cout<<"Enter height: ";
    cin>>a;
    cout<<"Enter base: ";
    cin>>b;
    cout<<"Area of triangle: "<<(0.5)*a*b<<endl;
}
void Area::circArea(){
    cout<<"Enter radius: ";
    cin>>a;
    cout<<"Area of circle: "<<(3.14)*a*a<<endl;
}
int main(){
    // int a, b;
    Area n;
    int choice;
    while(1){
        cout<<"Area of 1.Square, 2.Rectangle, 3.Triangle, 4.Circle, 5.End"<< endl <<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                n.sqArea();
                break;
            case 2:
                n.recArea();
                break;
            case 3:
                n.triArea();
                break;
            case 4:
                n.circArea();
                break;
            case 5:
                return 0;
        }
    }
}


