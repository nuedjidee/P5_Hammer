
void readsensor() {
  dl = digitalRead(A0);
  dr = digitalRead(A1);
  dc = digitalRead(A2);
}
void showd() {
  Serial.print(dl);
  Serial.print("//");
  Serial.print(dr);
  Serial.print("//");
  Serial.print(dc);
  Serial.println("//");
}