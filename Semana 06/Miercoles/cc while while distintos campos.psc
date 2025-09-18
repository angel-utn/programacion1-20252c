Algoritmo sin_titulo
	Escribir 'Materia: '
	Leer M
	Mientras M!=0 Hacer
		C = 0
		Escribir 'INICIO DE CARGA DE LA MATERIA'
		Escribir 'Legajo: '
		Leer L
		Mientras L!=0 Hacer
			Escribir 'Nota: '
			Leer N
			Si N>=6 Entonces
				C = C+1
			FinSi
			Escribir 'Legajo: '
			Leer L
		FinMientras
		Escribir 'FIN DE CARGA DE LA MATERIA'
		Escribir 'La cantida de aprobados son: ',C
		Escribir 'Materia: '
		Leer M
	FinMientras
	Escribir 'FIN DEL PROGRAMA'
FinAlgoritmo
