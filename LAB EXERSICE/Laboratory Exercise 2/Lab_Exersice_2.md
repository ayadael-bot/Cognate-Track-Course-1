<img width="881" height="762" alt="image" src="https://github.com/user-attachments/assets/2ef6ee93-491d-4616-8303-c9a7adbae2e3" />

This image shows an Arduino Uno connected to a 7-segment display and two push buttons on a breadboard. The circuit is designed to display numbers from 0 to 9 using the 7-segment display. Each segment of the display is connected to the Arduino digital pins, allowing the Arduino to control which segments light up to form a number.

The right push button is used for incrementing the displayed number. Every time the right button is pressed, the number on the 7-segment display increases by 1. The counting starts from 0 and continues until it reaches 9. Once the display shows 9, pressing the right button again will no longer increase the value, keeping the display at 9.

The left push button is used for decrementing the displayed number. When the left button is pressed, the displayed number decreases by 1. The subtraction continues until the display reaches 0. After reaching 0, additional presses of the left button will not decrease the number further.

This project demonstrates the use of digital input and output in Arduino programming, including button control, conditional statements, and 7-segment display interfacing.
