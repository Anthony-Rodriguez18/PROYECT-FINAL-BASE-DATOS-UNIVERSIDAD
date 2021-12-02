#include "../include/liberman.h"

void Menu :: mostrarDatosD()
{
  int auxcodigo;
  cout << "Ingrese el código del usuario que desea ver: " ;
  cin>>auxcodigo;
  cout << "Nombres: " << ptr_admins[auxcodigo].getNombres() <<endl;
  cout << "Apellidos: " << ptr_admins[auxcodigo].getApellidos() <<endl;
  cout << "DNI: " << ptr_admins[auxcodigo].getDNI()<<endl;
  cout << "Correo Institucional: " << ptr_admins[auxcodigo-1].getCorreoInsti()<<endl;
  cout << "Celular: " << ptr_admins[auxcodigo].getCelular() <<endl;
  cout << "Dirección: " << ptr_admins[auxcodigo].getDireccion() <<endl;
  cout << "Estado Civil: " << ptr_admins[auxcodigo].getEstadoCiv()<<endl;
}

void Menu :: mostrarDatosA()
{
  int auxcodigo;
  cout << "Ingrese el código del usuario que desea ver: " ;
  cin>>auxcodigo;
  cout << "Nombres: " << ptr_alumns[auxcodigo-1].getNombres() <<endl;
  cout << "Apellidos: " << ptr_alumns[auxcodigo-1].getApellidos() <<endl;
  cout << "DNI: " << ptr_alumns[auxcodigo-1].getDNI()<<endl;
  cout << "Correo Institucional: " << ptr_profes[auxcodigo-1].getCorreoInsti()<<endl;
  cout << "Celular: " << ptr_alumns[auxcodigo-1].getCelular() <<endl;
  cout << "Dirección: " << ptr_alumns[auxcodigo-1].getDireccion() <<endl;
  cout << "Estado Civil: " << ptr_alumns[auxcodigo-1].getEstadoCiv()<<endl;
}

void Menu :: mostrarDatosP()
{
  int auxcodigo;
  cout << "Ingrese el código del usuario que desea ver: " ;
  cin>>auxcodigo;
  cout << "Nombres: " << ptr_profes[auxcodigo-1].getNombres() <<endl;
  cout << "Apellidos: " << ptr_profes[auxcodigo-1].getApellidos() <<endl;
  cout << "DNI: " << ptr_profes[auxcodigo-1].getDNI()<<endl;
  cout << "Correo Institucional: " << ptr_profes[auxcodigo-1].getCorreoInsti()<<endl;
  cout << "Celular: " << ptr_profes[auxcodigo-1].getCelular() <<endl;
  cout << "Dirección: " << ptr_profes[auxcodigo-1].getDireccion() <<endl;
  cout << "Estado Civil: " << ptr_profes[auxcodigo-1].getEstadoCiv()<<endl;
}

void Menu:: mostrarDatosUsu()
{
  cout << endl <<"\t\t\t\t\t*****VER DATOS DE UN USUARIO*****\t\t\t\t\t";
  char opc;
  cout <<endl<<  "Administrador(D), Profesor(P), Alumno(A): " ;
  cin >> opc;
  switch (opc)
  {
    case 'D': 
    {
      mostrarDatosD();
      break;
    }
    case 'P': 
    {
      mostrarDatosP();
      break;
    }
    case 'A': 
    {
      mostrarDatosA();
      break; 
    }
  }
}
