#include "../include/liberman.h"

Menu :: Menu()
{
  ptr_admins = new Admin[30];
  ptr_profes = new Profesor[30];
  ptr_alumns = new Alumno[100];
  contD = 1;
  contA = 0;
  contP = 0;
  ptr_admins[0] = Admin(0, "Admin god", "admingoddd", "563746298", "admin.god@ucsp.edu.pe", "976453433", "urb el cielo", "Solterosky");
}

Menu :: ~Menu()
{
  delete ptr_admins;
  delete ptr_alumns;
  delete ptr_profes;
}

bool Menu:: loginAdmin(int auxcodigo, string auxcontra)
{
  std::cout << "\033[H\033[2J\033[3J";
  if (ptr_admins[(auxcodigo)].getContrasena() == auxcontra)
  {
    return true;
  }
  return false;
}

bool Menu::loginAlumno(int auxcodigo, string auxcontra)
{
  std::cout << "\033[H\033[2J\033[3J";  
  if(ptr_alumns[(auxcodigo-1)].getContrasena()==auxcontra)
  {
    return true;
  }
  return false;
}

bool Menu::loginProf(int auxcodigo, string auxcontra)
{
  std::cout << "\033[H\033[2J\033[3J";  
  if (ptr_profes[(auxcodigo-1)].getContrasena() == auxcontra)
  {
    return true;
  }
  return false;
}

void Menu :: menuAdmin()
{
  int auxcodigo; string auxcontra;
  cout <<endl << "Ingrese su código: " ;
  cin >> auxcodigo;
  cout <<endl << "Ingrese su contraseña: " ;
  cin >> auxcontra;
  
  if(loginAdmin(auxcodigo,auxcontra))
  {
    int op;
    do
    {
      cout << "\t\t***ADMINISTRADOR***\t\t"<<endl;
      cout << "Número de admin: " << contD << endl;
      cout << "Número de alumns: " << contA << endl;
      cout << "Número de profes: " << contP<< endl;
      cout << "[1] Crear Usuario" << endl;
      cout << "[2] Modificar Usuario" << endl;
      cout << "[3] Mostrar Lista de Usuarios" << endl;
      cout << "[4] Eliminar Usuario" << endl;
      cout << "[5] Buscar Usuario" << endl;    
      cout << "[6] Salir" << endl;
      cout << "Elija una opción..." << endl;
      cin >> op;
      
      std::cout << "\033[H\033[2J\033[3J";

      switch (op)
      {
        case 1:
        {
          crearUsuario();
          break;
        }
        case 2:
        {
          modificarUsuario();
          break;
        }
        case 3:
        {
          verUsuario();
          break;
        }
        case 4:
        {
          eliminarUsuario();
          break;
        }
        case 5:
        {
          buscarUsuario();
          break;
        }
        case 6:
        {
          break;
        }
        default:
        {
          cout << "Opción no válida" << endl;
          break;
        }
      }
    }
    while(op != 6 );
  }

}

void Menu :: menuProf()
{ 
  int auxcodigo; string auxcontra; 
  cout<<endl<<"Ingrese su código: ";
  cin>>auxcodigo;
  cout<<endl<<"ingrese su contraseña: ";
  cin>>auxcontra;

  if(loginProf(auxcodigo,auxcontra ))
  {
    int opc;
    do
    {
      cout << "\t\t***PROFESOR***\t\t"<<endl;
      cout << "[1] Modificar datos personales" << endl;
      cout << "[2] Modificar notas" << endl;
      cout << "[3] Mostrar Usuario" << endl;
      cout << "[4] Mostrar datos Propios" << endl;
      cout << "[5] Salir" << endl;
      cout << "Elija una opción..." << endl;
      cin >> opc;
      std::cout << "\033[H\033[2J\033[3J";

      switch (opc)
      {
        case 1:
        {
          modificarDatosP(auxcodigo);
          break;
        }
        case 2:
        {
          //modificarNotas();
          break;
        }
        case 3:
        {
          mostrarDatosUsu();
          break;
        }
        case 4:
        {
          mostrarDatosP(auxcodigo);
        }
        case 5:
        {
          break;
        }
        default:
        {
          cout << "Opción no válida" << endl;

          break;
        }
      }
    }
    while(opc != 5 );
  }

}

void Menu :: menuAlumno()
{
  int auxcodigo; string auxcontra;
  cout<<endl<<"Ingrese su código: ";
  cin >> auxcodigo;
  cout<<endl<<"Ingrese su contraseña: " ;
  cin>>auxcontra;
  if(loginAlumno(auxcodigo, auxcontra))
  {
    int opc;
    do
    {
      cout << "\t\t***ALUMNO***\t\t"<<endl;
      cout << "[1] Modificar datos personales" << endl;
      cout << "[2] Mostrar Datos Personales" << endl;
      cout << "[3] Mostrar Usuario" << endl;
      cout << "[4] Salir" << endl;
      cout << "Elija una opción..." << endl;
      cin >> opc;
      std::cout << "\033[H\033[2J\033[3J";
      switch (opc)
      {
        case 1:
        {
          modificarDatosA(auxcodigo);
          break;
        }
        case 2:
        {
          mostrarDatosA(auxcodigo);
          break;
        }
        case 3:
        {
          mostrarDatosUsu();
          break;
        }
        case 4:
        {
          break;
        }
        default:
        {
          cout << "Opción no válida" << endl;

          break;
        }
      }
    }
    while(opc != 4 );
  }
}

void Menu :: menuPrincipal()
{
  int opc;
  do
  {
    cout << "\t**Universidad las chicas superpoderosas**\t"<<endl;
    cout << "[1] Administrador" << endl;
    cout << "[2] Profesor" << endl;
    cout << "[3] Alumno" << endl;
    cout << "[4] Salir" << endl;
    cout << "Elija una opción..." << endl;
    cin >> opc;
    std::cout << "\033[H\033[2J\033[3J";
    
    switch  (opc)
		{
      case 1:
      {
        menuAdmin();
        break;
      }
      case 2:
      {
        menuProf();
        break;
      }
      case 3:
      {
        menuAlumno();
        break;
      }
      case 4:
      {
        cout << "\t\t**BASE DE DATOS FINALIZADA\t\t**";
        //cargarDatos();
        break;
      }
      default:
      {
        cout << "Opción no válida" << endl;
        break;
      }
    }
  }
  while(opc != 4 );
}