#include <iostream>
using namespace std;

 void inverteString(char *str)
{   
    int tamanho = 0;
     char aux, aux2;

    while (str[tamanho] != '\0')
    {
        tamanho++;
    }

    for(int i = 0; i < tamanho / 2; i++)
    {
       aux = str[i];
       aux2 = str[tamanho - 1 - i];
       str[tamanho - 1 - i] = aux;
       str[i] = aux2;

        
    }
}
    

int main(void){

    char str[100];

    cout << "Digite a string que vai ser invertida: " << endl;
    cin.getline(str, 100);

    inverteString(str);

    cout << "String invertida: " << str << endl;
   
    return 0;
}