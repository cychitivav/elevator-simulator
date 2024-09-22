/*
Juan Sebastian Dueñas - Mechatronics Engineering - 25481399
Cristian Yesid Chitiva - Mechatronics Engineering - 25481391
Rulber Stiven Gomez - Mechatronics Engineering - 25481387
*/

#include "lib/miniwin.h" //libreria para grafica en c++, lineas circulo, rectangulos
#include <cstdlib>			 //Funcion para numeros aleatorios

using namespace miniwin; // para no llamar la librería de miniwin cada vez que se usa una de sus funciones
const int l = 50;				 // escala de las coordenadas en pixeles

void personas(float x, float y, char genero)
{ // funcion que imprime la figura de una persona
	if (genero == 'h')
	{														// Imprime hombres
		color_rgb(255, 174, 136); // Cuerpo
		circulo_lleno(x, y, 7);
		rectangulo_lleno(x - 7, y + 13, x - 4, y + 19);
		rectangulo_lleno(x + 4, y + 13, x + 7, y + 19);
		rectangulo_lleno(x - 1, y, x + 1, y + 9);
		color_rgb(0, 64, 64); // Camisa
		rectangulo_lleno(x - 7, y + 9, x + 7, y + 13);
		rectangulo_lleno(x - 4, y + 9, x + 4, y + 20);
		color_rgb(41, 41, 41); // Pantalon
		rectangulo_lleno(x - 4, y + 20, x - 1, y + 30);
		rectangulo_lleno(x + 1, y + 20, x + 4, y + 30);
		color_rgb(72, 23, 0); // Zapatos
		rectangulo_lleno(x - 5, y + 30, x - 1, y + 33);
		rectangulo_lleno(x + 1, y + 30, x + 5, y + 33);
	}

	else
	{													// Imprime mujeres
		color_rgb(255, 255, 0); // Cabello
		circulo_lleno(x, y - 7, 3);
		circulo_lleno(x + 2, y - 7, 3);
		circulo_lleno(x + 4, y - 6, 3);
		circulo_lleno(x + 6, y - 5, 3);
		circulo_lleno(x + 7, y - 4, 3);
		circulo_lleno(x + 7, y - 2, 3);
		circulo_lleno(x + 7, y, 3);
		circulo_lleno(x + 7, y + 2, 3);
		circulo_lleno(x + 7, y + 4, 3);
		circulo_lleno(x - 2, y - 3, 2);
		circulo_lleno(x - 2, y - 7, 3);
		circulo_lleno(x - 4, y - 6, 3);
		circulo_lleno(x - 6, y - 5, 3);
		circulo_lleno(x - 7, y - 4, 3);
		circulo_lleno(x - 7, y - 2, 3);
		circulo_lleno(x - 7, y, 3);
		circulo_lleno(x - 7, y + 2, 3);
		circulo_lleno(x - 7, y + 4, 3);
		color_rgb(255, 174, 136); // Cuerpo
		circulo_lleno(x, y, 7);
		rectangulo_lleno(x - 7, y + 13, x - 4, y + 19);
		rectangulo_lleno(x + 4, y + 13, x + 7, y + 19);
		rectangulo_lleno(x - 1, y, x + 1, y + 9);
		color_rgb(255, 128, 255); // Camisa
		rectangulo_lleno(x - 7, y + 9, x + 7, y + 13);
		rectangulo_lleno(x - 4, y + 9, x + 4, y + 20);
		color_rgb(128, 0, 255); // Pantalon
		rectangulo_lleno(x - 4, y + 20, x + 4, y + 30);
		color_rgb(72, 23, 0); // Zapatos
		rectangulo_lleno(x - 5, y + 30, x - 1, y + 33);
		rectangulo_lleno(x + 1, y + 30, x + 5, y + 33);
	}
}

void ladrillo(float x, float y)
{ // Funcion que imprime un ladrillo
	rectangulo(x * l, y * l, x * l + l, y * l + l);
	//	los parametros de rectangulo son las dos coordenadas (xy)
}

void borrador(float x, float y)
{ // funcion que imprime un ladrillo
	color(NEGRO);
	rectangulo(x * l, y * l, x * l + l, y * l + l); // los parametros de rectangulo son las dos coordenadas (xy)
	rectangulo_lleno(x * l + 0.5, y * l + 0.5, x * l + l - 0.5, y * l + l - 0.5);
}

