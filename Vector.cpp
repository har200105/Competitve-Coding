#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    cout<<"Size of v is : "<<v.size()<<"And the capacity is :"<<v.capacity()<<endl;
    cout<<"Maximum size of V is : " <<v.max_size()<<endl;
    v.push_back(21);
    cout<<"Size of v is : "<<v.size()<<"And the capacity is :"<<v.capacity()<<endl;
    
    cout<<v[5]<<endl;  // ----> Gives output as 0 but .at function will give error
    
    cout<<v.front()<<","<<v.back()<<endl;
    
    v.insert(v.begin()+2,22);
    cout<<v[2]<<endl;
    // v.pop_back();
    // cout<<v[6]<<endl;
    
    list<int>l={2,4,6,8,10};
    v.insert(v.begin(),l.begin(),l.end());
    cout<<v[0]<<v[1]<<v[2]<<v[3]<<v[4]<<endl;
    
    v.erase(v.begin()+1,v.begin()+3);
    cout<<v[0]<<v[1]<<v[2]<<v[3]<<v[4]<<endl;
    
    
    return 0;
}

//   v.push_back(121);
    // cout<<"Size of v is : "<<v.size()<<"And the capacity is :"<<v.capacity()<<endl;
    //   v.push_back(100);
    // cout<<"Size of v is : "<<v.size()<<"And the capacity is :"<<v.capacity()<<endl;
    //   v.push_back(112);
    // cout<<"Size of v is : "<<v.size()<<"And the capacity is :"<<v.capacity()<<endl;
    //   v.push_back(11);
    // cout<<"Size of v is : "<<v.size()<<"And the capacity is :"<<v.capacity()<<endl;
    //   v.push_back(98);
    // cout<<"Size of v is : "<<v.size()<<"And the capacity is :"<<v.capacity()<<endl;
    // -------> The size of capacity double when we insert more than the size of the vector