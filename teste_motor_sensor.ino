// motores
#define D1    5
#define D2    4
#define D3    0
#define D4    2

// sensor frente
#define D5    14
// sensor baixo
#define D6    12 

int bxo = 0;
int fre = 0;


void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(D4, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D6, INPUT);
  pinMode(D5, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
    // digitalWrite(5, LOW);
    // digitalWrite(4, HIGH);
    // digitalWrite(0,LOW);
    // digitalWrite(2, HIGH);
  bxo = digitalRead(D6);
  fre = digitalRead(D5);

  delay(500);
  if (bxo != 1){
    Serial.println(0);
    digitalWrite(D1, LOW);
    digitalWrite(D2, HIGH);
    digitalWrite(D3, LOW);
    digitalWrite(D4, HIGH);
  } else {
    Serial.println(1);
    digitalWrite(D1, HIGH);
    digitalWrite(D2, LOW);
    digitalWrite(D3, HIGH);
    digitalWrite(D4, LOW);
  }
  delay(500);
  if (fre != 1){
    Serial.println(2);
    digitalWrite(D1, HIGH);
    digitalWrite(D2, HIGH);
    digitalWrite(D3, HIGH);
    digitalWrite(D4, HIGH);
  }
  Serial.println(3);
}