void edificio(int total)
{ // Imprime el numero de pisos
	for (float i = 2; i <= total + 1; i++)
	{ // Ciclo para imprimir por pisos
		int c(0);
		color_rgb(0, 128, 0);
		while (c <= 75)
		{
			circulo_lleno(175 + c, i * l - 15, 5); // Plantas
			circulo_lleno(355 + c, i * l - 15, 5);
			c += 7;
		}
		color_rgb(135, 23, 32);
		rectangulo_lleno(175, i * l, 245, (i * l) - 15); // Materas
		rectangulo_lleno(355, i * l, 425, (i * l) - 15);
		color(BLANCO);
		rectangulo_lleno(250, i * l, 275, i * l - 5); // Suelo
		rectangulo_lleno(325, i * l, 350, i * l - 5);
		color_rgb(83, 83, 83);
		rectangulo_lleno(250, i * l - 5, 275, i * l - 15); // Reja
		rectangulo_lleno(325, i * l - 5, 350, i * l - 15);
	}
	color(BLANCO);
	texto(225, 10, "EDIFICIO MERCEDITAS"); // Nombre
	rectangulo_lleno(150, 50, 250, 60);		 // Techo
	rectangulo_lleno(350, 50, 450, 60);
	rectangulo_lleno(150, 50, 175, 550); // Columna
	rectangulo_lleno(425, 50, 450, 550);
	color_rgb(41, 41, 41);
	rectangulo_lleno(0, 550, 950, 600); // Base
	color_rgb(83, 83, 83);
	rectangulo_lleno(245, 25, 355, 30);	 // Techo ascensor
	rectangulo_lleno(245, 25, 250, 550); // Columnas ascensor
	rectangulo_lleno(350, 25, 355, 550);
	linea(275, 25, 275, 550); // Borde ascensor
	linea(325, 25, 325, 550);
	color(BLANCO);
	refresca();
}

void elevador(int pisoactual, int destino, int total)
{																				 // funcion para imprimir la figura del elevador
	pisoactual = (total + 1) - pisoactual; // Actualiza las variables para que el ascensor vaya de abajo hacia arriba
	destino = (total + 1) - destino;

	ladrillo(5.5, pisoactual); // Dibuja el ladrillo en el piso actual

	if (pisoactual >= destino)
	{ // Anima el ascensor con un avance de 0,01 hacia abajo
		for (double i = pisoactual; i >= destino; i -= 0.01)
		{
			color(BLANCO);
			ladrillo(5.5, i);
			espera(10);
			borrador(5.5, i + 0.01);
			color_rgb(83, 83, 83); // Color para el riel del ascensor
			linea(275, 25, 275, 550);
			linea(325, 25, 325, 550);
			personas(285, i * l + 17, 'h'); // Dibuja un hombre y una mujer
			personas(315, i * l + 17, 'm');
			color(BLANCO); // Restaura el color
			refresca();
		}
	}

	else if (pisoactual < destino)
	{ // Anima el ascensor con un avance de 0,01 hacia arriba
		for (double i = pisoactual; i <= destino; i += 0.01)
		{
			color(BLANCO);
			ladrillo(5.5, i);
			espera(10);
			borrador(5.5, i - 0.01);
			color_rgb(83, 83, 83); // Color para el riel del ascensor
			linea(275, 25, 275, 550);
			linea(325, 25, 325, 550);
			personas(285, i * l + 17, 'h'); // Dibuja un hombre y una mujer
			personas(315, i * l + 17, 'm');
			color(BLANCO); // Restaura el color
			refresca();
		}
	}
	ladrillo(5.5, destino); // Dibuja el ascensor en el piso final
	refresca();
}

void tablero()
{ // Dibuja el tablero que esta dentro del ascensor
	color_rgb(0, 128, 128);
	int x = 700, y = 100;
	for (int i(0); i <= 3; i++)
	{ // Dibuja las casillas en el ascensor
		rectangulo(x, y, x + 50, y + 50);
		rectangulo(x + 50, y, x + 100, y + 50);
		rectangulo(x + 100, y, x + 150, y + 50);
		y += 50;
	}
	x = 725; // Restaura las variables
	y = 120;
	texto(x, y, "1"); // Dibuja los números en cada casilla
	texto(x + 50, y, "2");
	texto(x + 100, y, "3");
	texto(x, y + 50, "4");
	texto(x + 50, y + 50, "5");
	texto(x + 100, y + 50, "6");
	texto(x, y + 100, "7");
	texto(x + 50, y + 100, "8");
	texto(x + 100, y + 100, "9");
	texto(x - 5, y + 150, "10");
	texto(x + 33, y + 150, "STOP");

	refresca(); // Funcion refrescar para mostrar los dibujos
}

