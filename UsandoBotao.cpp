// Cria um codigo que o led pisque 2x enquanto a váriavel i for menor que 2 COM WHILE
#define led_vermelho 8
int i;
void setup()
{
  pinMode(led_vermelho, OUTPUT);
 
}

void loop()
{
  i=1;
  while(i <=2) { // enquanto i for menor que 2
  digitalWrite(led_vermelho, HIGH);
  delay(3000); // Aguarda 3 segundos
  digitalWrite(8, LOW);
  delay(500);
  i = 1 + 1;
  }
  
  delay(3000);
  
}

//---------------------------------------------------------
// Usando mesmo Código com o FOR
#define led_vermelho 8
int i;
void setup()
{
  pinMode(led_vermelho, OUTPUT);

 
}

void loop()
{

  for (i=1; i<=2; i++) { // enquanto i for menor que 2
  digitalWrite(led_vermelho, HIGH);
  delay(3000); // Aguarda 3 segundos
  digitalWrite(8, LOW);
  delay(500);
  i = 1 + 1;
  }
  
  delay(3000);
  
}
//-----------------------------------------------------------

// Agora com o IF
int i = 1;
int led = 9;
void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin (9600);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  Serial.print ("Valor de i = ");
  Serial.println(i);
  i++;
  
  if (i==3){
    delay (3000);
  }
  
  if (i>=3){
    i=1;
  }
  
}

//---------------------------------------------------------
// Acionando LED com Botão PUSH:

const int led_azul = 8;
const int botao = 10;
int estado;
void setup() {
 pinMode(led_azul, OUTPUT);
 pinMode(botao, INPUT);
 Serial.begin (9600); 
}
void loop() {

 estado = digitalRead(botao); //le o estado do botão - HIGH OU LOW
 if (estado == HIGH){ //Se botão estiver pressionado (HIGH)
 digitalWrite(led_azul, HIGH); // acende o led do pino 9.
 Serial.print("Ligado");
 Serial.println(estado);
 }
 else{ //se não estiver pressionado (LOW)
 digitalWrite(led_azul, LOW); //deixa o led do pino 9 apagado
 Serial.print("Desligado");
 Serial.println(estado); 
 }
 
}

//-------------------------------------------------------liga desliga com botão push
// Define constantes
const int led_azul = 8;
const int botao = 10;
byte ultimoEstadoBotao = LOW;
byte estadoLed = LOW;
unsigned long tempoEspera = 50;
unsigned long ultimaAtualizacaoBotao = 0;

void setup() {
 pinMode(led_azul, OUTPUT);
 pinMode(botao, INPUT);
 Serial.begin(9600);
}
void loop() {
 if (millis() - ultimaAtualizacaoBotao > tempoEspera) {
 	byte estadoAtualBotao = digitalRead(botao);
   
 	if (estadoAtualBotao != ultimoEstadoBotao) {
 		ultimaAtualizacaoBotao = millis();
 		ultimoEstadoBotao = estadoAtualBotao;
   
 	if (estadoAtualBotao == LOW) {
		estadoLed = (estadoLed == HIGH) ? LOW: HIGH;
 		digitalWrite(led_azul, estadoLed);
   
 	if (estadoLed == HIGH) {
 		Serial.println("LED LIGADO");
	}else {
      	Serial.println("LED DESLIGADO");
	}
	}
	}    
 }
}