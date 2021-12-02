#include "../include/liberman.h"

void Menu :: eliminarAdmin()
{
  int aux; 
  cout << endl << "Ingrese el código del usuario que desea eliminar: ";
  cin >> aux;

  for (int i = (aux-1); i < contD; i++)
  {
    ptr_admins[i] = ptr_admins[(i+1)];
    ptr_admins[i].setCodigo(i+1);
  }
  contD --;
  cout <<endl << "Usuario Eliminado con éxito" << endl; 
}

void Menu :: eliminarAlumno()
{
  int aux; 
  cout << endl << "Ingrese el código del usuario que desea eliminar: ";
  cin >> aux;

  for (int i = (aux-1); i < contA; i++)
  {
    ptr_alumns[i] = ptr_alumns[(i+1)];
    ptr_alumns[i].setCodigo(i+1);
  }
  contA --;
  cout <<endl << "Usuario Eliminado con éxito" << endl; 
}

void Menu :: eliminarProf()
{
  int aux; 
  cout << endl << "Ingrese el código del usuario que desea eliminar: ";
  cin >> aux;

  for (int i = (aux-1); i < contP; i++)
  {
    ptr_profes[i] = ptr_profes[(i+1)];
    ptr_profes[i].setCodigo(i+1);
  }
  contP --;
  cout <<endl << "Usuario Eliminado con éxito" << endl; 
}

void Menu :: eliminarUsuario()
{
  cout << endl <<"\t\t\t\t\t*****Eliminar un Usuario*****\t\t\t\t\t";
  char opc;
  cout <<endl<<  "Administrador(D), Profesor(P), Alumno(A): " ;
  cin >> opc;
  switch (opc)
  {
    case 'D': 
    {
      eliminarAdmin();
      break;
    }
    case 'P': 
    {
      eliminarProf();
      break;
    }
    case 'A': 
    {
      eliminarAlumno();
      break; 
    }
  }
}