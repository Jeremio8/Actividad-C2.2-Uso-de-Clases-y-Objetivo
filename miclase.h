//ANGULO BONE JORDY JORKAEL
class Persona{
	
	private:
		string nombres, apellidos, cedula;
		int aa,ma,da,an,mn,dn,a,m,d; 
		float p, altura, masa;
		
	public:
		Persona (){
				
		}
		void ingresar()
		{
			cout<<"\n\ningrese los datos"<<endl<<endl;
			cout<<"degite su numero de cedula: ";cin>>cedula;
			cout<<"escriba sus nombres ";getline(cin,nombres);
			cout<<"y apellidos:  ";getline(cin,apellidos);
			cout<<"digite su peso:  ";cin>>p;
			cout<<"digite su estatura: ";cin>>altura;
			cout<<"digite su fecha de nacimiento(aa mm dd):  ";cin>>an;cin>>mn;cin>>dn;
		}
		
		void mostrar()
		{
		cout<<"\n                      Datos                   \n\n";	
		cout<<"CEDULA"<<"\t";
		cout<<"NOMBRES Y"<<"\t";
		cout<<"APELLIDOS"<<"\t";
		cout<<"PESO"<<"\t";
		cout<<"ESTATURA"<<"\t";
		cout<<"FECHA DE NACIMIENTO"<<endl;
		
		cout<<cedula<<"\t";
		cout<<nombres<<"\t";
		cout<<apellidos<<"\t";
		cout<<p<<"\t";
		cout<<altura<<"\t";
		cout<<an<<"\t";
		cout<<mn<<"\t";
		cout<<dn<<"\t";
		
		}

//******************************//
//LUIS ABRAHAN QUIÑONEZ CAICEDO //
//******************************//
	void digitar(int aa, int ma, int da){
		an=0;
		mn=0;
		dn=0;
	cout<<"digite la fecha actual (aa mm dd):  ";cin>>aa;cin>>ma;cin>>da;
	cout<<"digite su fecha de nacimiento (aa mm dd):  ";cin>>an;cin>>mn;cin>>dn;
	
	if(da>dn){
		d = da - dn;
	}
	else{
		da = da+30;
		ma = ma-1;
		d = da - dn;
	}
	if(ma>mn){
		m = ma - mn;
	}
	else{
		ma = ma+12;
		aa= aa-1;
		m = ma - mn;
	}
	
	a = aa - an;
	
	cout<<"Su edad es:  "<<a<<" años con "<<m<<" meses y "<<d<<" dias.";
	
}
	

	        //**************************//
                // EDIS JIPSON SOSA QUINONEZ//
	        //**************************//
	
                void set_masa(int peso){
    
                p=0;
	        altura=0;
	
                cout<<"digite su peso:   ";cin>>p;
                cout<<"digite su estatura:   ";cin>>altura;
	        masa= p/(altura*altura);
	        cout<<"\n\nTu masa corporal es de:  "<<masa<<"\n\n";
	
	        if(masa<18.5){
		cout<<"1. Necesitas comer balanceadamente: Consulta una dieta para consumir alimentos que te ayuden\n\n";
		cout<<"2. Comienza con rutina ejercicios y luego aumenta la intensidad para ganar musculatura";
		cout<<"\n\n3. Ayúdate con vitaminas y complemento para obtener músculos más rápido\n\n";
	        }
	        else{
		if (masa>=18.5 && masa<=24.9){
			cout<<"Felicidades!!, has conseguido obtener los objetivos prometidos :)\n";
			cout<<"\ Sigue dietas y ejercicios para mantener tu masa corporal:\n\n";
			cout<<"1. Come sano para que tu metabolismo se mantenga sano\n";
			cout<<"2. Comer frutas entre comidas favorecerá a mantener tu masa corporal\n";
			cout<<"3. Realiza rutinas de ejercicio con constantes para mantener tu físico\n\n",
			cout<<"                                         sigue así ;)                                     \n";
		}
		else{
			if (masa>=18.5 && masa<=24.9){
			cout<<"Atención!! Tienes que disminuir tu peso corporal :(\n";
			cout<<"\n1. Reduce el consumo de alimentos que sean ricos en azúcares y grasas\n";
			cout<<"2. Realizar actividad física frecuente para mantener tu cuerpo activo (adultos)\n";
			cout<<"3. Comer varias veces al día ayuda a mantener una buena salud y no sufrir consecuencias\n\n",
			cout<<"                                   Combate el sobrepeso!!                                       \n";	
			}
			else{
			cout<<"Estas en peligroooo!! :(\n";
			cout<<"\n1. Sigue una dieta exclusivamente de alimentos saludables\n";
			cout<<"2. Realizar una rutina de entrenamiento que aumenten su intensidad progresivamente.\n";
			cout<<"3. Realiza caminatas diarias de 1/2 kilometro\n",
			cout<<"4. Comer varias veces al día fruta, así cereales integrales y frutos secos\n\n",
			cout<<"                                   Combate el sobrepeso!!                                       \n";	
			}
				
			}
		}
		}
	/////////////////////////////////////////////////
	// ROMMEL JEREMY ORTIZ NAPA                    //
	////////////////////////////////////////////////
	void save(){
	
			ofstream archivo("datos del usiario.txt");
			archivo<<"cedula:  "<<cedula<<"\n\n";
			archivo<<"nombres:  "<<apellidos<<"\n\n";
			archivo<<"su fecha de nacimiento es: "<<an<<"/"<<mn<<"/"<<dn<<"\n\n";
			archivo<<"su índice de masa corporal es:  "<<masa<<"\n\n";
			cout<<"sus datos han sido guardados con éxito :)\n"<<"\n\n";
			cout<<"gracias por utilizar el programa, hasta la próxima\n"<<"\n\n";
			
	
		}


///////////////////////////////////////
//***HEREDIA RUIZ EMERSON JOAO***//
//////////////////////////////////////

	void lectura(){
			ifstream archivo;
			string texto;
			archivo.open("datos del usiario.txt",ios::in);
			if(archivo.fail()){
				cout<<"no existe ";
				exit(1);
			}
			
			while (!archivo.eof()){
			getline(archivo,texto);
			cout<<texto<<endl;
		}	
		}

};


	
	
	
	
	
	
	
	
	
	
	
	
	
	
