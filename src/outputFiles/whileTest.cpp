#include "entorno_shol.h"

int main(){
inicio();

marca_sensor(100,100,temperatura,"A");
marca_sensor(100,180,humo,"H");
desactivar_actuador(250,100,luz,"L_1");
desactivar_actuador(250,200,luz,"L_2");
desactivar_actuador(100,320,alarma,"B");
valor_sensor(100,100,temperatura,25.5);
valor_sensor(100,180,humo,0.3);

fin()
return 0;
}