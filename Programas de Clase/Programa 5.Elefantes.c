#include<stdio.h>
int main()
{
	int n,m;
	printf("¿Cuantas veces quiere escuchar la cancion?: \n");
	scanf("%d",&n);
	
	m=1;
	while(m<(n+1))
	{	
		printf("%d elefantes se columpiaban sobre la tela de una arania, como veian que resistia, fueron a llamar a otro elefante\n",m);
		m=m+1;
	}
	return 0;
}
