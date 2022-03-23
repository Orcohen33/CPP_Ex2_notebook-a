#include<iostream>
#include<vector>
#include "Direction.hpp"
#include "Notebook.hpp"

using namespace std;

namespace ariel{
    void Notebook::write(int page, int row, int column, ariel::Direction dir, const string &str){}
    string Notebook::read(int page, int row, int column, ariel::Direction dir, int length){return "";}
    void Notebook::erase(int page, int row, int column, ariel::Direction dir, int length){}
    void Notebook::show(int page){}
}