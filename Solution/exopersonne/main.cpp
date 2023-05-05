#include <iostream>
#include <string>

using namespace std;

/*Code editer par: @CODEUZEBS
*Matiere: C++, POO
*04/05/@2023
*Exo TP en class
*/


//****************************class Personne******************************
class Personne{

private:
    int age;

public:
    string nom, prenom;
    Personne(){
        nom="CODEUR";
        prenom="ZEBS";
        age=10;
    }
    Personne(string _nom, string _prenom, int _age){
        nom=_nom;
        prenom=_prenom;
        age=_age;
    }

    int getAge(){
        return age;
    }
    void setAge(int a){
        age=a;
    }
    void presentation(){
        cout<<"le nom est : "<<nom<<" le prenom est : "<<prenom<<" l age est : "<<getAge()<<endl;
    }
};


//******************************Heritage sur la class Etudiant qui herite de Personne ************************
class Etudiant: public Personne{

public:
    string matricule;
    Etudiant(){
        Personne();
        matricule="ICT20233634";
    }
    Etudiant(string _nom, string _prenom, int _age, string _matricule ){
        Personne(_nom, _prenom, _age);
        matricule=_matricule;
    }
    string getMatricule(){
        return matricule;
    }
    void setMatricule(string m){
        matricule=m;
    }

    void saisChanter(){
        cout<<"je m appel "<<nom<<" "<<prenom<<"  j ai "<< getAge()<<"  Mon matricule est "<< getMatricule() <<" et je sais chanter merci!"<<endl;
    }
};


//**********************************Fonction Main du programme******************************
int main()
{


//--Etudiant------
    Etudiant etud;
    int ageE;
    cout<<"----------------Etudiant---------------"<<endl;
    cout<<"** Information etudiant: "<<endl;
    cout<<"Entrer votre Matricule: "<<endl;
    cin>>etud.matricule;
    cout<<"Entrer votre nom: "<<endl;
    cin>>etud.nom;
    cout<<"Entrer votre prenom: "<<endl;
    cin>>etud.prenom;
    cout<<"Entrer votre Age: "<<endl;
    cin>>ageE;
    etud.setAge(ageE);
    cout<<"\n *Information personnelle: "<<endl;
    etud.presentation();
    cout<<" *Information Scolaire: "<<endl;
    etud.saisChanter();




//----Personne----
    Personne ps;
    int ag;
    cout<<"\n\n----------------Personne---------------"<<endl;
    cout<<"info par defaut est : "<<endl;
    ps.presentation();
    cout<<"Entrer votre nom: "<<endl;
    cin>>ps.nom;
    cout<<"Entrer votre prenom: "<<endl;
    cin>>ps.prenom;string nom;
    string prenom;
    cout<<"Entrer l age: "<<endl;
    cin>>ag;
    ps.setAge(ag);
    ps.presentation();

    return 0;
}

/*Code editer par: @CODEUZEBS
*Matiere: C++, POO
*04/05/@2023
*Exo TP en class
*/
