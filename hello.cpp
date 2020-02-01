#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int laco(){
    const double inch = 2.54;
    auto length = 1;
    while(length != 0){
        cout << "Entre com o tamanho em inch: ";
        cin >> length;
        cout << inch * length; 
    }    
}

int condicionais(){
    const double cm = 2.25;
    int val;
    char unit;
    while(cin >> val >> unit){
        if(unit == 'i'){
            cout << val << val*cm << '\n';
        }else if(unit == 'c'){
            cout << val << val/cm << '\n';
        }else{
            return 0;
        } 
    }
}

void loopFor(){
    for(int i=0; i<10; i++){
        cout << i + '\t' << sqrt(i) << '\n';
    }
}

void vetores(){
    vector<double> temps;
    vector<int> v = {1,2,3,4,4,5};
    vector<string> palavras;
    double temp;
    while (cin >> temp)
    {
        temps.push_back(temp);
    }
    for(int i=0; i<temps.size(); i++){
        cout << temps[i];
    }
    for(int i : temps){
        cout << i;
    }
    sort(palavras);
}

int main(){
    cout << "Por favor entre com seu primeiro e segundo nome:\n";
    string nome;
    string sobrenome;
    double idade;
    
    cin >> nome >> sobrenome;
    nome += "2";
    cout << "Entre com a idade: ";
    cin >> idade;
    idade = sqrt(idade);
    cout << "Olá " + nome + ' ' + sobrenome + '\n';
    cout << "Sua idade é " << idade << '\n';
    laco();
    vetores();
    return 0;
}



