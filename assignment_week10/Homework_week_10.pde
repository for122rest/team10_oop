minseo [] aa;
yong [] bb;
void setup() {
  size(1000, 800);
  aa = new minseo[3];
  for (int i=0; i<3; i++) {
    aa[i] = new minseo(random(width), random(height), random(1, 10));
  }
  bb = new yong[3];
  for (int i=0; i<3; i++) {
    bb[i] = new yong(random(width), random(height), random(1, 10));
  }
}

void draw() {
  background(189, 189, 189);
  for (int i=0; i<3; i++) {
    if (aa[i].isVisible) {
      for (int j=i+1; j<3; j++) {
        aa[i].collide_1(aa[j]);
      }
      for (int j=0; j<3; j++) {
        aa[i].collide_2(bb[j]);
      }
      aa[i].display_minseo();
      aa[i].wall();
    }

    if (bb[i].isVisible) {
      for (int j=i+1; j<3; j++) {
        bb[i].collide_3(bb[j]);
      }
      bb[i].display_yong();
      bb[i].wall();
    }
  }
}
