#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // creation  (unordered map order does not mentain)
    unordered_map<string, int> m;
    // map<string, int> m;
    // 1
    pair<string, int> p = make_pair("sonu", 3);
    m.insert(p);

    // 2
    pair<string,int> p1("abhi",5);

    m.insert(p1);

    // 3
    m["ram"]=1;
    // it will update the value
    // 1 time insertion and second time updation
    // m["ram"]=5;

    // search
    cout<<m["sonu"]<<" ";
    cout<<m.at("sonu")<<" "; 
    // 
    // this will create a new entry corresponding to zero
    cout<<m["unknown"]<<" ";
    // -------
    // this will gives error if it is used a entry which is not insert but after user that first type of search it 
    // will also insert zero 
    cout<<m.at("unknown")<<" "; 

    // size
    cout<<m.size()<<endl;

    // check presance 0/1
    cout<<m.count("sonu")<<endl;
   
//    erase
m.erase("abhi");
cout<<m.size()<<endl;


// for each
// for(auto i : m){
//     cout<<i.first <<" "<<i.second<<endl;
// }

// scond using itrater 
unordered_map<string,int> :: iterator it =m.begin();
// map<string,int> :: iterator it =m.begin();

while(it !=m.end()){
     cout<<it->first <<" "<<it->second<<endl;
     it++;

}



    return 0;
}