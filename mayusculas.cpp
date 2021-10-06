main() 
{ 
char minuscula, mayuscula; 
/* Lectura de datos: minuscula. */ 
 
printf ("Introduce un caracter en minuscula: "); 
scanf ("%c", &minuscula); 
 
/* Proceso: transformacion a mayuscula */ 
 
mayuscula = minuscula - 32; 
 
/* Salida */ 
 
printf ("El caracter %c en mayuscula es %c\n", minuscula, mayuscula); 
}