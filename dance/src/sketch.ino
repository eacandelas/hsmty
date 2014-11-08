#define LIMITE 10
#define SENSORES 3

int arrayLecturas[SENSORES];
int arrayLecturasAnteriores[SENSORES];



void setup(){
    Serial.begin(9600);
    Serial.println("<<<<<<<Iniciando>>>>>>>>");
   
}


void loop(){
    for (int i = 0; i < (SENSORES - 1); i++){
        int arrayLectura[i] = analogRead(i);
        if (limite(arrayLectura[i],arrayLecturasAnteriores[i], LIMITE)){          
            arrayLecturaAnterior[i] = arrayLectura[i];
            Serial.print(i);
            Serial.print(":");
            Serial.println(arrayLecturaAnterior[i]);

        }
    }
}

int limiteActivado(actual, anterior, limite){
    boolean estadoLimite =  abs(actual - old) > limite;
    if (estadoLimite == True){
        return 1;
    }else{
        return 0;
    }
}
