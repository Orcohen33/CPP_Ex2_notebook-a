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

            void write(int page, int row, int column, ariel::Direction dir, const string &str);
            static string read(int page, int row, int column, ariel::Direction dir, int length);
            void erase(int page, int row, int column, ariel::Direction dir, int length);
            void show(int page);
    };
}