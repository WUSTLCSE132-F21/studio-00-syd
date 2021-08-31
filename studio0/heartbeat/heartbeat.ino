/* heartbeat
 * once per second--
 * print <n> sec have elapsed
 *
 */

void setup() {
  //establishes bit communication between computer and board
  Serial.begin(9600);
  //make pin ready to write
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, LOW);
  //0.5 second delay
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  //establish counter variable
  int time = (millis()/1000) + 1;
  //output designated line
  Serial.print(time);
  Serial.println(" second(s) have elapsed");
}
