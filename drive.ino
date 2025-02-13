
void md (int sl, int sr) {
  if (sl < 0) {
    motorLeft.run(BACKWARD);
    sl = -sl;
  } else {
    motorLeft.run(FORWARD);
  }
  if (sr < 0) {
    motorRight.run(BACKWARD);
    sr = -sr;
  } else {
    motorRight.run(FORWARD);
  }
  motorLeft.setSpeed(sl);
  motorRight.setSpeed(sr);
}
