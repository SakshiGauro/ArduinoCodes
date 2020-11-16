int led=9; 
int brightness=0;
int fadeAmount=10;

void setup() 
{
  pinMode(led, OUTPUT);

}

void loop() 
{
  analogWrite(led, brightness);
  brightness= brightness+ fadeAmount;
  if (brightness==255 || brightness==-255)
    {fadeAmount=-fadeAmount;
    }
    delay(100); //'booommm boooommm'> or 'bom bom'<
}
