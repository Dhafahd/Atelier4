#include<iostream>
using namespace std;

class Point{
    private:
        double x;
        double y;
    protected:
        string nom;
    public:
    Point(){
        x = 0.0;
        y = 0.0;
        nom = "";
    }
    double getX(){
        return x;
    }
    void setX(double x){
       this->x = x;
    }
    double getY(){
        return y;
    }
    void setY(double x){
       this->y = y;
    }
    string getNom(){
        return nom;
    }
    void setNom(string nom){
       this->nom = nom;
    }
    void afficher(){
        cout << "x = "<<x<<endl;
        cout << "y = "<<y<<endl;
        cout << "Nom = "<<nom<<endl;
    }

};
class PointCouleur : public Point{
    private :
        unsigned int couleur;
    public:
       PointCouleur() : Point(){
            couleur = 0;
       } 
       unsigned int getCouleur(){
            return couleur;
       }
       void setCouleur( unsigned int couleur){
            this->couleur = couleur;
       }
       void afficher(){
        Point :: afficher();
        cout << "Couleur: "<<couleur <<endl;
       }
} ;
 
int main(){
    return 0;
}