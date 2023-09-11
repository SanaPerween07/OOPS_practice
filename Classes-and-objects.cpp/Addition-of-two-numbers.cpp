#include<iostream>
using namespace std;

class Addition{
    private:
    int a , b;

    public:
    void getdata(){
        cin>>a>>b;
    }
    void putdata(){
        cout<<a<<" + "<<b<<" = "<<a+b;
    }
};

int main(){
    Addition add;
    add.getdata();
    add.putdata();
    return 0;
}