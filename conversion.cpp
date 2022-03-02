#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

    void menus1();
    void menus2();
    int selection;
    double a1,a2;


int main()
{
   do{
   
	
    menus1();
    
    menus2();
}while(selection !=4);
    return 0;
    
}

void menus1()
{
	
	cout << "si------------PROGRAMA DE CONVERSIONES--------" <<endl;
	
	cout << "indica que opcion va a seleccionar: " << endl;
	
	cout << "(1)conversion de kilometros a millas---" << endl;
	
	cout << "(2)conversion de euros a dolares-------" << endl;
	
	cout << "(3)conversion de litros a galones------" << endl;
	
	cout << "(4)salir-------------------------------" << endl;
	
	cout << "su opcion a elegir es: " << endl;
	
	cin >> selection;
	
	cout << endl << endl;

}





void menus2()
{

	switch (selection){
		case 1:
			cout << "ingrese la cantidad de kilometroa a convertir: ";
			
			cin >> a1 ;
			
			cout << "la conversion de " << a1 << " kilometros a millas es: " << a1 / 1.609 << endl << endl << endl;
			
		break;
		
		case 2:
			cout << "ingrese la cantidad de euros a convertir: ";
			
			cin >> a1 ;
			
			cout << "la conversion de " << a1 << " euros a dolares es: " << a1 * 1.20 << endl << endl << endl;
			
		break;
		
		case 3:
			cout << "ingrese la cantidad de litros a convertir: ";
			
			cin >> a1 ;
			
			cout << "la conversion de " << a1 << " litros a galones es: " << a1 / 3.785 << endl << endl << endl;
			
		break;
		
		case 4:
		   cout << "--------------QUE TENGA UN BUEN DIA--------------"<< endl;
		break;
		
		default:
		   cout << "opcion equivocada" << endl << endl;
		break;
   }
}
