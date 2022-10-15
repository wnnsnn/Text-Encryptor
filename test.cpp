// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
#include <string>
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


int main() {
     cout << "  This will Encrypt // Decrypt your message" << endl << endl;
     
     cout << " If you have a text that you want to encrypt it could be a password, a \n spacial message for someone, or any text that of, you can think you this \n program would be suited for you \n\n" << endl << endl;
     
    int n= 0;
    do{
       cout << "Enter 1: Decryptor" << endl;
       cout << "Enter 2: Encryptor" << endl;
       cin >> n;
       
     
       if(n == 1 || n == 2){
           switch(n){
               
            //   
            // //   
            // //   
            // //   FUCK LIFE
            // //   
            // //   
            // //   
            // //   
            // //   
            // 
               case 1:
                    char encrypt [20]; // should also change this one
                    cout << "Text to encrypt: ";
                    cin >> encrypt;
                    // THIS IS THE ERROR i could not scan the text to its exact lenght
                    // getline(cin,text);
                    
                    // Encryptor
                    // int sizeE =  strlen(encrypt); // I dont know why this does not work
                    encryptor(encrypt,20);
        
                    cout <<"This is after the change: " <<encrypt;
                    break;  
                case 2:
                    char decrypt [20]; // should also change this one
                    cout << "Text to decrypt: ";
                    cin >> decrypt;
                    // getline(cin,text);
                    
                    // Encryptor
                    // int sizeD = strlen(decrypt); // I dont know why this does not work
                    decryptor(decrypt,20);
        
                    cout <<"This is after the change: " << decrypt;
                    break;  
           }
       }
       
    }while(n <=0 || n >2);
    return 0;
}



