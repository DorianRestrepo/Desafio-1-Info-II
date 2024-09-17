const int Generador = A0;

int ReadGen = 0;
unsigned long TimeR;
unsigned long TimeA, TimeB;
int Pass = 0;
float DeltaT = 0.0, Hercios = 0.0;

int Max, Min;
float Amplitud;

void setup() {
    Serial.begin(9600);
}

void loop() {
    ReadGen = analogRead(Generador);
    TimeR = millis();

    /*  if (ReadGen == 0) {
    switch (Pass) {
      case 0:
        TimeA = TimeR;
        Pass = 1;
        delay(50);  // Pequeña pausa para estabilizar la señal
        break;

      case 1:
        Pass = 2;
        delay(50);  // Otra pequeña pausa
        break;

      case 2:
        TimeB = TimeR;
        DeltaT = (TimeB - TimeA) / 1000.0;  // Convertir tiempo a segundos
        if (DeltaT > 0) {  // Asegurar que no hay división por 0
          Hercios = 1.0 / DeltaT;  // Calcular frecuencia
          Serial.print(Hercios);
          Serial.println(" Hz");
        }
        Pass = 0;
        break;
    }
  }*/
    if(Max < ReadGen){
        Max = ReadGen;
        Max = Max/100;
        Serial.print("Voltaje: ");
        Serial.print(Max);
        Serial.println("V");
        delay(50);
        delay(50);
    }
}
