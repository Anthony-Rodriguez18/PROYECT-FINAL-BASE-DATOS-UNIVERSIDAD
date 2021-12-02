#include "../include/liberman.h"

Usuario :: Usuario()
{
  this->contrasena = " ";
  this->codigo = 0;
  this->nombres = " "; 
  this->apellidos = " ";
  this->dni =" " ;
  this->correoInsti = " ";
  this->celular =" ";
  this->direccion = " ";
  this->estdCiv = " ";
}

Usuario :: Usuario(int codigo,string nombres,string apellidos,string dni,string correoInsti,string celular,string direccion,string estdCiv)
{
  this-> codigo = codigo;
  this->nombres = nombres; 
  this->apellidos = apellidos;
  this->dni = dni;
  this->correoInsti = correoInsti;
  this->celular = celular;
  this->direccion = direccion;
  this->estdCiv = estdCiv;
}

Usuario :: ~Usuario()
{
  
}

void Usuario::datos()
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


