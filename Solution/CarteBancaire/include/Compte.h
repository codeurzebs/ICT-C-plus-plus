#ifndef COMPTE_H
#define COMPTE_H
#include<iostream>
#include"Client.h"
using namespace std;

class Compte
{
    public:
        Compte();
        virtual ~Compte();
        Compte(string nc, string pw, int sld);
        string getCpte();
        void setCpte(string nc);
        string getPwd();
        void setPwd(string pw);
        int getSolde();
        void setSolde(int mnt);
        void infoclt();
    protected:

    private:
        string nc;
        string pw;
        int solde=10000;

};

#endif // COMPTE_H