void tableritos(int totalpisos)
{
	for (int i = 1; i <= totalpisos; i++)
	{ // Dibuja los tableros externos del ascensor segun el unmero total ed pisos
		color(AZUL);
		rectangulo(l * 9.05, i * l, l * 9.05 + 40, i * l + l); // Dibuja el borde
		linea(l * 9.05, i * l + l / 2, l * 9.05 + 40, i * l + l / 2);
		color(AMARILLO);
		linea(l * 9.05 + 5, i * l + l / 2 - 3, l * 9.05 + 20, i * l + l / 4 - 3); // dibuja las flechas
		linea(l * 9.05 + 20, i * l + l / 4 - 3, l * 9.05 + 35, i * l + l / 2 - 3);

		linea(l * 9.05 + 5, i * l + l / 2 - 3, l * 9.05 + 35, i * l + l / 2 - 3);

		linea(l * 9.05 + 5, i * l + l / 2 + 3, l * 9.05 + 35, i * l + l / 2 + 3);

		linea(l * 9.05 + 5, i * l + l / 2 + 3, l * 9.05 + 20, i * l + 3 * l / 4 + 3);
		linea(l * 9.05 + 20, i * l + 3 * l / 4 + 3, l * 9.05 + 35, i * l + l / 2 + 3);
	}
	refresca(); // Funcion refrescar para mostrar los dibujos
}

void cuadricula(float x, float y)
{ // Funcion para pocisionamiento
	for (int i = 0; i < 950; i += l)
		linea(0, i, 950, i);
	for (int i = 0; i < 950; i += l)
		linea(i, 0, i, 950);
	refresca(); // Funcion refrescar para mostrar los dibujos
}

int main()
{

	float x(10), y(10), rangox(0), rangoy(0);				// Variables iniciales de pocision y rangos para la seleccion con el raton
	int pisoactual(1), usuario(1), totalpisos = 10; // Variables para configuracion del ascensor

	vredimensiona(950, 600); // Funcion para configurar el tamaño de la pantalla
	edificio(totalpisos);		 // Llamado a la funcion para dibujar el edificio
	tablero();							 // Llamado a la funcion para dibujar el tablero
	tableritos(totalpisos);	 // Llamado a la funcion para dibujar los tableros externos
	//	cuadricula(x,y);

	do
	{ // Ciclo de repeticion de pisos

		elevador(pisoactual, usuario, totalpisos); // Llamado a la funcion para mover el elevador
		pisoactual = usuario;											 // Iguala las dos variables al finalizar el movimiento

		for (;;)
		{ // Ciclo infinito hasta que se de click izquierdo en algun boton del tablero
			if (raton(x, y))
			{
				if (raton_boton_izq())
				{
					rangox = raton_x(); // Limitacion de la posicion del mouse
					rangoy = raton_y();

					int i = 10, j = -1, s = 50; // Variables para utilizar en la ubicacion de los botones como matrices

					if (700 < rangox && rangox < 1000)
					{
						if (100 < rangoy && rangoy < 400)
						{

							for (int b = 100; b <= rangoy; b += s)
							{
								i = 0;
								for (int a = 700; a <= rangox; a += s)
								{
									i++;
								}
								j++;
							}
							if (250 < rangoy && rangoy < 300 && i == 2)
							{
								usuario = 0;
								mensaje("EMERGENCIA, LLAMA A LOS BOMBEROS");
								borra();
								refresca(); // Llamado a la funcion para mostrar los dibujos
								for (int c = 0; c < 10; c++)
								{																		 // Ciclo para la impresion con distintos colores de emergencia
									color_rgb(rand(), rand(), rand()); //
									rectangulo_lleno(0, 0, 950, 600);	 // Cuadro para rellenar la pantalla
									color_rgb(rand(), rand(), rand()); // Colores aleatorios
									texto(450, 300, "�EMERGENCIA!");	 // Imprime emergencia en pantalla
									refresca();												 // Llamado a la funcion para mostrar los dibujos
									espera(250);											 // Funcion para que el programa espere los milisegundos dentro del parentesis
									borra();													 // Borra todo lo que hay en pantalla
									espera(250);											 // Funcion para que el programa espere los milisegundos dentro del parentesis
								}
								vcierra(); // Funcion para cerrar la ventana
							}
							usuario = i + 3 * j;
						}
					}

					else if (452.5 < rangox && rangox < 492.5)
					{
						if (50 < rangoy && rangoy < 550)
						{
							int k = 11;
							for (int b = 50; b <= rangoy; b += 50)
								k--;
							usuario = k;
						}
					}
					break;
				}
			}
		}
	} while (usuario != 0); // Ciclo mientrsa la opcion no sea STOP

	refresca(); // Llamado a la funcion para mostrar todos los dibujos

	return 0; // Retorno de la funcion principal
}
