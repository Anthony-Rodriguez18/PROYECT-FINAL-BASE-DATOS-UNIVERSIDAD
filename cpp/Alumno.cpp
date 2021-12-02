#include "../include/liberman.h"

Alumno :: Alumno():Usuario()
{
  carrera = " ";
  cursos = " ";
  periodoIngreso = " ";
  semestre = " ";
  creditosSemestre = " ";
  creditosAcumulados = " ";
  mensualidad = " ";
} 

Alumno :: Alumno(int codigo, string contrasena,string nombres,string apellidos,string dni,string correoInsti,string celular,string direccion,string estdCiv,string carrera , string cursos, string periodoIngreso, string semestre,string creditosSemestre,string creditosAcumulados,string mensualidad ) : Usuario(codigo, nombres, apellidos, dni, correoInsti, celular, direccion, estdCiv)
{
  this->contrasena = contrasena;
  this->carrera = carrera;
  this->cursos = cursos;
  this->periodoIngreso = periodoIngreso;
  this->semestre = semestre;
  this->creditosSemestre = creditosSemestre;
  this->creditosAcumulados = creditosAcumulados;
  this->mensualidad = mensualidad;
}

Alumno :: ~Alumno(){
}

void Alumno :: setAlumno(string contrasena, string nombres,string apellidos,string dni,string correoInsti,string celular,string direccion,string estdCiv,string carrera, string cursos, string periodoIngreso, string semestre,string creditosSemestre, string creditosAcumulados,string mensualidad)
{
  this->nombres = nombres; 
  this->apellidos = apellidos;
  this->dni = dni;
  this->correoInsti = correoInsti ;
  this->celular = celular;
  this->direccion = direccion;
  this->estdCiv = estdCiv;
  this->carrera = carrera;
  this->cursos = cursos;
  this->periodoIngreso = periodoIngreso;
  this->semestre = semestre;
  this->creditosSemestre = creditosSemestre;
  this->creditosAcumulados = creditosAcumulados;

  this->mensualidad = mensualidad;
}

void Alumno:: setCodigo(int nuevoCodigo)
{
  this->codigo = nuevoCodigo;
}

void Alumno :: setDatosPer( string nombres,string apellidos,string dni,string celular,string direccion,string estdCiv)
{
  this->nombres =nombres; 
  this->apellidos = apellidos;
  this->dni =dni;
  this->celular = celular;
  this->direccion = direccion;
  this->estdCiv = estdCiv;
}

void Alumno::datos()
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
  cout << "Cursos: " <<cursos<<endl;
  cout << "Periodo de ingreso: " <<periodoIngreso<<endl;
  cout << "Semestre: " <<semestre<<endl;
  cout << "credito del semestre: " <<creditosSemestre<<endl;
  cout << "Creditos acumulados: " <<creditosAcumulados<<endl;
  cout << "Notas: " <<notas<<endl;
  cout << "Mesualidad: " <<mensualidad<<endl;
}