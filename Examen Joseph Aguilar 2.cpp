#include <iostream>

using nampespace std;  /;

char pass(10);   
int  correcto;
int intento;
char contrasena{}="2345"; /*2345 es la contraseña que se debe introducir */
int main()
¨{ 

/ Función para mostrar el menú
void mostrarMenu() {
    int opcion;
    do {
        cout << "\n--- Menú ---\n";
        cout << "1. Ingresar Candidatos\n";
        cout << "2. Votaciones\n";
        cout << "3. Mostrar Resultados\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer de entrada
        
        
        
             char nom{30};  //variables locales 
             int id;
             char candidatos{3}
             
             For(int i<5;i++)
             Cout<<"El candidato en la posicion" <<i>>
             int ca=0,cb=0,cc=0,cd=0,tv=0; //Contadores de los votos de los diferentes candidatos
             string sa="Joseph Aguilar",sb"Antonia Quesada",sc"Michael Bermudez",sd="VOTO EN BLANCO";
             
           do  // ciclo do while 
		      
			   {
			   //MENU DE ENTRADA 
			   cout<<"/n/t***************************************************/n";
			   	   cout<<"/n/t**************SISTEMA DE VOTACIONES**************/n";
			   	   cout<<"/n/t****************************************************/n";
			   	   cout<<"/n##############################################################";
			   	   cout<<"/n--------------------------------------------------------------";
			   	   cout<<"/n";
			   	   cout<<"/n";
			   	   cout<<"/n                PARTIDO POLITICO FUEGO                      ";
			   	   cout<<"/n";
			   	   cout<<"/n                ELECCIONES ELECTORALES                      ";
				   cout<<"/n";
				   cout<<"/n                      2024/2025                             /n";
				   cout<<"/n-----------------------------------------------------------------";
				   cout<<"/n";
				   system("pause");
				  //FIN MENU ENTRADA
				  
				  //INICIO MENU REGISTRO DEL VOTANTE.
				  cout<<"/t------------------------------------------------------------------/n/n";
				         cout<<"/t ELECCION DEL REPRESENTANTE DE LOS PARTIDOS POLITICOS/n/n";
				         cout<<"/t INSTITUCION NACIONAL DE VOTACIONES DE GRECIA/n/n/n";
				         cout<<"/t-------------------------------------------------------------/n/n";
				         cout<<"/t/t/t MENU DE ELECCIONES/n/n";
				         cout<<"/t/t/t REGISTRO DE VOTANTES/n/n";
				         cout<<"/t--------------------------------------------------------------/n/n";
				         cout<<"Digita tu nombre: /n ";
				         cin>>nom;     //Capturamos la entrada del usuario, en una variable llamada nom
				         cout<< "Digita tu numero de identificacion:  /n";
				         cin>>id;
				         cout<<"/n";
				         cout<< "Tus datos han sido registrados correctamente.Por favor preceda a votar.
				         system("pause");
				         system("cls");
				         
				         //INICIO MENU DE VOTACION 
				      cout<<"/t----------------------------------------------------------------------/n/n";
					      cout<<"/t ELECCION DEL REPRESENTANTE DE LOS PARTIDOS POLITICOS/n/n";
					      cout<<"/t INSTITUCION NACIONAL DE VOTACIONES GRECIA/n/n/n";
					      cout<<"/t----------------------------------------------------------------------/n/n";
					      cout<<"/n/n";
					      cout<<"/t---------------------------------/n/n";
					      cout<<"/t           LISTADO DE CANDIDATOS /n/n";
					      cout<<"/t---------------------------------/n/n";
					    cout<< "A. JOSEPH AGUILAR MORERA  /n/n";
					    cout<< "B. ANTONIA QUESADA  /n/n";
					    cout<< "C. MICHAEL BERMUDEZ /n/n ";
						cout<< "D. VOTO EN BLANCO /n/n";
						cout<< "Ingresa tu voto: ";
						cin>>opcion1; 
						switch(opcion1) //
						{
						case 'A':
						case 'a':
							ca++;
							break;
						case 'B':
						case 'b':
						     cb++;
							 break;
						case 'C':
						case 'c':
						 	 cc++
							 break;
						case 'D';
						case 'd';
						     cd++
							 break;
							   
							     default:
								 system("cls");
								 prinft("La opcion ingresada no es correcta /n/n/n");
								 break;
					
						} //Condicional para la opcion 'd'y 'D' del voto en blanco 
						if(opcion1 == 'd' \\ opcion1 == 'D'  )¨{
						   cout<<"-------------------------/n/n";
						   cout<<"Tu voto fue en blanco: " << opcion1 << "/n" <<end1;
						   cout<<"GRACIAS" << nom <<" POR VOTAR!/n/n" ;
						   cout<<"-------------------------- n/n";
				        }
				           else{
				                
				                
				                cout<<"Tu voto fue por el candidato: " <<opcion1 << end1;
				                cout<<"GRACIAS " << nom <<" POR VOTAR!/n/n";
				                cout<<"---------------------/n/n";
				          }
				           
				           system("pause");
				           system("cls");
				           //FIN MENU VOTANTES//
				           
				           
				      cout<<"/t------------------------------------------------------/n";
					      cout<<"/t ELECCION DEL REPRESENTANTE DE LOS PARTIDOS POLITICOS/n/n";
						  cout<<"/t INSTITUCION NACIONAL DE VOTACIONES GRECIA/n/n/n";
						  cout<<"/t-----------------------------------------------------/n/n";
						  cout<<"/t/t/t MENU DE ELECCIONES/n/n";
						  cout<<"/t-----------------------------------------------------/n/n";
						  cout<<"Seleccione una opcion /n/n 1. REGISTRO DE VOTANTES  /n2. CERRAR LAS VOTACIONES Y VER RESULTADOS /n "; 
						  cin>>opcion2;
						  system("cls");
						     }
						     while(opcion2=='1');
						     if (opcion2=='2')
						    {
						    fflush(stdin); //Limpiar el buffer
						    //INICIO PARA INGRESAR OP CERRAR VOTACIONES Y VER RESULTADOS FINALES 
						      //la contraseña que se debe ingresar es 2345, solo 3 intentos.
						      intento=1;
						      correcto=0;
						      cout<<"/t------------------------------------------------------/n"
						    cout<<"/tPara ver los resultados finales necesita acceso especial. /n/n";
							cout<<"/t------------------------------------------------------/n";
							    cout<<"/tTienes 3 intentos para ingresar /n/n";
							    cout<<"/tIntroduce la contrasena: ";
							    gets(pass);
							    prinft("/n");
						if(strcmp(pass,contrasena)==0)correcto=1
						while ((correcto==0)&&(intento<3))	    
						{
						 intento++;
						 prinft("/tContrasena incorrecta.%i intento ", intento);
						        gets(pass);
								prinft("/n");
						if(strcpm(pass,contrasena)==0) correcto=1;
				}
				if(correcto==0) prinft("Se han excedido el numero de intentos.");
				else
				{
				  cout<<"/t Acceso concedido!/n/n";
				  //FIN METODO DE AUTENTICACION 
				  system("pause");
				  system("cls")
						cout<<"/t------------------------------------------------/n/n";
						cout<<"/t ELECCION DEL REPRESENTANTE DE LOS PARTIDOS POLITICOS/n/n";
						cout<<"/t INSTITUCION NACIONAL DE VOTACIONES DE GRECIA/n/n/n";
						cout<<"/t----------------------------------------------------/n/n";
						cout<<"/t LISTADO DE CANDIDATOS /n/n" << "/t RESULTADOS:" << "/n/n";
					cout<<"/t-----------------------------------------------------/n/n";
					    cout<<"A. JOSEPH AGUILAR  : "<<ca<<" VOTOS /n";
						cout<<"B. ANTONIA QUESADA  : "<<ca<<" VOTOS /n";
						cout<<"C. MICHAEL BERMUDEZ : "<<ca<<" VOTOS /n";
						cout<<"D. VOTO EN BLANCO : "<<ca<<" VOTOS /n";
						tv=ca+cb+cc+cd;
						cout<<"Total de Votos : "<<tv<<"/n";	
						 
						if (ca> cb && ca > cc && > cd)
						{
						  cout<< " El candidato ganador es : JOSEPH AGUILAR" << end1;
			        	}
			        	else if (cb> ca && cb > cc && cb > cd)
			        	{
			        	    cout << "El candidato ganador  es : ANTONIA QUESADA" << end1;
			        	else if (cc > ca && cc > cb && cc > cd)
			        
			            }
			               cout << "El candidato ganador es : MICHAEL BERMUDEZ" << end1;
			                }
			            else if 
			                 
			                 cout<< "No hubo candidatos ganadores." << end1;
			           } 
			           
			 }
			           return 0;
			              
	     	}
			               
				        	
				        
						   
					
				     
				   	   
			   	   
             
    
      

