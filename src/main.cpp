/*Autor: Denilson Gomes Vaz da Silva
* Graduando em Engenharia de Computação
* Universidade Federal do Ceará - UFC
*
Switch Tilt KY-020: Codigo para ler o valor do sensor de inclinação KY-020.
Caso haja inclinação o sensor manda um sinal em alto, do contrário envia um sinal em baixo.
*/

//Bibliotecas
#include <Arduino.h>

//Variaveis
int sensor = 8; //Variavel sensor no pino 8
int valor; //Variavel para valor do sensor

void setup() {
    pinMode(sensor, INPUT); //Pino sensor como entrada
    Serial.begin(9600); //Inicia comunicação serial
}

void loop() {
    valor = digitalRead(sensor); //Valor recebe a leitura do sensor
    Serial.println(valor); //Exibe o valor da leitura
    delay(3000); //Espera 3 segundos
}