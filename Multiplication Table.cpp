#include<iostream>

using namespace std;

int main()
{
    float mark;
    cout<<"Please enter your mark : "<<endl;
    cin>>mark;

    if(mark>100 || mark<0)
        cout<<"Invalid Input"<<endl;

    else if(mark>=90)
        cout<<"Grade : A+"<<endl;

    else if(mark<90 && mark>=85)
        cout<<"Grade : A"<<endl;

    else if(mark<85 && mark>=80)
        cout<<"Grade : B+"<<endl;

    else if(mark<80 && mark>=75)
        cout<<"Grade : B"<<endl;

    else if(mark<75 && mark>=70)
        cout<<"Grade : C+"<<endl;

    else if(mark<70 && mark>=65)
        cout<<"Grade : C"<<endl;

    else if(mark<65 && mark>=60)
        cout<<"Grade : D+"<<endl;

    else if(mark<60 && mark>=50)
        cout<<"Grade : D"<<endl;

    else if(mark<50)
        cout<<"Grade : F"<<endl;

    return 0;
}
