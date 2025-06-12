#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main () {
    cout << "*****" << endl;
    cout << "bem-vindo ao jogo" << endl;
    cout << "*****" << endl;

    srand(time(NULL));
    const int numero_secreto = rand() % 100;
    bool nao_acertou = true;
    int tentativas = 0;
    bool acerto;

    double pontos = 1000;

    cout << "Escolha a dificuldade: Fácil (F), Médio (M) ou Difícil (D)." << endl;
    char dificuldade;
    cin >> dificuldade;

    int numero_de_tentativas_por_dificuldade;
    if (dificuldade == 'F'){
        numero_de_tentativas_por_dificuldade = 15;
    }
    else if (dificuldade == 'M'){
        numero_de_tentativas_por_dificuldade = 10;
    }
    else {
        numero_de_tentativas_por_dificuldade = 5;
    }

    for(tentativas = 1; tentativas <= numero_de_tentativas_por_dificuldade; tentativas++){
        int chute;
        cout << "qual seu chute? ";
        cin >> chute;

        double pontos_perdidos = abs(chute - numero_secreto)/2.0;
        pontos -= pontos_perdidos;

        cout << "Tentativa " << tentativas << endl;
        cout << "O valor do seu chute é " << chute << endl;

        acerto = chute == numero_secreto;
        bool maior = chute > numero_secreto;

        if(acerto){
            cout << "parabéns! você acertou o número secreto." << endl;
            nao_acertou = false;
            break;
        }
        else if(maior){
            cout << "Seu chute é maior que o número secreto" << endl;
        }
        else{
            cout << "Seu chute é menor que o número secreto" << endl;
        }
    }
    if (acerto){
        cout << "Fim de jogo" << endl;
        cout << "Você acertou em " << tentativas << " tentativas!" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação foi de " << pontos << " pontos." << endl;
    }
    else {
        cout << "Fim de jogo" << endl;
        cout << "Você perdeu. Tente de novo." << endl;
        cout << "O valor do número secreto era " << numero_secreto << endl;
    }
}