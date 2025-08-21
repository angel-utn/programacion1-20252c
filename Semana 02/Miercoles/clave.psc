Algoritmo sin_titulo
	CLAVE_REAL = 556
	Escribir "Ingese la clave:"
	Leer clave
	Si clave == CLAVE_REAL Entonces
		Escribir "Acceso aceptado!"
	SiNo
		Escribir "Clave incorrecta... Ingrese otra: "
		Leer clave
		Si clave == CLAVE_REAL Entonces
			Escribir "Acceso aceptado!"
		SiNo
			Escribir "Clave incorrecta... Ingrese otra: "
			Leer clave
			Si clave == CLAVE_RAL Entonces
				Escribir "Acceso aceptado!"
			SiNo
				Escribir "Acceso debegado..."
			FinSi
		FinSi
	FinSi
FinAlgoritmo
