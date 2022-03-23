#include<iostream>
#include<vector>
#include "Direction.hpp"

using namespace std;
namespace ariel{
    class Notebook{
        private:
            int columns = 100;
        public:
            vector<string> note;

            void write(uint page,uint row, uint column, ariel::Direction dir, const string &str);
            static string read(uint page, uint row, uint column, ariel::Direction dir, uint length);
            void erase(uint page, uint row, uint column, ariel::Direction dir, uint length);
            void show(uint page);
    };
}