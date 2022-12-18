#include<iostream>
using namespace std;
class Repas{
    private:
        string nom;
        int heure;
        string description;
        string card = "1..*";
        Elments *card;
};
class Elments{
    private:
    string nom;
    string type;
};
class Animal{
    protected:
    string nom;
    int age;
    string genre;
};
class chat : public Animal{
    private:
    string type;
    public:
    void sauter(){}
};
class Race{
    protected:
    string specificite;
    void israceHybride(){}
};
class Chien : public Animal , Race{
    private:
    string taille;
    public:
    void ischass3(){}
    string card ="1..*";
    Entraineur *card ;
};
class Entraineur{
    private:
    string nom;
    string description;
    string card ="1..*";
    Chien *card;
};
class Entraineur{
    private:
    string nom;
    string description;
};
int main(){
    return 0;
}