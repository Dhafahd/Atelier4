#include<iostream>
using namespace std;
class complexe{
    public:
    int img1;
    int rel1; 
    int img2;
    int rel2; 
complexe(){}
complexe(int rel , int img){
    this->img1=img;
    this->rel1=rel;
}
void donner1(){
    cout<<"veuiller donner la partie reel du nombre complexe 1 :"<<endl;
    cin>>rel1;
    cout<<"veuiller donner la partie imaginaire du nombre complexe 1 :"<<endl;
    cin>>img1;
    cout<<"le nombre complexe est 1 : "<<rel1<<"+i"<<img1<<endl;
}
void donner2(){
    cout<<"veuiller donner la partie reel du nombre complexe 2 :"<<endl;
    cin>>rel2;
    this->rel1=rel2;
    cout<<"veuiller donner la partie imaginaire du nombre complexe 2 :"<<endl;
    cin>>img2;
    this->img1=img2;
    cout<<"le nombre complexe est 2 : "<<rel2<<"+i"<<img2<<endl;
}
void operator+(complexe &c){
    img1+=c.img1;
    rel1+=c.rel1;
    cout<<"la sommation egale a : "<<rel1<<"+i"<<img1<<endl;
}
void operator-(complexe &c){
    img1-=c.img1;
    rel1-=c.rel1;
    cout<<"la soustraction egale a : "<<rel1<<"+i"<<img1<<endl;
}
void operator*(complexe &c){
    img1=img1*c.img1;
    rel1=rel1*c.rel1;
    cout<<"le produit egale a : "<<rel1<<"+i"<<img1<<endl;
}
void operator/(complexe &c){
    img1=img1/c.img1;
    rel1=rel1/c.rel1;
    cout<<"la division egale a : "<<rel1<<"+i"<<img1<<endl;
} 
};
int main(){
string ope;
 complexe c1;
 complexe c2;
 c1.donner1();
 c2.donner2();
 cout<<"veuiller entre l operation voulu :+ ou - ou * ou /"<<endl;
 cin>>ope;
if(ope=="+")
            {c1+c2;}
if(ope=="*")
            {c1*c2;}
if(ope=="-")
            {c1-c2;}
if(ope=="/")   
            {c1/c2;}
 return 0;
}