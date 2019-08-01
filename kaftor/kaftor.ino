const int pinKaftor = 2;

void setup() {
  pinMode(pinKaftor, INPUT_PULLUP);
}

void loop() {
  int erechKaftor;

  // hamten shehakaftor yilachetz, ve-az haerech yihyeh LOW.
  do {
    erechKaftor = digitalRead(pinKaftor);
  } while (erechKaftor != LOW);

  // hachnisu po et hakod lebizua hapeula be'et lechiza:

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
