/* @Codeur ZEBS       
 * Repos Presentation 25/05/23
 * ONLINE
 * @IDE      CodeBlocks
 * @univ 	    ICT
 * @copyright       Copyright (c) 2022 ZEBS
 * @license         My Login is licensed under the CodeBlocks license.
 * @github          https://github.com/NGUENAZEBS
 * @version         1.0.1 ICT-U
 * Help me to keep this project
 *https://ko-fi.com/pilotezebs
 *club      NGcodeX
 */

#include "Compte.h"
#include "Client.h"
#include<iostream>
using namespace std;


Client cls;
Compte::Compte(string nc, string pw, int sld){
    this->nc=nc;
    this->pw=pw;
    this->solde=10000;
}

string Compte::getCpte(){
    return this->nc;
}
void Compte::setCpte(string nc){
    this->nc=nc;
}
string Compte::getPwd(){
    return this->pw;
}
void Compte::setPwd(string pw){
    this->pw=pw;
}

int Compte::getSolde(){
    return this->solde;
}

void Compte::setSolde(int mnt){
    this->solde+=mnt;//ajout
}
void Compte::infoclt(){
    cout<<"\t Entrer le nom client: ";
    cin>>cls.nom;
    cout<<"\n\t Entrer l adress client: ";
    string add;
    cin>>add;
    cls.setAdd(add);
    cout<<"\n\t Entrer le numero de tel: ";
    string tel;
    cin>>tel;
    cls.setTel(tel);
    string nom=cls.nom;
    string nc="2305UBA"+nom.substr(0,2)+"3333";
    cout<<"\n\t Son numero de compte Principal est : "<<nc<<endl;
    setCpte(nc); //ZEBS

}
Compte::Compte()
{
    //ctor
}

Compte::~Compte()
{
    //dtor
}


/* @Codeur ZEBS       
 * Repos Presentation 25/05/23
 * ONLINE
 * @IDE      CodeBlocks
 * @univ 	    ICT
 * @copyright       Copyright (c) 2022 ZEBS
 * @license         My Login is licensed under the ECLIPSE license.
 * @github          https://github.com/NGUENAZEBS
 * @version         1.0.1 ICT-U
 * Help me to keep this project
 *https://ko-fi.com/pilotezebs
 *club      NGcodeX
 */
