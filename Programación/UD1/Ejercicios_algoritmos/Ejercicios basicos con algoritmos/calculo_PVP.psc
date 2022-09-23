Algoritmo calculo_PVP
	
	//Definimos la variables que necesitamos en este caso vamos a necesitar 3, el precio del producto, el porcentaje de aumento y el precio que debe de tener
	//el producto para ganar ese porcentaje de beneficio.
	
	Definir precio_producto Como Real
	Definir porcentaje Como Real
	Definir precio_total Como Real
	
	Escribir "Introduzca el precio del producto: "
	Leer precio_producto
	Escribir "Introduzca el porcentaje de aumento: "
	Leer porcentaje
	
	//Creamos un bucle donde, si el precio del producto es negativo o el porcentaje es negativo no avanza hasta que introduzca un valor valido.
	
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