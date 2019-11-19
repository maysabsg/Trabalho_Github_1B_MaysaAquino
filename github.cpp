#include <iostream>
#include<string>
using namespace std;

/*
	Conta todas as letras 'letra' contidas em 'texto'
*/
int contaLetras( string texto)
{
    int qtd;
    qtd=texto.length();
    return qtd;
}

/*
	Substitui todas as ocorrencias de 'letra1' por 'letra2' contidas em 'texto'
*/
void substituirLetra(char letra1,char letra2, string texto)
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
}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{
    int i, n;
for(i=0;i<'.';i++)
    if(texto[i]==palavra[i])
    n++;
return n;


}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
void substituirPalavras(string palavra1, string palavra2, string texto)
{
}

int main(){
    int ai, ou, np;
    string txt, palavra;
    char letter1, letter2;
	cout << "\nDigite texto. Termine seu texto com ponto final e digite 'terminar' para terminar: ";
	getline(cin,txt);
	while(txt!='r')
	{
	ai=contaLetras(txt);

	cout<<"\n"<<ai<<" letras nesse texto.";

    cout<<"\nDigite uma letra: ";
    cin>>letter1;
    cout<<"\nDigite a outra letra: ";
    cin>>letter2;
    substituirLetra(letter1, letter2, txt);

    cout<<"\nTexto com as letras substituidas: "<<txt;

    cout<<"\nDigite uma palavra: ";
    getline(cin,palavra);

    np=contaPalavras(palavra, txt);

    cout<<"\nA palavra "<<palavra<<" apareceu"<<np<<" vezes nesse texto";

    cout << "\nDigite texto. Termine seu texto com ponto final e digite 'terminar' para terminar: ";
	getline(cin,txt);
	}

	return 0;
}
