bool ff = 1;
void go(int d) {
  md(190,190);
  delay(60);
  while (1) {
    readsensor();
    if (dc == 1) {
      delay(d);
      md(0, 0);
      break;
    } else if (dl == 1) {
      md(0, spdturn);
    } else if (dr == 1) {
      md(spdturn, 0);
    } else {
      if (ff) {
        md(spd, spd);delay(5);
        ff = 0;
      } else {
        md(50, 50);delay(5);
        ff = 1;
      }
    }
  }
}

void gap() {
  md(140, 140);
  delay(120);
}
void r() {
  md(spdUturn, -spdUturn);
  delay(turndelay);
  readsensor();
  while (dr == 0) { readsensor(); }
  md(0, 0);
}
void l() {
  md(-spdUturn, spdUturn);
  delay(turndelay);
  readsensor();
  while (dl == 0) { readsensor(); }
  md(0, 0);
}
void uturn() {
  if (invertkickkock) {
    kock();
    kick();
  } else {
    kick();
    kock();
  }
  md(-240, -240);
  delay(deback);
  r();
}
