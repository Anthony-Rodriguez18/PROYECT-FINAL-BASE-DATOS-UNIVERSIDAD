#ifndef ALUM_H_
#define ALUM_H_

class Alumno : public Usuario 
{
  private: 
  string carrera;
  string cursos; 
  string periodoIngreso;
  string semestre;
  string creditosSemestre;
  string creditosAcumulados;
  string notas;
  string mensualidad; 
  
  public:
  Alumno();
  Alumno(int, string ,string ,string ,string ,string ,string ,string ,string,string, string, string, string,string,string,string);
  ~Alumno();
  void datos();
  void setDatosPer( string ,string ,string ,string ,string ,string);
  void setAlumno( string, string, string ,string ,string ,string ,string ,string ,string, string, string, string, string, string,string);
  void setCodigo(int);
};

#endif