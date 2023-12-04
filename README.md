# Fire-Alarm-System-using-Arduino
->Fire Sensor with Buzzer
This Arduino sketch demonstrates a simple fire sensor alarm system using an Arduino board. It utilizes a fire sensor connected to one pin and a buzzer connected to another pin. When the fire sensor detects a fire, the buzzer is triggered to sound an alarm.

->Components Used : 
  Arduino board, 
  Fire sensor, 
  Buzzer
  
->Wiring : 
 Connect the fire sensor to Pin 7 (fireSensorPin)
 Connect the buzzer to Pin 8 (buzzerPin)

->Setup :
  Upload this Arduino sketch to your board.
  Ensure the fire sensor is connected properly to the designated pin (Pin 7).
  Connect the buzzer to the correct pin (Pin 8).
  Open the serial monitor to observe the fire sensor readings (baud rate: 9600).

->Operation : 
  The code continuously reads the value from the fire sensor pin.
  If the fire sensor detects a fire (returns a LOW signal), the buzzer is activated for 3 seconds.
  If no fire is detected (HIGH signal), the buzzer remains off.
  The sensor values are displayed in the serial monitor.
->Important Notes :
  Adjust the delay time according to your requirements for the alarm duration and sensor reading frequency.
  Ensure proper connections and power supply for the components.
  
Feel free to modify the code to suit your specific needs!
