#include <iostream>
 
using namespace std;

class Human
{
public:
    int h;
    int w;
    int a;

public:
    int getage()
    {
        return this->a;
    }

    void setw(int wt)
    {
        this->w = wt;
    }
};


class male:public Human{
public:
string color;

void sleep(){
    cout<<"sleep"<<endl;
}
};

int main()
{
    male obj;
    cout<<obj.a<<endl;
      obj.setw(50);
    cout<<obj.w<<endl;
    cout<<obj.h<<endl;

    cout<<obj.color<<endl;
    obj.sleep();
  


    return 0;
}