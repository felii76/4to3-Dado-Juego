# define A 2
# define B 3
# define C 4
# define D 5
# define E 6
# define F 7
# define G 8


#define bot 12

int boton, numero;

void uno ()
{
  digitalWrite (A, LOW);
  digitalWrite (B, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (D, LOW);
  digitalWrite (E, LOW);
  digitalWrite (F, LOW);
  digitalWrite (G, LOW);
  delay(500);
}

void dos ()
{
   digitalWrite (A, HIGH);
  digitalWrite (B, HIGH);
  digitalWrite (C, LOW);
  digitalWrite (D, HIGH);
  digitalWrite (E, HIGH);
  digitalWrite (F, LOW);
  digitalWrite (G, HIGH);
  delay(500);
  
  
}

void tres ()
{
  digitalWrite (A, HIGH);
  digitalWrite (B, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (D, HIGH);
  digitalWrite (E, LOW);
  digitalWrite (F, LOW);
  digitalWrite (G, HIGH);
  delay(500);
}

void cuatro ()
{
   digitalWrite (A, LOW);
  digitalWrite (B, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (D, LOW);
  digitalWrite (E, LOW);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
  delay(500);
}

void cinco ()
{
  digitalWrite (A, HIGH);
  digitalWrite (B, LOW);
  digitalWrite (C, HIGH);
  digitalWrite (D, HIGH);
  digitalWrite (E, LOW);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
  delay(500); 
}

void seis ()
{
  digitalWrite (A, HIGH);
  digitalWrite (B, LOW);
  digitalWrite (C, HIGH);
  digitalWrite (D, HIGH);
  digitalWrite (E, HIGH);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
  delay(500);
}


void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  
  randomSeed(analogRead(A0));
}

void loop()
{
  boton = digitalRead(bot);
  
  if(boton == HIGH)
  {
    numero = random (1, 7);
  
    if (numero == 1)
    {
      uno();
    }
    else if (numero == 2)
    {
     dos();
    }
     else if (numero == 3)
    {
     tres();
     }
    else if (numero == 4)
    {
    cuatro();
    }
    else if (numero == 5)
    {
    cinco();
    }
    else if (numero == 6)
    {
     seis();
    }
  }
  delay(50); 
      
}
    
  
  