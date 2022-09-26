Algoritmo calculo_perimetro_cuadrado
	
	//Definir las variables necesarias, en este caso solo necesitamos el lado del cuadrado y el perimetro del cuadrado
	
	Definir lado_cuadrado Como Real
	Definir perimetro_cuadrado Como Real
	
	Escribir "Dime el valor del lado del cuadrado: "
	leer lado_cuadrado
	
	// Comprobamos que el valor del lado del cuadrado no sea 0 o un numero negativo
	
	Mientras lado_cuadrado <= 0 Hacer
		Escribir "El lado del cuadrado no puede ser negativo o 0, introduzca de nuevo el valor del lado del cuadrado: "
		Leer lado_cuadrado
	FinMientras
	
	//Calculamos el valor del perimetro del cuadrado.
	
	perimetro_cuadrado = lado_cuadrado*4
	
	Escribir "El perimetro del cuadrado de lado ",lado_cuadrado, " es de ",perimetro_cuadrado
	
FinAlgoritmo
