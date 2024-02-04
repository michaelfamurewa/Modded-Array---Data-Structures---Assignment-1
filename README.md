# Modded-Array---Data-Structures---Assignment-1

My approach to this assignment was to create a class.
When creating a variable of this array you must use the type "moddedArray" followed by its variable name.

FUNCTIONS:

1. getsize(): This function simply returns the current size of the array, takes no parameters.

2. load(): Loads the array with the provided input file, no parameters.

3. check(int): Takes an integer as a parameter. Checks the array to see if the integer is present in the array and returns its index if found, or -1 if not found.

4. popMod(int,string): Takes an integer as a parameter for the desired index and a string for the choice of either p to "pop" or delete that index
or m to "mod" that index by changing its value to 0.

5. Modify(int,int): Takes two integer paramenters, the index first then the desired value to modify that index to.
Can also return the old and new value to the user as a pair which is a struct called "twoPiece" consisting of two integer variables a and b.
One must decalre a variable of this type and set it equal to the modify function in order to store both values this way.

6. at(int): Takes one integer parameter, which represents the desired index, the function returns the value at the given index.

7. append(int): Takes a desired integer as a parameter and then appends that value to the array.

