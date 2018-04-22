#--------------------------------------Sound Level Sensor ---------------------------
Sound level meter project made by yuxuan Gu, March,2018

This project uses a Raspberry Pi 3 Mode B as a sound sensor. A USB soundcard with microphone and a RJ45 cable are needed as peripheral.
The application runs periodically every second and take record from microphone at a sample rate of 16000Hz.
The sound is then calculated into 80 pieces of RMS value and displayed as a bar chart on terminal screen.
If communication is enabled (condition compilation), the sound will be re-calculated into 8 pieces of Fast Level data and sent out to PHP server program.

List of contents
1. Configuration instructions
2. Installation instructions
3. Operating instructions
4. File mainfest
5. Copyright and license
6. Contact information

1.Configuration instructions
software:
	putty
hardware:
	Raspberry PI mode b,a SD card,a USB sound card,microphone and a RJ45 cable.
a.The processor.At the heart of Raspberry Pi is the same processor you would have found in the 
ipone 3G and the Kindle 2,so you can think of the capabilities of the Raspberry Pi as comparable
to those powerful little devices.
b.The Secure Digital (SD) Card slot.
c.The USB port.
d.ethernet port.
e.HDMI connector.
f.Status LEDs.
g.Analog Audio output.
h.Composite video out.
i.Power input.

2.installation instructions
At first please plug the SD card into the socket
And then please use the RJ45 cable connect to Raspberry PI and a usb cable into a powered hub.
Next plug the power supply.Finally,check everthing else is hooked up before connecting the power. 

3.operating instructions
keyboard:
The default keyboard settings are for a generic keyboard in a UK-style layout.If you want 
they keys to do what they are labeled to do,you will definitely want to select a keyboard type about
finland.
Password:
It is good way wo change the default password from raspberry to something a little stronger.
shutting down:When you need to close the Raspberry pi, please enter sudo shutdown now,by this way,
your SD card will not be compromised.
Troubleshoting:
Is the SD card in the slot,and is it making a good connection?
Was the disk image written correctly to the card?
Is the write protect enabled on SD card?
Check the integrity of your original disk image.
Is the PI restarting or having intermittent problems?
Do you get a kernel panic on startup?

4.File manifest
comm.c comm.h main.c makefile project.tar README.md README.txt screen.c screen.h 
sound.c sound.h test.wav

5.copyright and license
Copyright (c) <2018> <Guyuxuan>

This program is free software: You can redistribute it and/or modify it under the 
terms of GNU General Public License as published by the Free Software Foundation,
either version third of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,on the contrary,
without any warranty,and without even the implied warranty of merchantability or 
fitness for a particular purpose. See the GNU general public License for more details.

You should have received a copy of the GNU General Public License along with 
this program.If not,please open <https://www.gnu.org/licenses/>.

6.contact information
yuxuan Gu
Dept. of Information technology
Vaasa University of Applied Sciences
Woffintie 30, 65100, Vaasa, Finland
page: www.cc.puv.fi/~e1700700/
email: e1700700(at)edu.vamk.fi
