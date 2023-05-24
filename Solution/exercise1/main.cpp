/* @Codeur ZEBS       
 * Repos  04/05/@2023
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

#include <iostream>

using namespace std;

int main()
{



    char start='o';//initialisation de la valeur pour reommencer le programme au debut en fonction de la boucle do while.

    while(start=='o'){

        cout << "Bonjour eleve fait un choix de figure a reviser:" <<endl;/*choix du menu par l eleve qui veux reviser ces cours*/
    cout<<"-------------------------------"<<endl;
    cout<<"1- Rectangle"<<endl;
    cout<<"2- Triangle"<<endl;
    cout<<"3- Cercle"<<endl<<endl;
    int choix;
    cin>>choix;

    switch(choix){ //en fonction de la valeur de choix y a traitement de chaque figure geometrique de la figure

    case 1:
        cout<<"Revision sur le Rectangle ok! :"<<endl<<endl; // partie du rectangle
        cout<<"entre la dimension de la longueur:"<<endl;
        int lon;
        cin>>lon;
        cout<<"entre la dimension de la largeur:"<<endl;
        int larg;
        cin>>larg;
        cout<<"quel est la reponse de L * l?"<<endl;
        int repo;
        cin>>repo;
        if(repo==(lon*larg)){
            cout<<"Bravo!! ton resultat est juste!!!"<<endl;
            cout<<"Fin du programme"<<endl<<endl;
        }else{
            cout<<"Ouuppss resultat est faux!!"<<endl<<endl;
            cout<<"Fin du programme"<<endl;
        }
        break;

    case 2:
        cout<<"Revision sur Le Triangle ok! :"<<endl<<endl; // partie du Triangle
        cout<<"entre la dimension de la base du triangle:"<<endl;
        int base;
        cin>>base;
        cout<<"entre la dimension de la Hauteur du triangle:"<<endl;
        int haut;
        cin>>haut;
        cout<<"quel est la reponse de (B * H)/2  ?"<<endl;
        float repon;
        cin>>repon;
        if(repon==((base*haut)/2)){
            cout<<"Bravo!! ton resultat est juste!!!"<<endl;
            cout<<"Fin du programme"<<endl<<endl;
        }else{
            cout<<"Ouuppss resultat est faux!!"<<endl<<endl;
            cout<<"Fin du programme"<<endl;
        }
        break;

    case 3:
        cout<<"Revision sur le Cercle ok! :"<<endl<<endl; // partie du cercle
        cout<<"Enter la valeur du rayon:"<<endl;
        int rayon;
        cin>>rayon;
        cout<<"quel est la reponse de (3.14*rayon*rayon)  ?"<<endl;
        float repons;
        cin>>repons;
        if(repons==(3.14159*(rayon*rayon))){
            cout<<"Bravo!! ton resultat est juste!!!"<<endl;
            cout<<"Fin du programme"<<endl<<endl;
        }else{
            cout<<"Ouuppss resultat est faux!!"<<endl<<endl;
            cout<<"Fin du programme"<<endl;
        }
        break;
    }

    cout<<"voulez vous recommencer?"<<endl; // question de retour ou non au menu initiale
    cout<<"--------Si oui taper 'o'"<<endl;
    cout<<"--------Si non taper 'n'"<<endl;
    cin>>start;

    }

    cout<<"-----------------------Merci fin definitive du programme--------------------"<<endl;










    return 0;
}
/* @Codeur ZEBS       
 * Repos  04/05/@2023
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
