#include <iostream>
    #include <iomanip>
    #include <string>
    
    using namespace std;
    
    void afficherDateEtHeure(const string& s)
    {
        if ( s.length() != 12 )
            cerr << "Chaine invalide." << endl;
        else
        {
            string mois = s.substr(2,2);
            if (mois == "01"){
                cout << "Date  : " << s.substr(0,2) << " " << "janvier" << " " << s.substr(4,4) << " a " << s.substr(8,2) << "h" << s.substr(10,2) << endl;
            }else if(mois == "02"){
                cout << "Date  : " << s.substr(0,2) << " " << "fevrier" << " " << s.substr(4,4) << " a " << s.substr(8,2) << "h" << s.substr(10,2) << endl;
            }else if(mois == "03"){
                cout << "Date  : " << s.substr(0,2) << " " << "mars" << " " << s.substr(4,4) << " a " << s.substr(8,2) << "h" << s.substr(10,2) << endl;
            }else if(mois == "04"){
                cout << "Date  : " << s.substr(0,2) << " " << "avril" << " " << s.substr(4,4) << " a " << s.substr(8,2) << "h" << s.substr(10,2) << endl;
            }else if(mois == "05"){
                cout << "Date  : " << s.substr(0,2) << " " << "mai" << " " << s.substr(4,4) << " a " << s.substr(8,2) << "h" << s.substr(10,2) << endl;
            }else if(mois == "06"){
                cout << "Date  : " << s.substr(0,2) << " " << "juin" << " " << s.substr(4,4) << " a " << s.substr(8,2) << "h" << s.substr(10,2) << endl;
            }else if(mois == "07"){
                cout << "Date  : " << s.substr(0,2) << " " << "juillet" << " " << s.substr(4,4) << " a " << s.substr(8,2) << "h" << s.substr(10,2) << endl;
            }else if(mois == "08"){
                cout << "Date  : " << s.substr(0,2) << " " << "août" << " " << s.substr(4,4) << " a " << s.substr(8,2) << "h" << s.substr(10,2) << endl;
            }else if(mois == "09"){
                cout << "Date  : " << s.substr(0,2) << " " << "septembre" << " " << s.substr(4,4) << " a " << s.substr(8,2) << "h" << s.substr(10,2) << endl;
            }else if(mois == "10"){
                cout << "Date  : " << s.substr(0,2) << " " << "octobre" << " " << s.substr(4,4) << " a " << s.substr(8,2) << "h" << s.substr(10,2) << endl;
            }else if(mois == "11"){
                cout << "Date  : " << s.substr(0,2) << " " << "novembre" << " " << s.substr(4,4) << " a " << s.substr(8,2) << "h" << s.substr(10,2) << endl;
            }else if(mois == "12"){
                cout << "Date  : " << s.substr(0,2) << " " << "decembre" << " " << s.substr(4,4) << " a "  << s.substr(8,2) << "h" << s.substr(10,2) << endl;
            }}}
    
    int main(int argc, char** argv)
    {
        string s;
        cout << "Entrer le votre char:" << endl ;
        cin >> s;
        afficherDateEtHeure(s); 
    }