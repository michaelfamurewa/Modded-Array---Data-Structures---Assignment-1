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
        int size = 100; // Default array size set to 100
        int *arr = new int[size]; // Allocating space for an array of 100 integers, all items initialize to 0
    public:
        int getSize() {return size;}
        int check(int num);
        twoPiece modify(int index, int newVal);
        void popMod(int index, char choice);
        void append(int num);
        void load();
        int at(int index){ return arr[index]; }
};
