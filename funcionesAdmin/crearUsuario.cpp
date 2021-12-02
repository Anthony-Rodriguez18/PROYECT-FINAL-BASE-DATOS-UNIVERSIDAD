#include "../include/liberman.h"

void Menu :: crearAdmin()
{
	int auxcodigo;
  string auxnombres, auxapellidos,auxdni, auxcorreoInsti,auxcelular,auxdireccion,auxestdCiv;
  
  cout << "\033[H\033[2J\033[3J";
  cout <<"\t\t\t**CREAR UN ADMINISTRADOR**\t\t\t\n\n";
  cout <<endl << "Ingrese los siguientes datos: ";
  cin.ignore(1000000, '\n');
  cout << endl << "Nombres: "; 
  getline(cin, auxnombres); 
  cout << endl << "Apellidos: ";
  getline(cin, auxapellidos);
  cout << endl << "DNI: ";
  getline(cin,auxdni);
  cout << endl << "Correo institucional: ";
  getline(cin,auxcorreoInsti)  ;
  cout << endl << "Celular: ";
  getline(cin, auxcelular);
  cout << endl << "Dirección: ";
  getline(cin,auxdireccion);
  cout << endl << "Estado civil: ";
  getline(cin,auxestdCiv);
	
  auxcodigo = contD;
	ptr_admins[contD] = Admin(auxcodigo,auxnombres, auxapellidos, auxdni, auxcorreoInsti,auxcelular,auxdireccion, auxestdCiv);

  cout <<endl<< "Usuario creado con éxito" << endl<< endl;
  contD++;
}

void Menu :: crearAlumno()
{
	string auxnombres, auxapellidos,auxdni, auxcorreoInsti,auxcelular,auxdireccion,auxestdCiv, auxcarrera, auxperiodoIngreso, auxcursos,auxsemestre,auxcreditosSemestre,auxcreditosAcumulados,auxmensualidad;

  int auxcodigo; 

  cout << "\033[H\033[2J\033[3J";
  cout<<"\t\t\t\t***CREAR UN ALUMNO***t\t\t\t\n\n";
  cout <<endl << "Ingrese los siguientes datos: ";
  cin.ignore(1000000, '\n');
  cout << endl << "Nombres: "; 
  getline(cin, auxnombres); 
  cout << endl << "Apellidos: ";
  getline(cin, auxapellidos);
  cout << endl << "DNI: ";
  getline(cin,auxdni);
  cout << endl << "Correo institucional: ";
  getline(cin,auxcorreoInsti)  ;
  cout << endl << "Celular: ";
  getline(cin, auxcelular);
  cout << endl << "Dirección: ";
  getline(cin,auxdireccion);
  cout << endl << "Estado civil: ";
  getline(cin,auxestdCiv);
  cout<<endl<<"carrera: ";
  getline(cin,auxcarrera);
  cout<<endl<<"cursos: ";
  cin >> auxcursos;
  cin.ignore(1000000, '\n');
  cout<<endl<<"periodo de ingreso: ";
  getline(cin, auxperiodoIngreso);
  cout<<endl <<"Semestre: ";
  cin>> auxsemestre;
  cout<<endl<<"creditos del semestre actual: ";
  cin>> auxcreditosSemestre;
  cout<<endl<<"creditos acumulados: ";
  cin>> auxcreditosAcumulados;
  cout<<endl<<"Mensualidad del alumno: ";
  cin>> auxmensualidad;

  auxcodigo = contA+1;
  ptr_alumns[contA] = Alumno(auxcodigo,auxdni, auxnombres, auxapellidos,auxdni, auxcorreoInsti,auxcelular,auxdireccion,auxestdCiv, auxcarrera,auxcursos, auxperiodoIngreso,auxsemestre,auxcreditosSemestre,auxcreditosAcumulados,auxmensualidad);

  cout <<endl << "Usuario creado con éxito" << endl<< endl;
  contA++;
}

void Menu :: crearProf()
{
  cout <<endl << "Ingrese los siguientes datos: ";

  string auxnombres, auxapellidos,auxdni,auxcorreoInsti, auxcelular, auxdireccion,auxestdCiv, auxperfilProf, auxsuplente, auxncursosEnsena, auxsueldo;
  int auxcodigo;

  cin.ignore(1000000, '\n');
  cout << endl << "Nombres: "; 
  getline(cin, auxnombres); 
  cout << endl << "Apellidos: ";
  getline(cin, auxapellidos);
  cout << endl << "DNI: ";
  getline(cin,auxdni);
  cout << endl << "Correo institucional: ";
  getline(cin,auxcorreoInsti); 
  cout << endl << "Celular: ";
  getline(cin, auxcelular);
  cout << endl << "Dirección: ";
  getline(cin,auxdireccion); 
  cout << endl << "Estado civil: ";
  getline(cin,auxestdCiv);
  cout << endl << "Cursos que ensenan: ";
  cin >> auxncursosEnsena; 
  cout << endl << "Sueldo: " ;
  cin >> auxsueldo;
  cin.ignore(1000000, '\n');
  cout << endl << "perfil profesional: ";
  getline(cin,auxperfilProf);  
  cout <<endl << "Suplente (si/no): ";
  getline(cin,auxsuplente);

  auxcodigo = contP+1;
  ptr_profes[contP] = Profesor((contP+1), auxdni,auxnombres, auxapellidos,auxdni,auxcorreoInsti, auxcelular, auxdireccion,auxestdCiv,auxncursosEnsena,auxsueldo, auxperfilProf,auxsuplente);

  cout <<endl<< "Registro creado con éxito" << endl<< endl;
  contP++;
}

void Menu :: crearUsuario()
{
  cout << endl <<"\t\t\t\t\t*****Crear un Usuario*****\t\t\t\t\t";
  char opc;
  cout <<endl<<  "Administrador(D), Profesor(P), Alumno(A): " ;
  cin >> opc;
  switch (opc)
  {
    case 'D': 
    {
      crearAdmin();
      break;
    }
    case 'P': 
    {
      crearProf();
      break;
    }
    case 'A': 
    {
      crearAlumno();
      break; 
    }
  }
}