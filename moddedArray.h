#include <iostream>
#include <string>
#include <fstream>
#include <string>

struct twoPiece{
    int x;
    int y;
};

class moddedArray{
    private:
        int size = 100;
        int *arr = new int[size];
    public:
        int getSize();
        int check(int num);
        twoPiece modify(int index, int newVal);
        void popMod(int index, char choice);
        void append(int num);
        void load();
        int at(int index){ return arr[index]; }
};
