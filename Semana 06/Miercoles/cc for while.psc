Algoritmo sin_titulo
	Para I<-1 Hasta 4 Con Paso 1 Hacer
		C = 0
		Escribir 'INICIO DE CARGA DE LA MATERIA'
		Escribir 'Materia: '
		Leer M
		Mientras M!=0 Hacer
			Escribir 'Legajo: '
			Leer L
			Escribir 'Nota: '
			Leer N
			Si N>=6 Entonces
				C = C+1
			FinSi
			Escribir 'Materia: '
			Leer M
		FinMientras
		Escribir 'FIN DE CARGA DE LA MATERIA'
		Escribir 'La cantida de aprobados son: ',C
	FinPara
	Escribir 'FIN DEL PROGRAMA'
FinAlgoritmo
