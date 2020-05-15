//
// Created by Andrea on 15/05/2020.
//

#ifndef PROGETTO_ALGORITMI_TABLE_H
#define PROGETTO_ALGORITMI_TABLE_H

#include <vector>
#include <list>
#include <string>
#include "C:/Users/Andrea/Desktop/boost_1_55_0/boost/variant/variant.hpp"
using namespace std;

typedef boost::variant <double, char, int,float,string> v;
class Table {
public:
    Table(vector<v> tipi_caselle);
    void add_record(vector<v> riga);
    void aggiungovalore();

private:

    vector<v> vettore;
    list<vector<v>> righe;
    list<vector<v>>::iterator i_lista;
    vector<v>::iterator j_vettore;
    vector<vector<string>> intestazione;

};


#endif //PROGETTO_ALGORITMI_TABLE_H
