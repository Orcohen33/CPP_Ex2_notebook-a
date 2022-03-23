#include<iostream>
#include<vector>
#include "Direction.hpp"
#include "Notebook.hpp"

using namespace std;

namespace ariel{
    void Notebook::write(uint page, uint row, uint column, ariel::Direction dir, const string &str){}
    string Notebook::read(uint page, uint row, uint column, ariel::Direction dir, uint length){return "";}
    void Notebook::erase(uint page, uint row, uint column, ariel::Direction dir, uint length){}
    void Notebook::show(uint page){}
}