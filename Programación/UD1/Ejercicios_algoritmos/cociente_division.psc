Algoritmo cociente_division
	Definir Dividendo Como Real
	Definir Divisor Como Real
	Definir resultado Como Real
	Definir Resto Como Real
	
	Escribir "Dime el dividendo de la division: "
	Leer Dividendo
	
	Escribir "Dime el divisor de la division: "
	Leer Divisor
	
	Mientras Dividendo <= 0 Hacer
		Escribir "El dividendo no puede ser 0 o menos que 0, introduzca un numero valido: "
		Leer Dividendo
	Fin Mientras
	
	resto = Dividendo/Divisor
	
	Si resto = 0 Entonces
		Escribir "La division de ",Dividendo," entre ",Divisor," es ",Dividendo/Divisor
	SiNo
		Escribir "La division de ",Dividendo," entre ",Divisor," es ",Dividendo/Divisor
		Escribir "Y de resto ",resto
	Fin Si
	
FinAlgoritmo
