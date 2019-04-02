#define D0 5  // A
#define D1 4  // B
#define D2 3  // C
#define D3 2  // D

#define LE1 12
#define LE2 11
#define LE3 10
#define LE4 9
#define LE5 8
#define LE6 7
#define LE7 6


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LE1, OUTPUT);
  pinMode(LE2, OUTPUT);
  pinMode(LE3, OUTPUT);
  pinMode(LE4, OUTPUT);
  pinMode(LE5, OUTPUT);
  pinMode(LE6, OUTPUT);
  pinMode(LE7, OUTPUT);
  
  
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);  

  digitalWrite(LE1, HIGH);
  digitalWrite(LE2, HIGH);
  digitalWrite(LE3, HIGH);
  digitalWrite(LE4, HIGH);
  digitalWrite(LE5, HIGH);
  digitalWrite(LE6, HIGH);
  digitalWrite(LE7, HIGH);
  
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);

  delay(100);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LE1, LOW);
  digitalWrite(LE2, HIGH);
  digitalWrite(LE3, HIGH);
  digitalWrite(LE4, HIGH);
  digitalWrite(LE5, HIGH);
  digitalWrite(LE6, HIGH);
  digitalWrite(LE7, HIGH);
  
  digitalWrite(D0, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);

  digitalWrite(LE1, HIGH);
  digitalWrite(LE2, HIGH);
  digitalWrite(LE3, HIGH);
  digitalWrite(LE4, HIGH);
  digitalWrite(LE5, HIGH);
  digitalWrite(LE6, HIGH);
  digitalWrite(LE7, HIGH);

  delay(100);

  digitalWrite(LE1, HIGH);
  digitalWrite(LE2, LOW);
  digitalWrite(LE3, HIGH);
  digitalWrite(LE4, HIGH);
  digitalWrite(LE5, HIGH);
  digitalWrite(LE6, HIGH);
  digitalWrite(LE7, HIGH);
  
  digitalWrite(D0, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);

  digitalWrite(LE1, HIGH);
  digitalWrite(LE2, HIGH);
  digitalWrite(LE3, HIGH);
  digitalWrite(LE4, HIGH);
  digitalWrite(LE5, HIGH);
  digitalWrite(LE6, HIGH);
  digitalWrite(LE7, HIGH);

  delay(100);


  digitalWrite(LE1, HIGH);
  digitalWrite(LE2, HIGH);
  digitalWrite(LE3, LOW);
  digitalWrite(LE4, HIGH);
  digitalWrite(LE5, HIGH);
  digitalWrite(LE6, HIGH);
  digitalWrite(LE7, HIGH);
  
  digitalWrite(D0, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);

  digitalWrite(LE1, HIGH);
  digitalWrite(LE2, HIGH);
  digitalWrite(LE3, HIGH);
  digitalWrite(LE4, HIGH);
  digitalWrite(LE5, HIGH);
  digitalWrite(LE6, HIGH);
  digitalWrite(LE7, HIGH);

  delay(100);

  digitalWrite(LE1, HIGH);
  digitalWrite(LE2, HIGH);
  digitalWrite(LE3, HIGH);
  digitalWrite(LE4, LOW);
  digitalWrite(LE5, HIGH);
  digitalWrite(LE6, HIGH);
  digitalWrite(LE7, HIGH);
  
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);

  digitalWrite(LE1, HIGH);
  digitalWrite(LE2, HIGH);
  digitalWrite(LE3, HIGH);
  digitalWrite(LE4, HIGH);
  digitalWrite(LE5, HIGH);
  digitalWrite(LE6, HIGH);
  digitalWrite(LE7, HIGH);

  delay(100);

  digitalWrite(LE1, HIGH);
  digitalWrite(LE2, HIGH);
  digitalWrite(LE3, HIGH);
  digitalWrite(LE4, HIGH);
  digitalWrite(LE5, LOW);
  digitalWrite(LE6, HIGH);
  digitalWrite(LE7, HIGH);
  
  digitalWrite(D0, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);

  digitalWrite(LE1, HIGH);
  digitalWrite(LE2, HIGH);
  digitalWrite(LE3, HIGH);
  digitalWrite(LE4, HIGH);
  digitalWrite(LE5, HIGH);
  digitalWrite(LE6, HIGH);
  digitalWrite(LE7, HIGH);

  delay(100);

  digitalWrite(LE1, HIGH);
  digitalWrite(LE2, HIGH);
  digitalWrite(LE3, HIGH);
  digitalWrite(LE4, HIGH);
  digitalWrite(LE5, HIGH);
  digitalWrite(LE6, LOW);
  digitalWrite(LE7, HIGH);
  
  digitalWrite(D0, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);

  digitalWrite(LE1, HIGH);
  digitalWrite(LE2, HIGH);
  digitalWrite(LE3, HIGH);
  digitalWrite(LE4, HIGH);
  digitalWrite(LE5, HIGH);
  digitalWrite(LE6, HIGH);
  digitalWrite(LE7, HIGH);

  delay(100);

  digitalWrite(LE1, HIGH);
  digitalWrite(LE2, HIGH);
  digitalWrite(LE3, HIGH);
  digitalWrite(LE4, HIGH);
  digitalWrite(LE5, HIGH);
  digitalWrite(LE6, HIGH);
  digitalWrite(LE7, LOW);
  
  digitalWrite(D0, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);

  digitalWrite(LE1, HIGH);
  digitalWrite(LE2, HIGH);
  digitalWrite(LE3, HIGH);
  digitalWrite(LE4, HIGH);
  digitalWrite(LE5, HIGH);
  digitalWrite(LE6, HIGH);
  digitalWrite(LE7, HIGH);

  delay(1000);

  digitalWrite(LE1, LOW);
  digitalWrite(LE2, LOW);
  digitalWrite(LE3, LOW);
  digitalWrite(LE4, LOW);
  digitalWrite(LE5, LOW);
  digitalWrite(LE6, LOW);
  digitalWrite(LE7, LOW);
  
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);

  digitalWrite(LE1, HIGH);
  digitalWrite(LE2, HIGH);
  digitalWrite(LE3, HIGH);
  digitalWrite(LE4, HIGH);
  digitalWrite(LE5, HIGH);
  digitalWrite(LE6, HIGH);
  digitalWrite(LE7, HIGH);

  delay(100);
  

  
}
