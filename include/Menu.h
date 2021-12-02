#ifndef MENU_H_
#define MENU_H_

class Menu
{
  private:
  Admin* ptr_admins = nullptr;
  Alumno* ptr_alumns = nullptr;
  Profesor* ptr_profes = nullptr;
  int contD, contA, contP;

  public:
  Menu();
  ~Menu();
  bool loginAdmin(int, string);
  bool loginAlumno(int, string);
  bool loginProf(int, string);
  void menuPrincipal();
  void menuAdmin();
  void menuProf();
  void menuAlumno();
  void cargarDatos();
  void guardarDatos();

  //ADMIN
    //CREAR_NUEVO_USUARIO
      void crearAdmin();
      void crearProf();
      void crearAlumno();
      void crearUsuario();
    //ELIMINAR_USUARIO
      void eliminarUsuario();
      void eliminarAdmin();
      void eliminarAlumno();
      void eliminarProf();
    //VER_USUARIO
      void verUsuario();
      void verAdmin();
      void verAlumno();
      void verProf();
    //MODIFICAR_DATOS_TODO_USUARIO
      void modificarUsuario();
      void modificarAdmin();
      void modificarAlumno();
      void modificarProf();
    //BUSCAR_USUARIO
      void buscarAdmin();
      void buscarAlumno();
      void buscarProf();
      void buscarUsuario();

  //PROF
    //MODIFICAR_DATOS_PER
      void modificarDatosP(int);
    //MODIFICAR_NOTAS
      void modificarNotas();
    //VER_DATOS_PER
      void mostrarDatosP(int); 

  //ALUMNO
    //MODIFICAR_DATOS_PER
      void modificarDatosA(int);
    //VER_DATOS_PER
      void mostrarDatosA(int);

  //VER_DATOS_USUARIO_ALUM_PROFE
      void mostrarDatosD();
      void mostrarDatosA();
      void mostrarDatosP(); 
      void mostrarDatosUsu();

  
  
  void mostarRegistroA(string codigo);
  void mostarRegistroPerA(string codigo);
  void modificarDatosPerA();
  
  
};

void error();

#endif