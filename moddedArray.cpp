#include "moddedArray.h"

using namespace std;

int moddedArray::getSize(){
    //Counts each element in array and adds them up
    int num = 0;
    for(int i = 0; i < size; i++){
       num++;
    }
    return num;
}

void moddedArray::append(int num){
    try {
        int *dupe = new int[size + 1]; //Creates a new array 1 bigger than current array
        for (int i = 0; i < size; i++) {
            dupe[i] = arr[i];               //Loads the old data to new array
        }
        delete[] arr; //Deallocating memory
        dupe[size] = num; // adding new value to be appended
        arr = dupe; // Replacing old array with updated array
        size += 1; //updating array size for other functions to use
    }
    catch(out_of_range &error){
        cout << error.what() << endl;
    }
}

int moddedArray::check(int num){
    for(int i = 0; i < size; i++){
        if(num == arr[i])
            return i;
    }
    return -1; //Returns -1 if item not found in array
}

twoPiece moddedArray::modify(int index, int newVal){

    twoPiece couple; // Struct of two integer values to return old and new value to user

    try {

        if((index > size) || (index < 0)) //Checks if index provided is within array
            throw out_of_range("ERROR: moddedArray out of range.");

        couple.x = arr[index]; // storing old val
        couple.y = newVal; // storing new val
        arr[index] = newVal; // replacing the value in the array

        return couple;
    }
    catch(out_of_range &error){
        cout << error.what() << endl;
    }

    return couple;
}

void moddedArray::popMod(int index, char choice){

    choice = toupper(choice);
    try {
        if (choice == 'M')
            arr[index] = 0; // Replacing val at index with 0
        else if (choice == 'P') {
                // Below creates a new array 1 smaller than original
            int *dupe = new int[size - 1];
            for (int i = 0; i < size; i++) {
                if (i == index) {
                    // Skips the index provided when loading data into the new array
                    for (int x = i + 1; x < size; x++) {
                        dupe[x - 1] = arr[x];
                    }
                    break;
                } else
                    dupe[i] = arr[i];
            }

            delete[] arr;
            arr = dupe;
            size -= 1; // Updating size for other functions to use
        }
        else
            throw runtime_error("ERROR: Invalid choice parameter");
    }
    catch(runtime_error &error){
        cout << error.what() << endl;
    }
}

void moddedArray::load(){
    ifstream inFile;
    inFile.open("A1input.txt");
    // Fills the array with integers from input file
    for(int i = 0; i < size; i++){
        inFile >> arr[i];
    }
}
