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

#include <iostream>
#include<vector>
#include"Client.h"
#include"Compte.h"
#include<string>

using namespace std;

int main()
{
    Client cls;
    Compte cpte;
    cout<<"****************************ICT-BANK************************" << endl;
    cout<<"                            BIENVENUE                       "<<endl;
    cout<<"\t\t MENU"<<endl;
    cout<<"\t 1-) Creer un compte;"<<endl;
    cout<<"\t 2-) Consulter son solde;"<<endl;
    cout<<"\t 3-) Faire un depot;"<<endl;
    cout<<"\t 4-) Faire un retrait;"<<endl;
    cout<<"\t 5-) Faire un transfert de son compte;"<<endl;
    cout<<"\t 6-) Consulter l historique du compte"<<endl<<endl;

    cout<<"\t Entrer une action: ";
    int choix;
    cin>>choix;
    cout<<endl<<endl;
    int nbrec;
    switch(choix){
    case 1:
        cout<<"\t Entrer les information du client : "<<endl<<endl;
        cpte.infoclt();
        cout<<"\t Combien de sous compte voulez vous creer au client: ";
        cin>>nbrec;
        for(int i=0; i<nbrec; i++){
            cout<<"Numero de compte "<<i+1<<" : "<<cpte.getCpte()<<endl;
        }


        break;

    }



    return 0;
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
