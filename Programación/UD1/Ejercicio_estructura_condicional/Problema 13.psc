Algoritmo numero_3_cifras

	//Definimos las variables, en este caso solo 1
	
	Definir numero_cifras Como Entero
	
	Escribir "Dime un numero positivo: "
	Leer numero_cifras

	//Creamos la condición donde vamos a ver la cantidad de cifras que tiene el numero introducido.
	
	Si numero_cifras == 0 y numero_cifras <=9 Entonces
		Escribir "El numero tiene 1 cifra"
	Sino
		si numero_cifras < 100 y numero_cifras >= 10 Entonces
			Escribir "El numero es de 2 cifras"
		SiNo
			si numero_cifras < 1000 y numero_cifras >=100 Entonces
				Escribir "El numero es de 3 cifras"
			SIno
				Escribir "El numero es mayor de tres cifras o es menor que 0"
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo
