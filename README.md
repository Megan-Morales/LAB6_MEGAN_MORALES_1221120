# Ordenamientos

Existen más de 800 Pokémon cada uno con diferente generación y región. Tomando
como base el siguiente sitio:
https://bulbapedia.bulbagarden.net/wiki/List_of_Pok%C3%A9mon_by_National_Pok%C
3%A9dex_number
Donde se encuentran categorizados por Nombre, National number y la generación.
Genere una solución en lenguaje de programación C++ que permita crear un archivo
de texto separado por comas con una línea por cada Pokémon de la siguiente forma
National Number, Nombre y Generación e incluir al menos 10 Pokémon de cada
generación con la información descrita anteriormente.
La aplicación debe tener una opción para cargar un archivo de texto separado por
comas, con el siguiente formato (una línea por Pokémon):
NationalNumberPKMN1, NombrePKMN1, GeneraciónPKMN1
NationalNumberPKMN2, NombrePKMN2, GeneraciónPKMN2
NationalNumberPKMN3, NombrePKMN3, GeneraciónPKMN3
Una vez cargado el archivo, crear una lista simple con todos los Pokémon leídos del
archivo. Debe de crear la clase Pokémon para guardar la información de cada
registro.
El formulario también debe contar con opciones para escoger los siguientes criterios
de orden:
o Ordenar por generación
o Por número de generación (ascendente) pero como los números se
pueden repetir se tomará un segundo factor en cuenta (Nombre)
también de forma ascendente.
o Ordenar por National number
o Es un número único y debe ordenarse de forma ascendente.
Y el tipo de ordenamiento a utilizar entre los siguientes:
o Selection Sort
o Quick Sort
o Shell Sort
Para los ordenamientos debe crear una clase llamada “Orden” y contener los tres
métodos de ordenamiento.
Debe mostrarse el resultado del ordenamiento incluyendo los 3 valores almacenados
para cada Pokémon y mostrar el tiempo que el ordenamiento ha tomado utilizando la
clase StopWatch.
Ejemplo
Archivo
155,Cyndaquil,2
2,Ivysaur,1
4,Charmander,1
Ordenado por generación
4,Charmander,1
2,Ivysaur,1
155,Cyndaquil,2
Ordenado por National Number
2,Ivysaur,1
4,Charmander,1
155,Cyndaquil,2
