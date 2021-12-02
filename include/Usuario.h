#ifndef USUARIO_H_
#define USUARIO_H_

class Usuario 
{
  protected:
  string contrasena;
	int codigo;
  string nombres;
	string apellidos;
	string dni;
	string correoInsti;
	string celular;
	string direccion;
	string estdCiv;

  public:
  Usuario( );
  Usuario(int ,string ,string ,string ,string ,string ,string ,string );
  ~Usuario();
  void datos();
  //Getters
  int getCodigo(){return this->codigo;}
  string getContrasena(){return this->contrasena;}
  string getNombres(){return this->nombres;}
  string getApellidos(){return this->apellidos;} 
  string getCorreoInsti(){return this->correoInsti;}
  string getDNI(){return this->dni;}
  string getCelular(){return this->celular;}
  string getDireccion(){return this->direccion;}
  string getEstadoCiv(){return this->estdCiv;}

  //Setters
  void setUsuario( string ,string ,string ,string ,string ,string);
};

#endif