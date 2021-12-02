#include "../include/liberman.h"

Profesor :: Profesor():Usuario()
{
  cursosEnsena = " ";
  sueldo = " ";
  perfilProf = " ";
  suplente = " ";
}

Profesor :: Profesor(int codigo,string contrasena,string nombres,string apellidos,string dni,string correoInsti,string celular,string direccion,string estdCiv, string cursosEnsena, string sueldo, string perfilProf, string suplente): Usuario(codigo, nombres, apellidos, dni, correoInsti, celular, direccion, estdCiv)
{
  this->contrasena = contrasena;
  this->cursosEnsena = cursosEnsena;
  this->sueldo = sueldo;
  this->perfilProf = perfilProf;
  this->suplente = suplente;
}

Profesor :: ~Profesor(){
}

void Profesor :: setProfesor(string nombres,string apellidos,string dni,string correoInsti,string celular,string direccion,string estdCiv, string cursosEnsena, string sueldo, string perfilProf, string suplente )
{
  this->nombres = nombres; 
  this->apellidos = apellidos;
  this->dni = dni;
  this->correoInsti = correoInsti ;
  this->celular = celular;
  this->direccion = direccion;
  this->estdCiv = estdCiv;
  this->cursosEnsena = cursosEnsena;
  this->sueldo = sueldo;
  this->perfilProf = perfilProf;
  this->suplente = suplente;
}

void Profesor :: setDatosPer( string nombres,string apellidos,string dni,string celular,string direccion,string estdCiv)
{

  this->nombres =nombres; 
  this->apellidos = apellidos;
  this->dni =dni;
  this->celular = celular;
  this->direccion = direccion;
  this->estdCiv = estdCiv;
}

void Profesor:: setCodigo(int nuevoCodigo)
{
  this->codigo = nuevoCodigo;
}

void Profesor :: datos()
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
  cout << "Número de cursos que enseña: " << cursosEnsena << endl; 
  cout << "Sueldo: " << sueldo<< endl; 
  cout << "Perfil profesional: " << perfilProf<<endl;
  cout << "Suplente: " << suplente<<endl;

}