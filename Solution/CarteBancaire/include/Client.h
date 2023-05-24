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

#ifndef CLIENT_H
#define CLIENT_H
#include "Compte.h"
#include<iostream>
#include<vector>
using namespace std;

class Client
{
    public:
        Client();
        virtual ~Client();
        string nom;
        Client(string nm, string add, string tel, string ncpte, string dmpd);
        string getAdd();
        void setAdd(string a);
        string getTel();
        void setTel(string t);
        int consulterSolde(string nc, string m);
        void deposer(string nc, int mnt);
        int retirer(string nc, int mnt, string mdp);
        int transfere(string ncd, string nc, int mnt, string mdp);

    protected:

    private:
        string address;
        string tel;
        string ncpte;
        string mdp="1234678";
};

#endif // CLIENT_H


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
