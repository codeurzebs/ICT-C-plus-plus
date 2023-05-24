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
#include "Client.h"
#include <iostream>
#include<vector>
using namespace std;
vector<Compte> cpte;
Client::Client(string nm, string add, string tel, string nc, string dmpd){
    this->nom=nm;
    this->address=add;
    this->tel=tel;
    this->ncpte=nc;
    this->mdp=dmpd;
}
string Client::getAdd(){
    return this->address;
}

void Client::setAdd(string a){
    this->address=a;
}
string Client::getTel(){
    return this->tel;
}

void Client::setTel(string t){
    this->tel=t;
}

int Client::consulterSolde(string nc, string m){
    for(int i=0; i<cpte.size(); i++){
        if(nc==cpte[i].getCpte() && m==cpte[i].getPwd()){
            i=cpte.size();
            return cpte[i].getSolde();
        }
    }
    return -1;//aucun compte c a d a l initiale 0 pour une personne lamda
}
void Client::deposer(string nc, int mnt){
    int stop=-1;
    for(int i=0; i<cpte.size(); i++){
        if(nc==cpte[i].getCpte()){
                cpte[i].setSolde((cpte[i].getSolde()+mnt));
                cout<<"Depot effectuer au nom: "<<this->nom<<" avec successs!!! Merci pour votre confiance"<<endl;
                stop=1;
                break;
        }
    }
    if(stop==-1){
        cout<<"OUUppssss compte invalide!!!"<<endl;
    }
}
int Client::retirer(string nc, int mnt, string m){
    for(int i=0; i<cpte.size(); i++){
        if(nc==cpte[i].getCpte()&& m==cpte[i].getPwd()){
            if(cpte[i].getSolde()>10000){
                int solde= cpte[i].getSolde()-10000;
                if(mnt<=solde){
                    solde=solde-mnt;
                    cpte[i].setSolde((-mnt));//-- solde dans setSolde(int solde)
                    i=cpte.size();
                    return cpte[i].getSolde();
                }else{
                    i=cpte.size();
                    return -1;//pour lui dire qu il n a pas assez
                }
            }
        }
    }
    return -2;//n existe pas
}

int Client::transfere(string ncd, string nc, int m, string mdp){
    for(int i=0; i<cpte.size(); i++){
        if(nc==cpte[i].getCpte()&& mdp==cpte[i].getPwd()){
            for(int j=0; i<cpte.size(); j++){
                if(ncd==cpte[j].getCpte()){
                   int solde= cpte[i].getSolde()-10000;
                    /*if(m<=solde){
                        solde=solde-m;
                        cpte[i].setSolde((solde));
                        cpte[j].setSolde((m+cpte[j].getSolde()));
                        i=cpte.size();
                    }*/
                    //
                    // ......MODIFICATION Errorr Transf $$$
                }
            }
            i=cpte.size();
            return cpte[i].getSolde();
        }
    }
    return -1;//montant insufisant
}

Client::Client()
{
    //ctor
}

Client::~Client()
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
