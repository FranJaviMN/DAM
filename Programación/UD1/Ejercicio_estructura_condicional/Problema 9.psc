Algoritmo numero_dos_cifras
	
	//Definimos la variable que necesitamos
	Definir numero_cifras Como Real
	
	Escribir "Introduzca un numero entre 0 y 99: "
	Leer numero_cifras

	//Definimos la condición donde vemos si el numero es de 1 o 2 cifras
	
	Si numero_cifras == 0 y numero_cifras <=9 Entonces
		Escribir "El numero tiene 1 cifra"
	Sino
		si numero_cifras < 100 y numero_cifras >= 10 Entonces
			Escribir "El numero es de 2 cifras"
		FinSi
	FinSi
	
	
	
FinAlgoritmo
