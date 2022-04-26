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


// Agora com o IF
Marly Salim08:40
Bom dia pessoal!! Que nosso dia seja abençoado.
Júlio César Leitão Júnior | Facti08:40
Olá, bom dia

Para um melhor aproveitamento dos nossos encontros temos algumas orientações:

Respeito aos horários é super importante, para que a gente cumpra todo o conteúdo do curso.
Câmeras abertas o tempo todo ao longo do curso, para uma maior interação com o instrutor, simulando assim uma sala de aula real. Esse é um requisito obrigatório de evidência de sua participação.
Perguntas e interações, você poderá interagir com o instrutor o tempo todo, para tirar as suas dúvidas. Lembre-se que perguntas são sempre bem-vindas, pois as suas dúvidas podem ser também as dos demais. 
Chat- Você poderá interagir via mensagens, só pedimos, por favor, que os assuntos sejam exclusivamente relacionados ao curso.
Microfone- Você também poderá interagir através da fala, que é bem legal. Deixe o microfone fechado e o abra somente no momento da interação, para não interferir no áudio do instrutor.
E-mails para contatos com a Organização e Suporte:

Para assuntos pedagógicos ou dúvidas sobre o curso envie um e-mail para: organizacao.qualifacti@facti.com.br
Dúvidas sobre problemas técnicos, envie um e-mail para: suporte.qualifacti@facti.com.br
Sugestões ou outros assuntos, envie um e-mail para: qualifacti@facti.com.br
Patrícia Bertholino08:55
Bom dia
Júlio César Leitão Júnior | Facti08:55
Bom dia Patrícia!
Patrícia Bertholino08:55
Só consegui acessar agora... 
Estou tendo problema fazer o login na plataforma
Não carrega, mesmo que mude de navegador
Não carrega nem mesmo pelo celular
Júlio César Leitão Júnior | Facti08:57
entendi...
que estranho....mas agora está funcionando normal né?
Patrícia Bertholino08:57
Não
Entrei pelo meu histórico de navegação
Aí peguei o link
Júlio César Leitão Júnior | Facti08:58
que estranho.
Patrícia Bertholino08:58
Bom dia Adriana
Caiu aqui depois da aula de ontem a tarde
Mas achei que tinha sido minha internet, mas hj não consegui entrar
Júlio César Leitão Júnior | Facti08:59
a plataforma você acessou?
Patrícia Bertholino09:00
Não
Entrei pelo link do meet
A página da plataforma não está carregando aqui e diz que não está disponível
Júlio César Leitão Júnior | Facti09:01
entendi.
Por favor:
você consegue mandar um email à suporte.qualifacti@facti.com.br
perguntar se está havendo problema no seu login.
Eduardo Correia09:01
tem como aumentar a letra pfvr?
Patrícia Bertholino09:02
Mas o problema não é meu login, é a página de login que nem mesmo quer abrir
Eduardo Correia09:02
isso
obrigado
não
Júlio César Leitão Júnior | Facti09:04
Patrícia:  estou tentando acessar o pessoal de suporte para saber mais.

Mesmo assim, parece que sua máquina não loga na página de acesso à plataforma, é isso?
Patrícia Bertholino09:04
Isso
Júlio César Leitão Júnior | Facti09:05
será que houve algum bloqueio do "endereço da Facti"?
Patrícia Bertholino09:05
Vou verificar
Júlio César Leitão Júnior | Facti09:05
perfeito.
obrigado.
Eduardo Correia09:07
pq ele pediu pra tirar o ponto e virgula?
Eduardo Correia09:09
certo entendi
Adriana da Silva Nogueira | Facti09:35
//Nosso objetivo será fazer com que o 
//led pisque 2 vezes em loop, 
//aguarde 3 segundos e pisque 
//2 vezes novamente.

//led vermelho
#define led_verm 4 

int i;

void setup()
{
  pinMode(led_verm, OUTPUT);
}

void loop()//repetição
{
  i=1;
  while (i <=2){
  digitalWrite(led_verm, HIGH);
  delay(1000);
  digitalWrite(led_verm, LOW);
  delay(1000);
  i = i + 1;
  }
  
  delay(3000);
  
}
PAULO SERGIO REIS09:41
Bom dia, Professora Adriana. Cheguei atrasado por conta de força maior.
Gisely Hiromi09:41
foi
PAULO SERGIO REIS09:41
Já programa em C.
Sem problemas, vou ler os tutoriais. Acredito que sejam suficientes para compreensão do curso.
Grato
PAULO SERGIO REIS09:45
Podemos também utilizar um variável de controle no for determinada pelo usuário.
PAULO SERGIO REIS09:52
Esses resistores são iguais e de quantos Homs?
Ohms.
PAULO SERGIO REIS09:55
Enquanto a condição for true os comandos serão eecutados.
Adriana da Silva Nogueira | Facti09:56
//Nosso objetivo será fazer com que o 
//led pisque 2 vezes em loop, 
//aguarde 3 segundos e pisque 
//2 vezes novamente.

//led vermelho
#define led_verm 4 

int i;

void setup()
{
  pinMode(led_verm, OUTPUT);
}

void loop()//repetição
{
  for (i=1; i<=2; i++){
    digitalWrite(led_verm, HIGH);
  	delay(1000);
  	digitalWrite(led_verm, LOW);
  	delay(1000);
  }
  
  delay(3000);
  
}
PAULO SERGIO REIS09:57
Todas as funções no arduino serão void(vazio) de valores?
ok
PAULO SERGIO REIS09:58
ok
grato
Marly Salim10:00
sim
Levi Augusto10:05
data e hora do pc esta ok!?
sim
Você10:14
13
Adriana da Silva Nogueira | Facti10:16
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
  
}
Eduardo Correia10:32
it (i==2)
Silvânio Severino10:33
Inté
Júlio César Leitão Júnior | Facti10:33
Recados:
Visitem nosso site: www.facti.com.br e saibam mais sobre a nossa área de atuação e as vagas que temos disponíveis em https://facti.com.br/trabalhe-conosco/
Siga-nos em nossas redes sociais 
LinkedIn: @facti
Facebook: @facti
Instagram: @factioficial
YouTube: @factioficial
>>> Retornamos às 10:48h
Levi Augusto10:48
ok
Daisy Cesar10:48
ok
Gisely Hiromi10:48
sim
Levi Augusto10:48
ficou
Eduardo Correia10:49
opa
Adriana da Silva Nogueira | Facti10:53
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

//-----------------------
// Define constantes
const int led_azul = 9;
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
 } else {
 Serial.println("LED DESLIGADO");
 }