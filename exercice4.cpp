#include <iostream>
using namespace std;

class Mere
{
public:
    void display(){
        cout<<"je suie la mere"<<endl;
    }

};
class Fille: public Mere
{
public:
    void display(){
        cout<<"je suis la fille"<<endl;
    }
};

int main(){
    Mere m ;
    m.display();
    
     Fille f;
    f.display();

    return 0;
}
