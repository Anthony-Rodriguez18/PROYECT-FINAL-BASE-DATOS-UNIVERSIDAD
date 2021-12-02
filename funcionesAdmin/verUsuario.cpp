#include "../include/liberman.h"

void Menu :: verAdmin()
{
  for (int i = 0; i < contD; i++) 
  {
		if (ptr_admins[i].getNombres() != " ") 
    {
      ptr_admins[i].datos();
    }
		std::cout << std::endl;
	}
}

void Menu :: verAlumno()
{
  for (int i = 0; i < contA; i++) 
  {
	  if (ptr_alumns[i].getNombres() != " ") 
    {
      ptr_alumns[i].datos();
    }
	  std::cout << std::endl;
	}
}

void Menu :: verProf()
{
  for (int i = 0; i < contP; i++) 
  {
	  if (ptr_profes[i].getNombres() != " ") 
    {
      ptr_profes[i].datos();
    }
	  std::cout << std::endl;
	}
}

void Menu :: verUsuario()
{
  cout << endl <<"\t\t\t\t\t*****Mostrar Datos un Usuario*****\t\t\t\t\t";
  char opc;
  cout <<endl<<  "Administrador(D), Profesor(P), Alumno(A): " ;
  cin >> opc;
  switch (opc)
  {
    case 'D': 
    {
      verAdmin();
      break;
    }
    case 'P': 
    {
      verProf();
      break;
    }
    case 'A': 
    {
      verAlumno();
      break; 
    }
  }
}