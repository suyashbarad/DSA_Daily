#include<iostream>
using namespace std;

class Student{
    private:
        string name;;
        int prn;
        float marks;
    public:
        void getinfo();
        void display();
        // void sort();
        // void circArea();
};
void Student::getinfo(){
    cout<<"Enter Name:  ";
    cin>>name;
    cout<<"Enter PRN:  ";
    cin>>prn;
    cout<<"Enter Marks:  ";
    cin>>marks;
}
void Student::display(){
    cout<<"Name: "<< name << endl << "PRN: " << endl << "Marks: " << marks << endl;
}
// void Area::sort(){
//     for(int i = 0; i < 2; i++){
//         for(int i = 0; i < 2-i; i++){
//             if()
//         }
//     }
// }
int main(){
    Student n[3];
    for(int i = 0; i < 3; i++){
        n[i].getinfo();
    }
    for(int i = 0; i < 3; i++){
        cout<<"Student "<<i+1<<endl;
        n[i].display();
    }
}


