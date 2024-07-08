# Robot con Guiado diferencial por Odometria.
## Alumno : Jose Maria Giachino        josegiachino@yahoo.com.ar
### *Descripcion:*

Lograr un robot móvil que describa trayectorias precargadas para uso en niveles de educación inicial para tecnologías TIC. 

El mismo dispondrá de 2 motores para impulsarse, y un conjunto de pulsadores para ingresar los comandos. 

El set de comandos está compuesto por segmentos de rectas fijos ( uno para avance y otro para retroceso ) y giros a 90 grados (sin desplazamiento ) en ambas direcciones.

Los desplazamientos y giros estarán definidos en base a las lecturas de los encoders, como una calibración inicial protegida por contraseña. 

Tendrá un sensor ultrasónico de distancia para detectar colisiones frontales. 

Tendra un led que cambiara de color segun la distancia detectada a un obstaculo: 

Apagado : Distancia segura 
Verde : Detectado pero con margen aceptable. 
Rojo : Demasiado cerca, apagado de motores. 

A través del puerto serie, en pequeños desplazamientos, se recibirá las coordenadas estimadas del robot desde el punto de inicio, calculadas por los encoders de cada motor.


### Plataforma de desarrollo: 
NUCLEO-F429ZI

### Periféricos a Usar:

2 motores de corriente continua. 

1 Circuito puente H   (2 DO Gpio)

2 encoders incrementales.(2 DI Gpio) 

1 led bicolor (2 DO Gpio) 

5 pulsadores (5 DI Gpio) 

1 sensor ultrasónico de distancia ( 1 Di GPIO)

UART : Enviará coordenadas de posición estimada a la pc.

### Diagrama en bloques: 



