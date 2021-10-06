# IOT-Security-Solution
IoT can assist with disaster management techniques to minimize the damages in Industry . It can even stop a manmade disaster from happening in the first place. The use of IoT in disaster management can help transform our current reactive disaster management approach into a proactive one.
This Project is based on Gas and fire disaster managment through IOT by cloud connection which is very essential for today's manufacturing industry . It has three sensors which are Gas Sensor (MQ) , Flame sensor and Temperature which helps to monitor the warehouse and manufacturing unit to provide safety and security form destructive disaster.
## Hardware:
* NodeMcu ESP8266
* 5V USB Adaptor 
* MQ 2 gase sensor 
* LM35 Temperature sensor 
* Flame sensor 
* Jumper Wire Male- Male and Female - male 
* Raspberry pi 3b+
* 7 inch TOUCH LCD Screen 
* Micro Usb cable 
* 5v adaptor 
* Sandisk SD CARD 16gb  

# What is thingspeak?
ThingSpeak is IoT Cloud platform where you can send sensor data to the cloud. You can also analyze and visualize your data with MATLAB or other software, including making your own applications.
The ThingSpeak service is operated by MathWorks. In order to sign up for ThingSpeak, you must create a new MathWorks Account or log in to your existing MathWorks Account.
ThingSpeak is free for small non-commercial projects.
ThingSpeak includes a Web Service (REST API) that lets you collect and store sensor data in the cloud and develop Internet of Things applications. It works with Arduino, Raspberry Pi and MATLAB (premade libraries and APIs exists) But it should work with all kind of Programming Languages, since it uses a REST API and HTTP.
## ThingSpeak Communication Library for Arduino, ESP8266 and ESP32
This library enables an Arduino or other compatible hardware to write or read data to or from ThingSpeak, an open data platform for the Internet of Things with MATLAB analytics and visualization.
Hardware specific examples are found here. But to give you an idea of usage examples for writing and reading with an ESP8266 are shown below. Complete documentation in also shown below.

ThingSpeak offers free data storage and analysis of time-stamped numeric or alphanumeric data. Users can access ThingSpeak by visiting http://thingspeak.com and creating a ThingSpeak user account.

ThingSpeak stores data in channels. Channels support an unlimited number of timestamped observations (think of these as rows in a spreadsheet). Each channel has up to 8 fields (think of these as columns in a speadsheet). Check out this video for an overview.

Channels may be public, where anyone can see the data, or private, where only the owner and select users can read the data. Each channel has an associated Write API Key that is used to control who can write to a channel. In addition, private channels have one or more Read API Keys to control who can read from private channel. An API Key is not required to read from public channels. Each channel can have up to 8 fields. One field is created by default.

You can visualize and do online analytics of your data on ThingSpeak using the built in version of MATLAB, or use the desktop version of MATLAB to get deeper historical insight. 
Visit https://thingspeak.com/channels/1394956

Libraries and examples for Arduino devices can be found here: https://github.com/mathworks/thingspeak-arduino
## Installation
In the Arduino IDE, choose Sketch/Include Library/Manage Libraries. Click the ThingSpeak Library from the list, and click the Install button.
--- or ---
Download the ZIP file (below) to your machine.
In the Arduino IDE, choose Sketch/Include Library/Add Zip Library
Navigate to the ZIP file, and click Open

## Sensors :
* LM35 series are precision integrated-circuit temperature sensors, whose output voltage is linearly proportional to the celsius (centigrade) temperature.
* The Grove - Gas Sensor(MQ2) module is useful for gas leakage detection (in home and industry). It can detect combustible gas and smoke. The output voltage from the Gas sensor increases when the concentration of gas. Sensitivity can be adjusted by rotating the potentiometer. 
* A flame-sensor is one kind of detector which is mainly designed for detecting as well as responding to the occurrence of a fire or flame. The flame detection response can depend on its fitting. It includes an alarm system, a natural gas line, propane & a fire suppression system.

## Methods :
### Step 1: Two NodeMcu scripts are defined for interface with cloud datalogging 
### Step 2: Gas sensor is seperated with the first nodemcu 
### Step 3: Temperature and Flame sensor are define for detection of fire and degree celceius 
### Step 4: Real time monitoring is possible through thingspeak id : https://thingspeak.com/channels/1395047
### Step 4 : 
Thingspeak Login : kumarimira870@gmail.com
password: Timts@123

## Reference : 
* https://thingspeak.com/
* https://en.wikipedia.org/wiki/NodeMCU

