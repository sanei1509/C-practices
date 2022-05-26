#include "hash_tables.h"
/**
* hash_djb2 - implementación del algoritmo djb2
* @str: cadena utilizada para generar valor hash
*
* Retorno: valor hash
*/
unsigned  long  int  hash_djb2 ( const  unsigned  char *str)
{
	 Hash int largo  sin firmar ;
	intc ;

	hash = 5381 ;
	mientras ((c = *cadena++))
	{
		hash = ((hash << 5 ) + hash) + c; /* hash * 33 + c */
	}
	retorno (hash);
}