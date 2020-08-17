#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //declaration and initialization of vector
    vector<int> a;
    vector<int> a1(5,0);
    vector<int> a2 = {1,2,3,4,5};
    vector<int> a3 {6,7,8,9,10};
    vector<int> a4;

    //accessing elements

    cout<<a2.at(3)<<endl;
    cout<<a3[0]<<endl;

    //front and back will be same as stl array
    
    //push_back
    //let us see how the vector grows dynamically
    
    for(int i=0;i<32;i++)
    {
        a.push_back(i);
        cout<<"Size: "<<a.size()<<"  Capacity: "<<a.capacity()<<endl;
    }

    //reserve() will keep capacity to passed size
    cout<<endl<<"===========A4==========="<<endl;
    a4.reserve(100);
    for(int i=0;i<32;i++)
    {
        a4.push_back(i);
        cout<<"Size: "<<a4.size()<<"  Capacity: "<<a4.capacity()<<endl;
    }    
    
    //shrink_to_fit() will reduce the vector capacity to the size of vector
    cout<<"Shrint to fit:"<<endl;
    a4.shrink_to_fit();
    cout<<"Size: "<<a4.size()<<"  Capacity: "<<a4.capacity()<<endl;

    //resize will change the size of container to hold passed number of elements
    cout<<"Resize:"<<endl;
    a4.resize(50);
    cout<<"Size: "<<a4.size()<<"  Capacity: "<<a4.capacity()<<endl;

    //returns the maximum no of elements that a vector can hold
    cout<<"MAX size: "<<a4.max_size();    

    return 0;
}