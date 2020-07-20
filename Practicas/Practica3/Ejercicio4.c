// Estructuras Anidadas
/*Este programa se conforma de varias estructuras, las cuales
almacenan el nombre de la persona, tres números de teléfono y tres direcciones.
Finalmente imprime las tres direcciones almacenadas en la estructura
DIRECCION.*/

#include<stdio.h>
#include<string.h>

struct NOMBRE{
	char szNombre[15];
	char szApellidoPat[15];
	char szApellidoMat[15];
};

struct DIRECCION{
	int iNumer;
	char szCalle[15];
	char szColonia[15];
	char szMunicipio[15];
	char szEstado[15];
	char szPais[15];
	char szCodPost[10];
};

struct TELEFONOS{
	long int iCasa;
	long int iMovil;
	long int iTrabajo;
};

struct DATOS{
	struct NOMBRE stNom;
	struct DIRECCION stDir[3];
	struct TELEFONOS stTel;
};

int main(){
	struct DATOS yo;
	
	//inicializar datos
	strcpy(yo.stDir[0].szPais,"Mexico");
	strcpy(yo.stDir[1].szPais,"Francia");
	strcpy(yo.stDir[2].szPais,"Venezuela");
	
	//mostrar datos
	printf("Tengo una casa en %s\n",yo.stDir[0].szPais);
	printf("Tengo una casa en %s\n",yo.stDir[1].szPais);
	printf("Tengo una casa en %s\n",yo.stDir[2].szPais);
	
	return 0;
}
