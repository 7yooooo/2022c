PImage poo, dog;
void setup() {
  size(700, 700);
  poo = loadImage("mario.png");
  dog = loadImage("Peach.jpg");
}
void draw() {
  background(255);
  image(poo, 0, 80, 300, 300);
  image(dog, x, y);
}
float x=300, y=0;
void mouseDragged() {
  x+=(mouseX-pmouseX);
  y+=(mouseY-pmouseY);
}
