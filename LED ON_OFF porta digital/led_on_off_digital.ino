// C++ code
//

// Define a porta digital com o valor "13" (onde está conectado)
#define portaDigital 13

void setup()
{
  // Faz o setup na configuração do LED
  // Configura a porta digital
  pinMode(portaDigital, OUTPUT);
}

void loop()
{
  // Manda energia para a porta 
  digitalWrite(portaDigital, HIGH);
  delay(1000); //Aguarda 1 segundo
  
  //Desliga a energia da porta
  digitalWrite(portaDigital, LOW);
  delay(1000); // Aguarda 1 segundo
}