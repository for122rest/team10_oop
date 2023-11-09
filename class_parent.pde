class charac {
  charac() {
  };
  charac(float p, float q, float r) {
    x = p;
    y = q;
    d = r;
    vx=random(-3, 3);
    vy=random(-3, 3);
    if (vx == 0)     vx=random(-3, 3);
    if (vy == 0)     vy=random(-3, 3);
    isVisible = true;
  }
  float x, y, d, vx, vy;
  boolean isVisible;

  void wall() {
    x += vx;
    y += vy;
    if (x > width || x < 0) vx = -vx;
    if (y > height || y < 0) vy = -vy;
  }
}
