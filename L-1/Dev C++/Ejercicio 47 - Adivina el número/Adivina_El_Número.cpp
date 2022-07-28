#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(int argc, char** argv) 
{
	int numeroSecreto = 0;
	int miNumero = 0;
	
	//inicializa el número random
	srand(time(NULL));
	

		//genera un numero entre 1 y 10
     	numeroSecreto = rand() % 10 + 1;
     	
     	do
     	{
     		cout<<"Adivina el numero (1 a 10): ";
     		cin>>miNumero;
     		
     		if (numeroSecreto < miNumero)
     		{
     			cout<<"El numero secreto puede ser menor "<< endl;
		    }
			else
			{
				if (numeroSecreto > miNumero)
				{
					cout<<"El numero secreto puede ser mayor "<< endl;	
				}
			}
     		
		 }while(numeroSecreto != miNumero);

	return 0;
}
