#include "../include/liberman.h"

void Menu:: modificarDatosP(int auxcodigo)
  {
	string auxnombres, auxapellidos,auxdni, auxcorreoInsti,auxcelular,auxdireccion,auxestdCiv;

  cout <<endl << "Datos actuales del usuario: " << endl;
  ptr_profes[auxcodigo-1].datos();
  
  cout << endl <<"\t---------------------------------------\t";
  cout <<endl<< "Ingrese los nuevos datos";
  cin.ignore(1000000, '\n');
  cout << endl << "Nombres: "; 
  getline(cin, auxnombres); 
  cout << endl << "Apellidos: ";
  getline(cin, auxapellidos);
  cout << endl << "DNI: ";
  getline(cin,auxdni);
  cout << endl << "Correo institucional: ";
  getline(cin,auxcorreoInsti)  ;
  cout << endl << "Celular: ";
  getline(cin, auxcelular);
  cout << endl << "Dirección: ";
  getline(cin,auxdireccion);
  cout << endl << "Estado civil: ";
  getline(cin,auxestdCiv);
  
  
  ptr_profes[auxcodigo-1].setDatosPer(auxnombres, auxapellidos,auxdni,auxcelular,auxdireccion,auxestdCiv);

  cout <<endl << "Registro modificado con éxito" << endl; 
}