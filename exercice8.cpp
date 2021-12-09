#include <iostream>
using namespace std;
class Media
{
public:
    Media(){};
    string titre;
    virtual void imprime(){
        cout << "i\'am a media" << std::endl;
    };
    char *id(char a);
};
class Livre : public Media
{
public:
    Livre(){};
    string auteur;
};
class audio : public Livre
{
public:
    audio(){};
    string vocale;
};
class cd : public audio
{
public:
    cd(){};
    string ecoute;
};
class casette : public audio
{
public:
    casette(){};
    string protege;
};
class disque : public audio
{
public:
    disque(){};
    string stocke;
};
class presse : public Media
{
public:
    presse(){};
    string papier;
};
class magazine : public presse
{
public:
    magazine(){};
    string publication;
};
class journal : public presse
{
public:
    journal(){};
    string periodique;
};
class revue : public presse
{
public:
    revue(){};
    string precis;
};
int main()
{
    disque d;
    Livre v;
    magazine m;
    d.imprime();
    v.imprime();
    m.imprime();
    return 0;
}
