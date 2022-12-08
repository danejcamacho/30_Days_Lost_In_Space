int red = 11;
int green = 10;
int blue = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

void RGB_color(int red_val, int green_val, int blue_val){

  //custom function to set tree PWM coor channels to any given mixture
  analogWrite(red, red_val);
  analogWrite(green, green_val);
  analogWrite(blue, blue_val);

}

void loop() {
  // put your main code here, to run repeatedly:
  RGB_color(125,0,0); //red
  delay(800);
  RGB_color(0,125,0); //green
  delay(800);
  RGB_color(0,0,125); //blue
  delay(800);
  RGB_color(64,32,0); //yellow
  delay(800);
  RGB_color(125,0,125); //purple
  delay(800);
  RGB_color(125,125,125); // white
  delay(2000);

}
