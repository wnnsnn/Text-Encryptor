#include <iostream>
using namespace std;

void encryptor (char *text, int size){
    int b = 4;
    for (int i =0;i < size; i++){
        b = i+i;
        text[i] = text[i] + b;
        }
    
    }
    
void decryptor (char *text, int size){
    
    for (int i =0;i < size; i++){
        int b = i+i;
        text[i] = text[i]- b;
        }
    }