const int pinKaftor = 2;
const int pinLed = 3;

bool haimDolek = false;

void setup() {
  pinMode(pinKaftor, INPUT_PULLUP);
  pinMode(pinLed, OUTPUT);
  digitalWrite(pinLed, LOW);
}

void loop() {
  int erechKaftor;

  // hamten shehakaftor yilachetz, ve-az haerech yihyeh LOW.
  do {
    erechKaftor = digitalRead(pinKaftor);
  } while (erechKaftor != LOW);

  // hafoch et mazav ha-led.
  haimDolek = !haimDolek;
  if (haimDolek) {
    digitalWrite(pinLed, HIGH);
  } else {
    digitalWrite(pinLed, LOW);
  }

  // hamten lesiyum kiputz.
  delay(50);

  // hamten shehakaftor yeshuchrar, ve-az haerech yihyeh HIGH.
  do {
    erechKaftor = digitalRead(pinKaftor);
  } while (erechKaftor != HIGH);

  // hachnisu et hakod lebizua hapeula be'et shichrur:
  // (bederech klal lo yihye po klum.)

  // hamten lesiyum kiputz.
  delay(50);

}
