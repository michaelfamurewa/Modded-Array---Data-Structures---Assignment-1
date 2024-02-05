#include "moddedArray.h"

using namespace std;

int main() {

    moddedArray arr;
    arr.load();
    twoPiece valHolder;

    cout << "\nOUTPUT BELOW:\nCheck array for the number 76, index returned is: " << arr.check(76) << ". \n" << endl;
    valHolder = arr.modify(35,234);
    cout << "Modify index 36 and replace with 234 this is what is returned. Old Value: " << valHolder.x <<" | New Value: " << valHolder.y << ". \n" << endl;
    cout << "Array after modification: ";
    for(int i = 0; i < arr.getSize(); i++){
        cout << arr.at(i) << " ";
    }
    cout << ". \n" << endl;
    arr.append(565);
    cout << "Array after adding the number 565 to the end: ";
    for(int i = 0; i < arr.getSize(); i++){
        cout << arr.at(i) << " ";
    }
    cout << ". \n" << endl;
    arr.popMod(10,'p');
    arr.popMod(50,'m');
    cout << "Array after removing index 10 and replacing index 50 with 0: ";
    for(int i = 0; i < arr.getSize(); i++){
        cout << arr.at(i) << " ";
    }

    return 0;
}
