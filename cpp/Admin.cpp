#include "../include/liberman.h"

Admin :: Admin()
{
  contrasena = "ADMIN123";
}

Admin :: Admin(int _codigo,string _nombres,string _apellidos,string _dni,string _correoInsti,string _celular,string _direccion,string _estdCiv)
{
  contrasena = "ADMIN123";
  this->codigo = _codigo;
  this->nombres = _nombres; 
  this->apellidos = _apellidos;
  this->dni = _dni;
  this->correoInsti = _correoInsti ;
  this->celular = _celular;
  this->direccion = _direccion;
  this->estdCiv = _estdCiv;
}

Admin :: ~Admin()
{ }

void Admin :: datos()
{ 
  cout << "Código: " << codigo<<endl;
  cout << "Contraseña: " << contrasena <<endl;
  cout << "Nombres: " << nombres <<endl;
  cout << "Apellidos: " << apellidos <<endl;
  cout << "DNI: " << dni <<endl;
  cout << "Correo Institucional: " << correoInsti<<endl;
  cout << "Celular: " << celular <<endl;
  cout << "Dirección: " << direccion <<endl;
  cout << "Estado Civil: " << estdCiv<<endl;
}

void Admin :: setAdmin(string nombres,string apellidos,string dni,string correoInsti,string celular,string direccion,string estdCiv)
{
  this->nombres = nombres; 
  this->apellidos = apellidos;
  this->dni = dni;
  this->correoInsti = correoInsti ;
  this->celular = celular;
  this->direccion = direccion;
  this->estdCiv = estdCiv;
}

void Admin :: setCodigo(int nuevoCodigo)
{
  this->codigo = nuevoCodigo;
}