#include <iostream>
    #include<vector>
    #include<iterator>
    #include <algorithm>
    using namespace std;
    
    void display(vector <int> tab){
        for (int i = 0; i < tab.size(); i++) {
        cout << tab[i] << " \t";
    }
    }
    void triABull(vector <int> &tab) {
        for (size_t i = 0; i < tab.size() - 1; ++i) {
            for (size_t j = 0; j < tab.size() - i - 1; ++j) {
                if (tab.at(j) > tab.at(j + 1))
                    swap(tab.at(j), tab.at(j + 1));
            }
        }
    }
    
    
    void triParSelection(vector<int> &tab) {
        for (auto it = tab.begin(); it != tab.end(); ++it) {
            swap(*it, *min_element(it, tab.end()));
        }
    }
    void triParInsertion(vector<int> &vec) {
        for (auto it = vec.begin() + 1; it != vec.end(); ++it) {
            auto key = it;
    
            for (auto i = it - 1; i >= vec.begin(); --i) {
                if (*i > *key) {
                    swap(*i, *key);
                    key--;
                } else {
                    break;
                }
            }
        }
    }
    int main(){
    
        vector <int> tab; int indice;
        cout << "Entrer une liste des entiers : "  <<endl;
        for(int i=0;i<5;i++){
            cin >> indice;
            tab.push_back(indice);
        }
        cout << "La liste avant trier" << endl;
        display(tab);
        triParInsertion(tab);
         cout << endl;
        cout << "La liste apres triParInsertion" << endl;
        display(tab);
       
        triParSelection(tab);
         cout << endl;
        cout << "La liste apres triParSelection" << endl;
        display(tab);
       triABull(tab);
         cout << endl;
        cout << "La liste apres triABull" << endl;
        display(tab);
       
        return 0;
    }