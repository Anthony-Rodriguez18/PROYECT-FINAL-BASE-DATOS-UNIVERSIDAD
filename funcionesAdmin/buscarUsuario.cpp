#include "../include/liberman.h"

void Menu :: buscarAdmin()
{
  int aux;
  cout << "Ingrese el código del usuario que desea buscar: " ;
  cin >> aux;

  ptr_admins[(aux)].datos();
}

void Menu :: buscarAlumno()
{
  int aux;
  cout << "Ingrese el código del usuario que desea buscar: " ;
  cin >> aux;

  ptr_alumns[(aux-1)].datos();
}

void Menu :: buscarProf()
{
  int aux;
  cout << "Ingrese el código del usuario que desea buscar: " ;
  cin >> aux;

  ptr_profes[(aux-1)].datos();
}

void Menu :: buscarUsuario()
{
  cout << endl <<"\t\t\t\t\t*****BUSCAR UN USUARIO*****\t\t\t\t\t";
  char opc;
  cout <<endl<<  "Administrador(D), Profesor(P), Alumno(A): " ;
  cin >> opc;
  switch (opc)
  {
    case 'D': 
    {
      buscarAdmin();
      break;
    }
    case 'P': 
    {
      buscarProf();
      break;
    }
    case 'A': 
    {
      buscarAlumno();
      break; 
    }
  }
}