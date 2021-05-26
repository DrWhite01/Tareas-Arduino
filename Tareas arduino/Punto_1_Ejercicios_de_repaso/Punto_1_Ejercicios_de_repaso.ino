#define RL1 2
#define YL1 3
#define GL1 4

#define RL2 5
#define YL2 6
#define GL2 7

void setup()
{
  pinMode(RL1, OUTPUT);
  pinMode(YL1, OUTPUT);
  pinMode(GL1, OUTPUT);
  pinMode(RL2, OUTPUT);
  pinMode(YL2, OUTPUT);
  pinMode(GL2, OUTPUT);
}

void loop()
{
  digitalWrite(RL1, HIGH);
  digitalWrite(GL2, HIGH);
  delay(10000);
  digitalWrite(GL2, LOW);
  digitalWrite(YL2, HIGH);
  delay(2000);
  digitalWrite(YL2, LOW);
  digitalWrite(RL2, HIGH);
  digitalWrite(RL1, LOW);
  digitalWrite(GL1, HIGH);
  delay(10000);
  digitalWrite(GL1, LOW);
  digitalWrite(YL1, HIGH);
  delay(2000);
  digitalWrite(YL1, LOW);
  digitalWrite(RL2, LOW);
}
