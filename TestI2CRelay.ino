#include <Wire.h>
#include "Adafruit_MCP23008.h"

// Basic toggle test for i/o expansion. flips pin #0 of a MCP23008 i2c
// pin expander up and down. Public domain

// Connect pin #1 of the expander to Analog 5 (i2c clock)
// Connect pin #2 of the expander to Analog 4 (i2c data)
// Connect pins #3, 4 and 5 of the expander to ground (address selection)
// Connect pin #6 and 18 of the expander to 5V (power and reset disable)
// Connect pin #9 of the expander to ground (common ground)

// Output #0 is on pin 10 so connect an LED or whatever from that to ground

Adafruit_MCP23008 mcp;

void setup() {
  mcp.begin();      // use default address 0

  mcp.pinMode(0, OUTPUT);
  mcp.pinMode(1, OUTPUT);
  mcp.pinMode(2, OUTPUT);

  mcp.pinMode(3, OUTPUT);


}


// flip the pin #0 up and down

void loop() {
  delay(1000);

  mcp.digitalWrite(0, HIGH);

  delay(1000);

  mcp.digitalWrite(0, LOW);
  mcp.digitalWrite(1, HIGH);

  delay(1000);

  mcp.digitalWrite(1, LOW);
  mcp.digitalWrite(2, HIGH);

  delay(1000);

  mcp.digitalWrite(2, LOW);
  mcp.digitalWrite(3, HIGH);

  delay(1000);

  mcp.digitalWrite(3, LOW);
}
