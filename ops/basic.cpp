#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 class hero{
     //properties
     int helth;
     public:
  char level;

  //constuctor
//   defult
// hero(){
//     cout<<"constructor";
// }

// //parameter
// hero(int helth){
//     helth=helth;
// }

  int get_helth(){
      return helth;

  }
  int set_helth(int h){
    helth =h;
  }
 };
int main() {
    // static object
    hero h;
    // h.helth=50;
    h.level='A';
    // cout<<h.level<<endl<<h.helth;

    //dynamic 
    hero *p= new hero;
    // (*p).sethelth(20);
    //alternative way
    p->set_helth(100);
    cout<<p->get_helth();
    
    //setter
  h.set_helth(50);
  //getter
    cout<<h.get_helth();





   
return 0;
}