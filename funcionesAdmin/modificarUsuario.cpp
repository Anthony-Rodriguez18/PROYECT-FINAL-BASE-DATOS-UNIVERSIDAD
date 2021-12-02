#include "../include/liberman.h"

void Menu :: modificarAdmin()
{
  int aux; 
  string auxnombres, auxapellidos,auxdni, auxcorreoInsti,auxcelular,auxdireccion,auxestdCiv;

  cout <<endl<< "Ingrese el código del Usuario que desea modificar: ";
  cin >> aux;

  cout <<endl << "Datos actuales del usuario: " << endl;
  ptr_admins[aux].datos();

  cout << endl <<"\t---------------------------------------\t";
  cout <<endl<< "Ingrese los nuevos datos";
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

  ptr_admins[(aux)].setAdmin(auxnombres, auxapellidos,auxdni, auxcorreoInsti,auxcelular,auxdireccion,auxestdCiv);

  cout <<endl << "Registro modificado con éxito" << endl; 
}

void Menu :: modificarAlumno()
{
  int aux; 
	string auxnombres, auxapellidos,auxdni, auxcorreoInsti,auxcelular,auxdireccion,auxestdCiv, auxcarrera, auxperiodoIngreso,auxcursos,auxsemestre,auxcreditosSemestre,auxcreditosAcumulados,auxmensualidad;

  cout <<endl<< "Ingrese el código del Usuario que desea modificar: ";
  cin >> aux;

  cout <<endl << "Datos actuales del usuario: " << endl;
  ptr_alumns[aux-1].datos();
  
  cout << endl <<"\t---------------------------------------\t";
  cout <<endl<< "Ingrese los nuevos datos";
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
  
  ptr_alumns[(aux-1)].setAlumno(auxdni, auxnombres, auxapellidos,auxdni, auxcorreoInsti,auxcelular,auxdireccion,auxestdCiv, auxcarrera,auxcursos, auxperiodoIngreso,auxsemestre,auxcreditosSemestre,auxcreditosAcumulados,auxmensualidad);

  cout <<endl << "Registro modificado con éxito" << endl; 
}

void Menu:: modificarProf()
{
  int aux; 
  string auxnombres, auxapellidos,auxdni, auxcorreoInsti,auxcelular,auxdireccion,auxestdCiv,auxperfilProf, auxsuplente,auxsueldo,auxncursosEnsena;

  cout <<endl<< "Ingrese el código del Usuario que desea modificar: ";
  cin >> aux;

  cout <<endl << "Datos actuales del usuario: " << endl;
  ptr_profes[aux-1].datos();

  cout << endl <<"\t---------------------------------------\t";
  cout <<endl<< "Ingrese los nuevos datos";
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
  cout << endl << "Cursos que ensenan: ";
  cin >> auxncursosEnsena; 
  cout << endl << "Sueldo: " ;
  cin >> auxsueldo;
  cin.ignore(1000000, '\n');
  cout << endl << "perfil profesional: ";
  getline(cin,auxperfilProf);
  cout <<endl << "Suplente (si/no): ";
  getline(cin,auxsuplente);

  ptr_profes[(aux-1)].setProfesor(auxnombres, auxapellidos,auxdni,auxcorreoInsti, auxcelular, auxdireccion,auxestdCiv,auxncursosEnsena,auxsueldo, auxperfilProf,auxsuplente);
  cout <<endl << "Registro modificado con éxito" << endl; 
}

void Menu :: modificarUsuario()
{
    cout << endl <<"\t\t\t\t\t*****BUSCAR UN USUARIO*****\t\t\t\t\t";
  char opc;
  cout <<endl<<  "Administrador(D), Profesor(P), Alumno(A): " ;
  cin >> opc;
  switch (opc)
  {
    case 'D': 
    {
      modificarAdmin();
      break;
    }
    case 'P': 
    {
      modificarProf();
      break;
    }
    case 'A': 
    {
      modificarAlumno();
      break; 
    }
  }
}