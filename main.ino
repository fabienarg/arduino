//  Copyright (c) 2018 Antoine Tran Tan
//

#include "Arduino.h"

// the setup function runs once when you press reset or power the board
void setup()
{
    pinMode(8,OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
    digitalWrite(8,HIGH);
    delay(2000);
    digitalWrite(8,LOW);
    delay(100);
}
