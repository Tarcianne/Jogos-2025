#include <iostream>
#include <string>

using namespace std;

void introducao() {
    cout << "--------------------------------------------------------\n";
    cout << "        Bem-vindo ao Jogo de Mistério e Suspense!       \n";
    cout << "--------------------------------------------------------\n";
    cout << "Você acorda em uma casa escura e misteriosa.\n";
    cout << "Sua memória está confusa e você não lembra como chegou aqui.\n";
    cout << "O que você faz agora?\n";
}

void cena1() {
    int escolha;
    cout << "\nVocê está em uma sala escura. Ouve-se o som de passos vindo do corredor.\n";
    cout << "1. Ir até o corredor para investigar o som.\n";
    cout << "2. Ficar parado e esperar para ver o que acontece.\n";
    cout << "Escolha 1 ou 2: ";
    cin >> escolha;

    if (escolha == 1) {
        cout << "\nVocê se aproxima do corredor, e de repente as luzes se acendem.\n";
        cout << "Você vê uma figura sombria na porta da frente, ela sorri para você... e desaparece!\n";
        cout << "Você corre para a porta e tenta abri-la, mas ela está trancada.\n";
        cena2(); // Chama a próxima cena
    } else {
        cout << "\nVocê decide esperar. O som de passos se aproxima, mas depois de um tempo, tudo fica silencioso.\n";
        cout << "Você sente que está sendo observado.\n";
        cena3(); // Chama a próxima cena
    }
}

void cena2() {
    int escolha;
    cout << "\nVocê está na frente da porta trancada. O que você faz agora?\n";
    cout << "1. Procurar por uma chave na sala.\n";
    cout << "2. Tentar forçar a porta.\n";
    cout << "Escolha 1 ou 2: ";
    cin >> escolha;

    if (escolha == 1) {
        cout << "\nVocê encontra uma chave escondida em uma gaveta próxima!\n";
        cout << "Você abre a porta, mas encontra um corredor vazio.\n";
        cout << "De repente, o som dos passos volta, mais forte agora.\n";
        fim(); // Chama a função de fim
    } else {
        cout << "\nVocê tenta forçar a porta, mas ela está muito resistente.\n";
        cout << "O som de passos fica mais intenso, e a figura sombria reaparece!\n";
        fim(); // Chama a função de fim
    }
}

void cena3() {
    int escolha;
    cout << "\nO silêncio é assustador. O que você faz?\n";
    cout << "1. Ir até a janela e tentar olhar lá fora.\n";
    cout << "2. Explorar mais a casa em busca de pistas.\n";
    cout << "Escolha 1 ou 2: ";
    cin >> escolha;

    if (escolha == 1) {
        cout << "\nVocê se aproxima da janela e olha para fora.\n";
        cout << "Você vê uma figura estranha olhando de volta para você. Ela sorri e você sente um calafrio na espinha.\n";
        fim(); // Chama a função de fim
    } else {
        cout << "\nVocê encontra uma porta escondida e decide abri-la.\n";
        cout << "Ela leva você a uma sala ainda mais escura, e a porta se tranca atrás de você...\n";
        fim(); // Chama a função de fim
    }
}

void fim() {
    cout << "\nO jogo terminou. O que acontece com o personagem é um mistério.\n";
    cout << "Obrigado por jogar!\n";
}

int main() {
    introducao();
    cena1(); // Começa a primeira cena do jogo
    return 0;
}
