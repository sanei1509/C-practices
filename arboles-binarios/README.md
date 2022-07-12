# Estudio de arboles binarios

## pre proyecto holberton -> binary trees

# ¿ Que son los Árboles Binarios?

Son una ``estructura de datos`` que nos permite movernos a través de ``datos ordenados```,

por mitades??

- Arbol por su forma de organización

- Binario porque cada uno de los nodos se relaciona con 2 nodos hijos (máximo).


## ¿Como ordenar datos en un arbol binario?

- primer dato = ``RAÍZ``

compararemos uno por uno con cada uno de los siguientes nodos que deriven del árbol.

## Reglas para construir el arbol binario ordenado: 

- Si es menor va a la izquierda, sino va para la derecha.


            15
        7           18
    3          16        19
2        4



## Reglas para leer un Arbol binario

Si hay nodo a la izquierda
|
--> Pasar al nodo de la izquierda

Si no hay o ya fue visitado
|
--> Agregar el nodo actual a la lista