#include <iostream>
#include <math.h>
using namespace std;
void Antena (int,int);
void Vigas (int,int);
void Triangulo(int,int);
void Reloj(int);

int main() {
	
	int a=0, b=0, h=0, n=0;
	
	cout<<"\n\n\t\t\t\t\tEL BIG BEN \n\n\n\n\n\n";
	
	//Antena
	
	a=3;
	b=1;
	Vigas(a,b);

	//Dimensiones de la primera viga
	
	a=1;
	b=2;
	Vigas (a,b); 
	
	//Dimensiones del Triangulo 1
	
	h=6;
	a=2;
	Triangulo(h,a);	
	
	//Ventanas
	
	a=2;
	b=6;
	Vigas(a,b);
	
	//Triangulo 2
	
	h=11;
	a=6;
	Triangulo(h,a);
	
	//Parte superior 1 del reloj
	
	a=2;
	b=13;
	Vigas(a,b);
	
	//Parte superior 2 del reloj
	
	a=1;
	b=12;
	Vigas(a,b);
	
	//Reloj
	
	n=12;
	Reloj(n);
	
	//Parte inferior del reloj 1
	
	a=4;
	b=12;
	Vigas(a,b);
	
	//Parte inferior del reloj 2
	
	a=1;
	b=25;
	Vigas(a,b);
	
	//Parte inferior del reloj 3
	
	a=5;
	b=12;
	Vigas(a,b);
	
	//Parte inferior del reloj 4
	
	a=1;
	b=25;
	Vigas(a,b);
	
	//Parte inferior del reloj 5
	
	a=5;
	b=12;
	Vigas(a,b);
	
	//Parte inferior del reloj 6
	
	a=1;
	b=25;
	Vigas(a,b);
	
	//Parte inferior del reloj 7
	
	a=4;
	b=12;
	Vigas(a,b);
	
	return 0;
}


void Vigas(int a, int b){			
	for(int i = 0 ; i < a; i++){
		
		if((b==13)||(b==12)||(b==25)){
		cout<<"\t\t\t\t ";
		}else{
			cout<<"\t\t\t\t\t";
		}
		if(a==3&&b==1){
			cout<<"     ";
		}else{
			if(b==2){
		cout<<"    ";
		}}
		for(int j = 0; j < b; j++){
		if(b==12){
			cout<<" *";
		}else{
		if(b==25){
			cout<<"*";
		}else{
			cout<<"* ";
		}}}
		cout<<endl;
	}
}

void Triangulo(int h,int a){
	for(int i = a; i <= h; i++) { 
		if(h==6){
			cout<<"\t\t\t\t\t";
		}else{
			cout<<"\t\t\t\t   ";
	}
	for(int j = 1; j <= (h-i) ; j++) { 
		cout<<" "; 
	} 
	for(int j = 1; j <= (i*2-1) ; j++) { 
		cout<<"*"; 
	} 
	cout<<endl; 
	} 
}
	
void Reloj(int n){
   for (int y=0;y<=n*2;y++){
	cout<<"\t\t\t\t ";
	  for(int x=0;x<=n*2;x++){
		if ((pow(x-n,2)+pow(y-n,2))>=pow(n,2)){
			if (x<=1&&(y>2&&y<22)){
				cout<<"\b\b\b***";
		}
		if (x>23&&(y>2&&y<22)){
			cout<<"***";
		}
		cout<<"*";
	}else{
		if(x==n&&y<=n){
			if(x==n&&y==n){
				for(int i=0;i<=n/2;i++){
					cout<<"\b";
				}
				for(int j=0;j<=n/2;j++){
					cout<<"_";}
				cout<<"|";}
			else{
				cout<<"|";}
		}else{
			cout<<" ";
		}
	}
  }
	cout<<endl;
}	
}
