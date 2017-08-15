#include <iostream>
template <class atype>
int find (atype* array, atype value, int size){
    for (int j = 0; j < size; j++){
        if (array[j] == value)
            return j;
    }
    return -1;
}


char chrArra[] = {1, 3, 5, 9, 11, 13};   // array
char ch = 5;                            // value to find
int intArr[] = {1, 3, 5, 9, 11, 13};    // array
int in = 6;                             // value to find
long lonArr[] = {1L, 3L, 5L, 9L, 11L, 13L}; // array
long lo = 11L;
double dubArr[] = { 1.0, 3.0, 5.0, 9.0, 11.0,  13.0 };
double db = 4.0;


int main() {

    std::cout <<  "5 in chrArray: index=" << find(chrArra, ch, 6) << '\n';
    std::cout <<  "6 in chrArray: index=" << find(intArr, in, 6) << '\n';
    std::cout <<  "11L in chrArray: index=" << find(lonArr, lo, 6) << '\n';
    std::cout <<  "4.0 in chrArray: index=" << find(dubArr, db, 6) << '\n';

    return 0;
}