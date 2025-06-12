#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

string PALAVRA_SECRETA = "MELANCIA";
map<char, bool> chutou;
vector<char> chutes_errados;

bool chute_certo(char chute){
    for(char letra : PALAVRA_SECRETA){
        if(chute == letra){
            return true;
        }
    }
    return false;
}

int main () {

    cout << "****************************************" << endl;
    cout << "************ Jogo da Forca *************" << endl;
    cout << "****************************************" << endl;

    cout << endl;

    bool nao_acertou = true;
    bool nao_enforcou = true;

    while (nao_acertou && nao_enforcou){
        
        for(char letra : PALAVRA_SECRETA){
            if(chutou[letra]){
                cout << letra << " ";
            }
            else{
                cout << "_ ";
            }
        }

        cout << endl;

        cout << "Chutes errados: ";
        for(char letra_errada : chutes_errados){
            cout << letra_errada << " ";
        }
        cout << endl;

        cout << "Seu chute: ";
        char chute;
        cin >> chute;

        chutou[chute] = true;

        cout << endl;

        if(chute_certo(chute)){
            cout << "a sua letra está na palavra" << endl;
        }
        else{
            cout << "a sua letra não está na palavra" << endl;
            chutes_errados.push_back(chute);
        }
        cout << endl;
        cout << endl;
    }
}   