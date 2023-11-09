class minseo extends charac {
  minseo() {
    super();
  }
  minseo(float p, float q, float r) {
    super(p, q, r);
  }

  void collide_1(minseo a) {    //같은 class에서 충돌 구현+ 충돌하면 캐릭터 안보이게
    float dd;
    dd = sqrt((x-a.x)*(x-a.x) + (y-a.y)*(y-a.y));
    if (dd < (5*d + 5*a.d)) {
      isVisible = false;
      a.isVisible = false;
    }
  }
  void collide_2(yong a) {    //다른 class에서 충돌 구현
    float dd;
    dd = sqrt((x-a.x)*(x-a.x) + (y-a.y)*(y-a.y));
    if (dd < (5*d + 10*a.d)) {
      isVisible = false;
    }
  }

  void display_minseo() {
    if (isVisible) {
      strokeWeight(d*4);
      stroke(255, 255, 255);
      fill(0);
      circle(x-6*d, y-7*d, 8*d);
      circle(x+6*d, y-7*d, 8*d);
      strokeWeight(1);
      fill(255); //white
      circle(x, y, 20*d);
      fill(0, 0, 0);
      ellipse(x-5*d, y-2*d, 1.5*d, 2.5*d);
      ellipse(x+5*d, y-2*d, 1.5*d, 2.5*d);
      ellipse (x, y, 2*d, 1.5*d);
    }
  }
}
