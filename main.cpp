#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

#include "C:/Users/Andrea/Desktop/boost_1_55_0/boost/variant/variant.hpp"

using namespace std;

vector <string> acquisisci_query(const string& s);
int main() {
    /**int i=0,k=0;
    string s,parola;
    vector <string> parole;
    cout<<"dammi query"<<endl;
    getline(cin,s);**/

    typedef boost::variant <double, char, int> v;
    vector<v> vettore;
    vettore.emplace_back(3.14);
    cout<<vettore[0]<<endl;
    vettore.emplace_back('A');
    cout<<vettore[1]<<endl;
    vettore.emplace_back(3);
    cout<<vettore[2]<<endl;

    /*try {
        parole = acquisisci_query(s);
        if(parole.empty()){
            throw bad_alloc();
        }
    }
    catch(bad_alloc &bd){
        cout<<"query vuota"<<endl;
    }
*/
    return 0;
}

vector <string> acquisisci_query(const string& s) {
    stringstream word(s);
    string parola;
    vector<string> parole;
    while (word >> parola) {
        transform(parola.begin(), parola.end(), parola.begin(), ::toupper);
        parole.push_back(parola);
    }
    return parole;
}