#include<iostream>
using namespace std ; 
#include<unordered_map>

int main(){

    //creation
    unordered_map<string,int>m ;

    //insertion
    pair<string,int> p  = make_pair("Nachiket",3);
    m.insert(p);

    //insertion 
    m["tonge"] = 1 ;

    cout<<m["Nachiket"]<<endl ; // searching
    cout<<m.size()<<endl ;

    // searching
    cout<<m["Unknown"]<<endl;
    cout<<m.at("Nachiket")<<endl; 

    m.erase("tonge"); // to remove 
    cout<<m.size()<<endl; // size will be changed 


    for(auto i  :m){ // all the elements will be printed
        cout<<i.first<<" -> "<<i.second<<endl ;
    }
    // if we use ordered pair then elements will be printed as per inserted 

    // using iterator 
    unordered_map<string,int> :: iterator it = m.begin() ;
    while(it != m.end()){

        cout<<it->first<<" -> "<<it->second<<endl ;
        it++ ;
    }
    cout<<endl; 


    return 0 ;

}