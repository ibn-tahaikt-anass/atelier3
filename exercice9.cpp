#include<iostream>
using namespace std;
class Test{
public:
    void calcul(){
        static int i=1;
        cout << "la fonction calcul() a ete appeller " << i++ << " fois" << endl;}};
int main(){
    Test test;
    test.calcul();
    test.calcul();
    test.calcul();
    test.calcul();
    test.calcul();
    
    return 0;}
