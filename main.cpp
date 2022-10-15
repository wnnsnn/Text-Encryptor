#include <iostream>
#include "hide.h"
#include <string>
using namespace std;


int main() {
     cout << "  This will Encrypt // Decrypt your message" << endl << endl;
     
     cout << " If you have a text that you want to encrypt it could be a password, a  " ;
     cout << "\n spacial message for someone, or any text that of, you can think you this";
    cout << "\n program would be suited for you \n\n" << endl << endl; 
    int n= 0;
    do{
       cout << "Enter 1: Decryptor" << endl;
       cout << "Enter 2: Encryptor" << endl;
       cin >> n;
       
     
       if(n == 1 || n == 2){
           switch(n){
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



