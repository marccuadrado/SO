#include <stdio.h>

int main(int argc, char *argv[]) {
	
	SELECT distincs jugador.nombre from (partidas)	(nom guanyar + de 30p)
		WHERE partida.puntos >= 30;
	AND jugador.edad >= 18;
	
	
	return 0;
}

