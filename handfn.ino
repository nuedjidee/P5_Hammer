
void kick() {
  motorHammer.setSpeed(150);
  motorHammer.run(FORWARD);
  delay(400);
  motorHammer.setSpeed(0);
}
void kock() {
  motorHammer.setSpeed(150);
  motorHammer.run(BACKWARD);
  delay(400);
  motorHammer.setSpeed(0);
}
