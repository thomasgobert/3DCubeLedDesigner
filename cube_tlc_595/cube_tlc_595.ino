#include <avr/pgmspace.h>
#include <Tlc5940.h>


// Feu D'artifice 
//unsigned const int numberOfPatterns=8;unsigned const int cubeSize=5;PROGMEM const byte patterns[8][7][5] ={{{B11111,B00000,B00000,B00000,B11111},{B10001,B00000,B00000,B00000,B10001},{B10001,B00000,B00000,B00000,B10001},{B10001,B00000,B00000,B00000,B10001},{B11111,B00000,B00000,B00000,B11111},{10},{30}},{{B01111,B00001,B00000,B10000,B11110},{B01000,B00001,B00000,B10000,B00010},{B01000,B00001,B00000,B10000,B00010},{B01000,B00001,B00000,B10000,B00010},{B01111,B00001,B00000,B10000,B11110},{1},{30}},{{B00111,B00001,B10001,B10000,B11100},{B00100,B00000,B10001,B00000,B00100},{B00100,B00000,B10001,B00000,B00100},{B00100,B00000,B10001,B00000,B00100},{B00111,B00001,B10001,B10000,B11100},{1},{30}},{{B00011,B10001,B10001,B10001,B11000},{B00010,B10000,B00000,B00001,B01000},{B00010,B10000,B00000,B00001,B01000},{B00010,B10000,B00000,B00001,B01000},{B00011,B10001,B10001,B10001,B11000},{1},{30}},{{B10001,B10001,B10001,B10001,B10001},{B10001,B00000,B00000,B00000,B10001},{B10001,B00000,B00000,B00000,B10001},{B10001,B00000,B00000,B00000,B10001},{B10001,B10001,B10001,B10001,B10001},{1},{30}},{{B11000,B10001,B10001,B10001,B00011},{B01000,B00001,B00000,B10000,B00010},{B01000,B00001,B00000,B10000,B00010},{B01000,B00001,B00000,B10000,B00010},{B11000,B10001,B10001,B10001,B00011},{1},{30}},{{B11100,B10000,B10001,B00001,B00111},{B00100,B00000,B10001,B00000,B00100},{B00100,B00000,B10001,B00000,B00100},{B00100,B00000,B10001,B00000,B00100},{B11100,B10000,B10001,B00001,B00111},{1},{30}},{{B11110,B10000,B00000,B00001,B01111},{B00010,B10000,B00000,B00001,B01000},{B00010,B10000,B00000,B00001,B01000},{B00010,B10000,B00000,B00001,B01000},{B11110,B10000,B00000,B00001,B01111},{1},{30}}};
// Pluie unsigned 
//unsigned const int numberOfPatterns=10;unsigned const int cubeSize=5;PROGMEM const byte patterns[10][7][5] ={{{B10000,B00100,B01001,B01000,B00000},{B00000,B00000,B00000,B01000,B00001},{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00001,B01000,B00000,B00000,B01000},{1},{30}},{{B00000,B00000,B00000,B00010,B00000},{B10000,B00100,B00001,B01000,B00001},{B00000,B00000,B00000,B01000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{1},{30}},{{B00100,B00010,B01000,B00010,B10000},{B00000,B00000,B00000,B00010,B00000},{B10000,B00100,B00001,B01000,B00001},{B00000,B00000,B00000,B01000,B00000},{B00000,B00000,B00000,B00000,B00000},{1},{30}},{{B00001,B01000,B00010,B10000,B00100},{B00100,B00010,B01000,B00010,B10000},{B00000,B00000,B00000,B00010,B00000},{B10000,B00100,B00001,B01000,B00001},{B00000,B00000,B00000,B01000,B00000},{1},{30}},{{B01000,B00110,B01000,B00010,B00001},{B00001,B01000,B00010,B10000,B00100},{B00100,B00010,B01000,B00010,B10000},{B00000,B00000,B00000,B00010,B00000},{B10000,B00100,B00001,B01000,B00001},{1},{30}},{{B00100,B10000,B00010,B00100,B01000},{B01000,B00110,B01000,B00010,B00001},{B00001,B01000,B00010,B10000,B00100},{B00100,B00010,B01000,B00010,B10000},{B00000,B00000,B00000,B00010,B00000},{1},{30}},{{B00000,B00000,B00000,B00000,B00000},{B00100,B10000,B00010,B00100,B01000},{B01000,B00110,B01000,B00010,B00001},{B00001,B01000,B00010,B10000,B00100},{B00100,B00010,B01000,B00010,B10000},{1},{30}},{{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00100,B10000,B00010,B00100,B01000},{B01000,B00110,B01000,B00010,B00001},{B00001,B01000,B00010,B10000,B00100},{1},{30}},{{B01001,B00000,B10000,B10000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00100,B10000,B00010,B00100,B01000},{B01000,B00110,B01000,B00010,B00001},{1},{30}},{{B10000,B00100,B00001,B01000,B00001},{B01001,B00000,B10000,B00000,B10000},{B00000,B01001,B00000,B10000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00100,B10000,B00010,B00100,B01000},{1},{30}}};
// 1 2 3 4 5
//unsigned const int numberOfPatterns=5;unsigned const int cubeSize=5;PROGMEM const byte patterns[5][7][5] ={{{B00100,B00100,B00100,B00100,B00100},{B00100,B00100,B00100,B00100,B00100},{B00100,B00100,B00100,B00100,B00100},{B00100,B00100,B00100,B00100,B00100},{B00100,B00100,B00100,B00100,B00100},{10},{30}},{{B11111,B11111,B11111,B11111,B11111},{B00001,B00001,B00001,B00001,B00001},{B11111,B11111,B11111,B11111,B11111},{B10000,B10000,B10000,B10000,B10000},{B11111,B11111,B11111,B11111,B11111},{10},{30}},{{B11111,B11111,B11111,B11111,B11111},{B00001,B00001,B00001,B00001,B00001},{B11111,B11111,B11111,B11111,B11111},{B00001,B00001,B00001,B00001,B00001},{B11111,B11111,B11111,B11111,B11111},{10},{30}},{{B10001,B10001,B10001,B10001,B10001},{B10001,B10001,B10001,B10001,B10001},{B11111,B11111,B11111,B11111,B11111},{B00001,B00001,B00001,B00001,B00001},{B00001,B00001,B00001,B00001,B00001},{10},{30}},{{B11111,B11111,B11111,B11111,B11111},{B10000,B10000,B10000,B10000,B10000},{B11111,B11111,B11111,B11111,B11111},{B00001,B00001,B00001,B00001,B00001},{B11111,B11111,B11111,B11111,B11111},{10},{30}}};
// JPS
//unsigned const int numberOfPatterns=30;unsigned const int cubeSize=5;PROGMEM const byte patterns[30][7][5] ={{{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B01111,B01111,B01111,B01111,B01111},{1},{30}},{{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B01111,B01111,B01111,B01111,B01111},{B00100,B00100,B00100,B00100,B00100},{2},{30}},{{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B01111,B01111,B01111,B01111,B01111},{B00100,B00100,B00100,B00100,B00100},{B00100,B00100,B00100,B00100,B00100},{3},{30}},{{B00000,B00000,B00000,B00000,B00000},{B01111,B01111,B01111,B01111,B01111},{B00100,B00100,B00100,B00100,B00100},{B00100,B00100,B00100,B00100,B00100},{B10100,B10100,B10100,B10100,B10100},{4},{30}},{{B01111,B01111,B01111,B01111,B01111},{B00100,B00100,B00100,B00100,B00100},{B00100,B00100,B00100,B00100,B00100},{B10100,B10100,B10100,B10100,B10100},{B11100,B11100,B11100,B11100,B11100},{10},{30}},{{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B11111,B11111,B11111,B11111,B11111},{1},{30}},{{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B11111,B11111,B11111,B11111,B11111},{B10001,B10001,B10001,B10001,B10001},{2},{30}},{{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B11111,B11111,B11111,B11111,B11111},{B10001,B10001,B10001,B10001,B10001},{B11111,B11111,B11111,B11111,B11111},{3},{30}},{{B00000,B00000,B00000,B00000,B00000},{B11111,B11111,B11111,B11111,B11111},{B10001,B10001,B10001,B10001,B10001},{B11111,B11111,B11111,B11111,B11111},{B11000,B11000,B11000,B11000,B11000},{4},{30}},{{B11111,B11111,B11111,B11111,B11111},{B10001,B10001,B10001,B10001,B10001},{B11111,B11111,B11111,B11111,B11111},{B11000,B11000,B11000,B11000,B11000},{B11000,B11000,B11000,B11000,B11000},{10},{30}},{{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B11111,B11111,B11111,B11111,B11111},{1},{30}},{{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B11111,B11111,B11111,B11111,B11111},{B10000,B10000,B10000,B10000,B10000},{2},{30}},{{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B11111,B11111,B11111,B11111,B11111},{B10000,B10000,B10000,B10000,B10000},{B11111,B11111,B11111,B11111,B11111},{3},{30}},{{B00000,B00000,B00000,B00000,B00000},{B11111,B11111,B11111,B11111,B11111},{B10000,B10000,B10000,B10000,B10000},{B11111,B11111,B11111,B11111,B11111},{B00001,B00001,B00001,B00001,B00001},{4},{30}},{{B11111,B11111,B11111,B11111,B11111},{B10000,B10000,B10000,B10000,B10000},{B11111,B11111,B11111,B11111,B11111},{B00001,B00001,B00001,B00001,B00001},{B11111,B11111,B11111,B11111,B11111},{10},{30}},{{B01111,B00000,B00000,B00000,B00000},{B01111,B00000,B00000,B00000,B00000},{B01111,B00000,B00000,B00000,B00000},{B01111,B00000,B00000,B00000,B00000},{B01111,B00000,B00000,B00000,B00000},{1},{30}},{{B00100,B01111,B00000,B00000,B00000},{B00100,B01111,B00000,B00000,B00000},{B00100,B01111,B00000,B00000,B00000},{B00100,B01111,B00000,B00000,B00000},{B00100,B01111,B00000,B00000,B00000},{2},{30}},{{B00100,B00100,B01111,B00000,B00000},{B00100,B00100,B01111,B00000,B00000},{B00100,B00100,B01111,B00000,B00000},{B00100,B00100,B01111,B00000,B00000},{B00100,B00100,B01111,B00000,B00000},{3},{30}},{{B10100,B00100,B00100,B01111,B00000},{B10100,B00100,B00100,B01111,B00000},{B10100,B00100,B00100,B01111,B00000},{B10100,B00100,B00100,B01111,B00000},{B10100,B00100,B00100,B01111,B00000},{4},{30}},{{B11100,B10100,B00100,B00100,B01111},{B11100,B10100,B00100,B00100,B01111},{B11100,B10100,B00100,B00100,B01111},{B11100,B10100,B00100,B00100,B01111},{B11100,B10100,B00100,B00100,B01111},{10},{30}},{{B11111,B00000,B00000,B00000,B00000},{B11111,B00000,B00000,B00000,B00000},{B11111,B00000,B00000,B00000,B00000},{B11111,B00000,B00000,B00000,B00000},{B11111,B00000,B00000,B00000,B00000},{1},{30}},{{B10001,B11111,B00000,B00000,B00000},{B10001,B11111,B00000,B00000,B00000},{B10001,B11111,B00000,B00000,B00000},{B10001,B11111,B00000,B00000,B00000},{B10001,B11111,B00000,B00000,B00000},{2},{30}},{{B11111,B10001,B11111,B00000,B00000},{B11111,B10001,B11111,B00000,B00000},{B11111,B10001,B11111,B00000,B00000},{B11111,B10001,B11111,B00000,B00000},{B11111,B10001,B11111,B00000,B00000},{3},{30}},{{B11000,B11111,B10001,B11111,B00000},{B11000,B11111,B10001,B11111,B00000},{B11000,B11111,B10001,B11111,B00000},{B11000,B11111,B10001,B11111,B00000},{B11000,B11111,B10001,B11111,B00000},{4},{30}},{{B11000,B11000,B11111,B10001,B11111},{B11000,B11000,B11111,B10001,B11111},{B11000,B11000,B11111,B10001,B11111},{B11000,B11000,B11111,B10001,B11111},{B11000,B11000,B11111,B10001,B11111},{10},{30}},{{B11111,B00000,B00000,B00000,B00000},{B11111,B00000,B00000,B00000,B00000},{B11111,B00000,B00000,B00000,B00000},{B11111,B00000,B00000,B00000,B00000},{B11111,B00000,B00000,B00000,B00000},{1},{30}},{{B10000,B11111,B00000,B00000,B00000},{B10000,B11111,B00000,B00000,B00000},{B10000,B11111,B00000,B00000,B00000},{B10000,B11111,B00000,B00000,B00000},{B10000,B11111,B00000,B00000,B00000},{2},{30}},{{B11111,B10000,B11111,B00000,B00000},{B11111,B10000,B11111,B00000,B00000},{B11111,B10000,B11111,B00000,B00000},{B11111,B10000,B11111,B00000,B00000},{B11111,B10000,B11111,B00000,B00000},{3},{30}},{{B00001,B11111,B10000,B11111,B00000},{B00001,B11111,B10000,B11111,B00000},{B00001,B11111,B10000,B11111,B00000},{B00001,B11111,B10000,B11111,B00000},{B00001,B11111,B10000,B11111,B00000},{4},{30}},{{B11111,B00001,B11111,B10000,B11111},{B11111,B00001,B11111,B10000,B11111},{B11111,B00001,B11111,B10000,B11111},{B11111,B00001,B11111,B10000,B11111},{B11111,B00001,B11111,B10000,B11111},{10},{30}}};
unsigned const int numberOfPatterns=9;unsigned const int cubeSize=5;PROGMEM const byte patterns[9][7][5] ={{{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{0.1},{30}},{{B00000,B00000,B00000,B00000,B01110},{B00000,B00000,B00000,B00000,B00100},{B00000,B00000,B00000,B00000,B00100},{B00000,B00000,B00000,B00000,B10100},{B00000,B00000,B00000,B00000,B11100},{0.2},{30}},{{B00000,B00000,B00000,B01110,B01110},{B00000,B00000,B00000,B00100,B00100},{B00000,B00000,B00000,B00100,B00100},{B00000,B00000,B00000,B10100,B10100},{B00000,B00000,B00000,B11100,B11100},{0.3},{30}},{{B00000,B00000,B01110,B01110,B01110},{B00000,B00000,B00100,B00100,B00100},{B00000,B00000,B00100,B00100,B00100},{B00000,B00000,B10100,B10100,B10100},{B00000,B00000,B11100,B11100,B11100},{0.4},{30}},{{B00000,B01110,B01110,B01110,B01110},{B00000,B00100,B00100,B00100,B00100},{B00000,B00100,B00100,B00100,B00100},{B00000,B10100,B10100,B10100,B10100},{B00000,B11100,B11100,B11100,B11100},{0.5},{30}},{{B01110,B01110,B01110,B01110,B01110},{B00100,B00100,B00100,B00100,B00100},{B00100,B00100,B00100,B00100,B00100},{B10100,B10100,B10100,B10100,B10100},{B11100,B11100,B11100,B11100,B11100},{1},{30}},{{B00000,B00000,B00000,B00000,B00000},{B00000,B00000,B00000,B00000,B00000},{B11000,B00000,B00000,B00000,B00000},{B11000,B00000,B00000,B00000,B00000},{B10000,B00000,B00000,B00000,B00000},{0.5},{30}},{{B00000,B00000,B00000,B00000,B00000},{B00000,B11100,B00000,B00000,B00000},{B00000,B11100,B00000,B00000,B00000},{B00000,B10000,B00000,B00000,B00000},{B00000,B10000,B00000,B00000,B00000},{0.5},{30}},{{B00000,B00000,B11111,B00000,B00000},{B00000,B00000,B10001,B00000,B00000},{B00000,B00000,B11111,B00000,B00000},{B00000,B00000,B10000,B00000,B00000},{B00000,B00000,B10000,B00000,B00000},{0.5},{30}}};


int rowsPin[] = {
  4,5,6,7,8};

int currentPattern = 0; 
int timeToDisplay = 1000;
int colIndex;
unsigned long endTime;

void initCube()
{
  for (int plane=0; plane<cubeSize; plane++) 
    digitalWrite(rowsPin[plane],LOW);
  for(int col=0;col<25;col++)
    Tlc.setAll(0); 
}
void setup()
{
  Serial.begin(115200);
  while(!Serial){
    ;
  }
  Serial.println("GO");
  Tlc.init();
  for (int pin=0; pin<5; pin++) {
    pinMode( rowsPin[pin], OUTPUT );
    digitalWrite( rowsPin[pin], LOW );
  }
}

void loop(){
  animCube();
}

void animCube()
{
  if(currentPattern > numberOfPatterns - 1)
    currentPattern = 0;
  timeToDisplay = 1000*pgm_read_byte_near(&(patterns[currentPattern][5][0]));
  endTime = millis() + timeToDisplay;
  while(millis() < endTime){
    for (int plane=0; plane<cubeSize; plane++) {
      Tlc.clear();
      colIndex=0;
      if(plane==0)
        digitalWrite(rowsPin[cubeSize - 1],LOW);
      else
        digitalWrite(rowsPin[plane-1],LOW);
      for(int col=0;col<25;col++){
        if(col > 0 && col % cubeSize == 0)
          colIndex++;
        Tlc.set(col,pgm_read_byte_near(&(patterns[currentPattern][plane][colIndex]))>>cubeSize-(col%cubeSize)-1 & 1 ? 2048:0);
      }
      Tlc.update();
      digitalWrite(rowsPin[plane],HIGH);
      //Serial.println(pgm_read_byte_near(&(patterns[currentPattern][6][0])));
      delayMicroseconds(50*pgm_read_byte_near(&(patterns[currentPattern][6][0])));
    }
   for (int plane=0; plane<cubeSize; plane++) {
    digitalWrite(rowsPin[plane],LOW);
  }
  }
  currentPattern++; 
}


