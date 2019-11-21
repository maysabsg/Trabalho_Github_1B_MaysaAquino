#include <iostream>
#include<string>
using namespace std;

int contaLetras( string texto)
{
    int qtd;
    qtd=texto.length();
    return qtd;
}

string substituirLetra(char letra1,char letra2, string texto)
{
    int i;
    int count=contaLetras(texto);
    for(i=0;i<count; i++)
    {
        if(texto[i]==letra1)
            texto[i]=letra2;
        else
            if(texto[i]==letra2)
            texto[i]=letra1;
    }
    return texto;
}


void contaPalavras()
{
    int comecouPalavra = 0, numPalavras = 0, numLinhas = 0, numCaracteres = 0;
    FILE *descritor;
    char arquivo[50];

    char *caracter;    
    printf("Digite o arquivo que deseja abrir: ");
    gets(arquivo);
    descritor = fopen(arquivo, "r");
    while (!feof(descritor)) {
          fread(caracter, 1, 1, descritor);
          numCaracteres++;
          if  ((*caracter!=' ') && (*caracter!='\n') && (!comecouPalavra)) {
             comecouPalavra = 1;
          }
          if  (((*caracter==' ') || (*caracter == '\n')) && (comecouPalavra)) {
             comecouPalavra = 0;
             numPalavras++;
          }
          if (*caracter=='\n') {
             numLinhas++;
             }
        return numPalavras;

}


string substituirPalavras(string palavra1, string palavra2, string texto)
{
    int i;
    int count=contaLetras(texto);
    for(i=0;i<count; i++)
    {
        if(texto[i]==palavra1)
            texto[i]=palavra2;
        else
            if(texto[i]==palavra2)
            texto[i]=palavra1;
    }
    return texto; 
}

int main(){
    int ai, ou, np, oh;
    string txt, palavra, text, p1, p2, tx, t;
    char letter1, letter2;
	cout << "\nDigite texto: ";
    getline(cin,txt);

	ai=contaLetras(txt);

	cout<<"\n"<<ai<<" letras nesse texto.";

	cout<<"\nDigite texto: ";
	getline(cin, text);
    cout<<"\nDigite uma letra: ";
    cin>>letter1;
    cout<<"\nDigite a outra letra: ";
    cin>>letter2;
    text=substituirLetra(letter1, letter2, text);

    cout<<"\nTexto com as letras substituidas: "<<text;
    contaPalavras();
    
    cout<<"\nDigite texto: ";
	getline(cin, t);
    cout<<"\nDigite uma palavra: ";
    cin>>p1;
    cout<<"\nDigite a outra palavra: ";
    cin>>p2;
    t=substituirPalvra(p1, p2, t);
    
	return 0;
}
