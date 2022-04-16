//Alunos: Luana Freitas, Vinicius Poloniato e Raul Vagmacker.
//Enunciado: Desenvolva um sistema para o controle de dois servomotores utilizando potenciômetros. 

int valor_pot1 = 0;
int valor_pot2 = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  valor_pot1 = analogRead(A0);
  valor_pot1 += map(valor_pot1, 0, 1023, 0, 180);
  analogWrite(9, valor_pot1);
  
  valor_pot2 = analogRead(A1);
  valor_pot2 += map(valor_pot2, 0, 1023, 0, 180);
  analogWrite(10, valor_pot2);
  
  
  delay(10);
}
