// Librerias//

#include "mbed.h"
#include "arm_book_lib.h"

// Declaracion e inicilizacion de objetos globales publicos //

DigitalIn botonAvanzar(D2);
DigitalIn botonAtras(D3);
DigitalIn botonDerecha(D4);
DigitalIn botonIzquierda(D5);
DigitalIn botonEnter(D6);
DigitalIn echoUltrason(D7);
DigitalIn encoderDerecha(D8);
DigitalIn encoderIzquierda(D9);

DigitalOut motorH1(D10);
DigitalOut motorH2(D11);
DigitalOut triggerUltras(D12);
DigitalOut ledVerde(D13);
DigitalOut ledRojo(D14);

//    Declaracion e inicializacion de variables globales publicas//

//  Prototipos de funciones  //
void inputInit();
void outputInit();

int main()
{

}

// Implementacion de funciones publicas //

void inputInit()  {
  botonAvanzar.mode(PullDown);
  botonAtras.mode(PullDown);
  botonDerecha.mode(PullDown);
  botonIzquierda.mode(PullDown);
  botonEnter.mode(PullDown);
  echoUltrason.mode(PullDown);
  encoderDerecha.mode(PullDown);
  encoderIzquierda.mode(PullDown);
  }

void outputinit()  {
  motorH1 = OFF;
  motorH2 = OFF;
  triggerUltras= OFF;
  ledVerde = OFF;
  ledRojo = OFF;
  }

void modosUpdate()  {
  switch(modoActual)  {
    case EN_PROGRAMACION:
      programacion();
      break;
    case EN_MARCHA:
      marcha();
      break;
  }

      





