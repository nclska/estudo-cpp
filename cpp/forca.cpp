#include <iostream>
#include <string>
using namespace std;

string PALAVRA_SECRETA = "MELANCIA";

bool chute_certo(char chute){
    for(int i = 0; i < PALAVRA_SECRETA.size(); i++){
        if (chute == PALAVRA_SECRETA[i]){
            return true;
        }
    }
    return false;
}

int main () {
    cout << PALAVRA_SECRETA << endl;

    bool nao_acertou = true;
    bool nao_enforcou = true;

    while (nao_acertou && nao_enforcou){
        char chute;
        cin >> chute;

        if(chute_certo(chute)){
            cout << "a sua letra está na palavra" << endl;
        }
        else{
            cout << "a sua letra não está na palavra" << endl;
        }
    }
}   