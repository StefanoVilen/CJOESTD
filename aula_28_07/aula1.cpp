#include <iostream>

using namespace std;


int notas[10];
int index = 0;

void cadastrarNotas(){
    int nota = 0;
    if (index == 10){
        cout << "Limite Maximo Atingido \n";
        return;
    }
    cout << "Digite a nota do aluno: \n";

    
    
    cin >> nota;

    if (nota < 0 || nota > 10)
    {
        cout << "Nota invalida \n";
        return;
    }

    notas [index] = nota;
    index++;
}

void exibirNotas(){
    if (index == 0)
    {
        cout << "Nenhuma nota cadastrada \n";
        return;
    }
    

    for (int i = 0; i < index; i++){
        cout << notas[i] << "\n";
    }
}

void calcularMedia(){
    int somatorio = 0;
    
    if (index == 0)
    {
        cout << "Nenhuma nota cadastrada \n";
        return;
    }
    for (int i = 0; i < index; i++){
        somatorio += notas[i];
    }
    float resultado = somatorio / index;
    cout << "Quantidade de Notas: " << index << "\n";
    cout << "A media da Turma e: " << resultado << "\n";
}

void notaMaiorMenor(){
    int maior = notas[0];
    int menor = notas[0];
    if (index == 0)
    {
        cout << "Nenhuma nota cadastrada \n";
        return;
    }

    for(int i = 0; i < index; i++)
    {
        if(menor > notas[i]){
            menor = notas[i];
        }
        if(maior < notas[i]){
            maior = notas[i];
        }
    }
    
    cout << "A menor nota e: " << menor << "\n";
    cout << "A maior nota e: " << maior << "\n";
}




int main(){
    int op;

    do{
        cout << "\n";
        cout << "==== Menu ==== \n";
        cout << "1. Cadastrar Notas \n";
        cout << "2. Exibir Notas \n";
        cout << "3. Calcular media \n";
        cout << "4. Exibir Notas \n";
        cout << "0. Sair \n";
        cout << "Escolha uma opcao: ";
        cin >> op;

        switch (op)
        {
        case 1:
            cadastrarNotas();
            break;

        case 2:
            exibirNotas();
            break;
        
        case 3:
            calcularMedia();
            break;

        case 4:
            notaMaiorMenor();
            ;
            break;
        
        default:
            break;
        }

    }while(op != 0);
    
    return 0;
}