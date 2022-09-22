Algoritmo calculo_vuelta
	Definir peso_producto Como Real
	Definir precio_kilogramo como Real
	Definir precio_total Como Real
	Definir dinero_introducido Como Real
	
	Escribir "Introduzca el peso del producto: "
	leer peso_producto
	
	Escribir "Introduzca el precio por Kilogramo: "
	leer precio_kilogramo
	
	precio_total = peso_producto*precio_kilogramo
	
	Escribir "El precio total es de ", precio_total, " Euros, ¿Con cuanto va a pagar?: "
	leer dinero_introducido
	
	Mientras dinero_introducido < precio_total Hacer
		Escribir "La cantidad no es valida, introduzca una cantidad valida: "
		Leer dinero_introducido
	Fin Mientras
	
	Escribir "Se le devuelven ",dinero_introducido - precio_total, " Euros."
	
FinAlgoritmo
