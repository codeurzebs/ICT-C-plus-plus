#include <iostream>
#include <string.h>
#include <math.h>
#define N 4
using namespace std;


struct produit{
    string nom;
    int qte;
    float prix;
};
typedef struct produit produit;
float coutTotal(int qte, float prix){
    return (qte*prix);
}


float ecartType(float tab[N]){
    int i;
    float M;
    float s=0;
    for(i=0; i<N; i++){
        s=s+tab[i];
    }
    M=(float)s/N;
    float V=0;
    for(i=0; i<N; i++){
        V=(float)V+(((tab[i]-M)*(tab[i]-M))/N);
    }
    float ecart=(float)sqrt(V);
    return ecart;
}

int main()
{
    produit p1;
    cout<<"entrer le nom de votre produit: "<<endl;
    cin>>p1.nom;
    cout<<"entrer la qte a acheter: "<<endl;
    cin>>p1.qte;
    cout<<"Entrer le prix de votre produit: "<<endl;
    cin>>p1.prix;
    cout<<"le cout total est de vote "<<p1.nom<<" est="<<coutTotal(p1.qte, p1.prix)<<"\n\n\n"<<endl;


    int i;
    float tabl[N];
    cout<<"--------ecartype ------------"<<endl;
    for(i=0; i<N; i++){
        cout<<"\t entrer la valeur reel Numero "<<i+1<<" :";
        cin>>tabl[i];
    }
    cout<<"l'ecartypes est= "<<ecartType(tabl)<<endl;


    cout<<"***Bonjour monsieur entrer un reel:"<<endl;
    float nbreR;
    cin>>nbreR;
    cout<<"***entrer la taille de votre tableau:"<<endl;
    int n;
    cin>>n;
    float tab[n];
    for(i=0; i<n; i++){
        cout<<"\t entrer la valeur reel Numero "<<i+1<<" :";
        cin>>tab[i];
    }
    cout<<"entrer un mot de votre choix monsieur: ";
    string mot;
    cin>>mot;


    cout<<"\n\n\n ---------------vos valeurs entrer son:\n\n"<<endl;
    cout<<"---- Votre nbre Reel est: "<<nbreR<<endl;
    cout<<"---- Votre mot entrer est: "<<mot<<endl;
    cout<<"---- Les elements de votre tableaux sont: "<<endl;
    for(i=0; i<n; i++){
        cout<<"** nbre n "<<i+1<<" = "<<tab[i]<<endl;
    }

    return 0;
}


