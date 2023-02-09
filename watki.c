#include <stdio.h>//Standardowa bilbloteka w C ( printf)
#include <pthread.h> //Bilbolteka u¿yta w celu stworzenia watkow
#include<unistd.h> // Bilbolteka u¿yta w celu zastosowania funkcji sleep

void *funcThreadA( void *args )//* PIERWSZY WATEK
{
 int a;
for ( a = 1; a <= 20; a++ )
{
printf( "A\n" );
sleep( 1 );
 }
return 0;
 }

void *funcThreadB( void *args)//* DRUGI WATEK
 {
 int b;
 for ( b = 1; b <= 10; b++ )
{
 printf( "B\n" ); sleep( 2 );
}
return 0;
}
void * funcThreadC( void *args)//* TRZECI WATEK
{
 int c;
for ( c = 1; c <= 5; c++ )
{
printf( "C\n" );
sleep( 3 );
 }
return 0;
 }
int main( void )
{
pthread_t threadA;
pthread_t threadB;
pthread_t threadC;
printf( "Start Programu\n" );
pthread_create( &threadA,NULL,&funcThreadA, NULL );//* A
pthread_create( &threadB, NULL, &funcThreadB, NULL );//* B
pthread_create( &threadC, NULL, &funcThreadC, NULL );//* C
printf( "Glowny program oczekuje..\n" );
pthread_join( threadA, NULL );
pthread_join( threadB, NULL );
pthread_join( threadC, NULL );
printf( "Glowny program konczy\n" );
return 0;
}
