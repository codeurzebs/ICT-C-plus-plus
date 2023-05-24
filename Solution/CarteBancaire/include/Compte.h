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
