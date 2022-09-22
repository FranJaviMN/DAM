Algoritmo calculo_PVP
	Definir precio_producto Como Real
	Definir porcentaje Como Real
	Definir precio_total Como Real
	
	Escribir "Introduzca el precio del producto: "
	Leer precio_producto
	Escribir "Introduzca el porcentaje de aumento: "
	Leer porcentaje
	
	Mientras precio_producto < 0 y porcentaje <0 Hacer
		Escribir "Introduzca el precio del producto: "
		Leer precio_producto
		Escribir "Introduzca el porcentaje de aumento: "
		Leer porcentaje
	Fin Mientras
	
	porcentaje = (porcentaje/100)+1
	
	precio_total = porcentaje*precio_producto
	
	Escribir "El coste con el aumento del ",porcentaje,"% es de ",precio_total,"euros"
	
FinAlgoritmo