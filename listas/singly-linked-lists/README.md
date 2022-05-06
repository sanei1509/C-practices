# Listas simplemente enlazadas

## Introdución 
 Las listas en enlazadas son útiles cuando necesitamos hacer operaciones de inserción y eliminación de elementos.

## ¿Que son en realidad ?

Las listas enlazadas son estructuras de datos como los ARRAYS, a diferencia
que el acceso no se hace mediante un indice sino que es mediante *puntero.

Mientras que en un array los elementos estan guardados de forma contigua en la memoria,en una **lista** los elementos están dispersos tenemos que asegurarnos de no perder ninguna conexión de nuestra lista enlazada.

El último elemento debe apuntar a NULL

El puntero ** *next ** permite que nos desplacemos al próximo elemento 

[DATO] si necesitas o deseas moverte en ambas direcciones deberías usar las listas doblementes enlazadas donde se añade un puntero ** *prev ** a cada elemento.

## Construcción de una Lista enlazada

Para definir un elemento dela lista, debemos usar el [tipo] ** struct **
 - el elemento de la lista contendrá un campo *dato[char] 
 - el puntero *next, *sig o como quieras llamarle debe ser del mismo tipo que el nodo/elemento : 
de no ser asi no podríamos apuntarlo al siguiente nodo/elemento.

Estructura:

````c
	typedef struct Lista_elementos 
	{
		char *dato;
		struct Lista_elementos *next;
	}Elemento;
````

### ¿ Como tener mayor control sobre la lista ?

 - Deberíamos guardar ciertos elementos como:
	- El primer elemento **( HEAD )**
	- El último elemento **( TAIL )**
	- El número de elementos **(LENGTH)**

## Operaciones sobre lista enlazadas

 ###1 INSERTAR UN ELEMENTO A LA LISTA 
	- Algoritmo para realizar esta operación:
		* Declarar el elemento/nodo a insertar.
		* Asignar memoria justa para el nuevo elemento
		* Rellenar el contenido del campo de datos (probablemente lo recibamos)
		* Actualizar los punteros hacia el primer y ultimo elemento (si los creamos)
	-CASO BORDES EN ESTA OPERACIÓN:
		*inseción en una ** lista vacía **
		*inserción al ** inicio de la lista **
		*inserción al ** final de  la lista **
		*inserción en otra parte de la lista

	1.1 La lista esta vacía
	ejemplo prototipo de la función:
		````c
		Lista_elementos ins_en_lista_vacia (Lista_elementos **head *dato);	
		````
 	* asignar memoria
	* rellenar campo de data del nuevo elemento
	* el puntero *next del nuevo elemento debera apuntar a NULL:
	* puntero *inicio y *fin, los **Reapuntaríamos** hacía el nuevo elemento


