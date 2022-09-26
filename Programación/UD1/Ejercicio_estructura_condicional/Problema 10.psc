Algoritmo mayor_numero
	
	Definir numero1 Como Real
	Definir numero2 Como Real
	Definir numero3 Como Real
	
	Escribir "Dime 3 numero para comparar: "
	Leer numero1, numero2, numero3
	
	Si numero1 > numero2 y numero1 > numero3 Entonces
		Escribir "El numero ",numero1," es el mayor"
	SiNo
		Si numero2 > numero1 y numero2 > numero3 Entonces
			Escribir "El numero ",numero2," es el mayor"
		SiNo
			Escribir "El numero ",numero3," es el mayor"
		FinSi
	FinSi
	
FinAlgoritmo
