EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:My_stuff
LIBS:laser_arm-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L ARDUINO_PRO_MICRO U2
U 1 1 5A637048
P 5400 3900
F 0 "U2" V 6150 3900 60  0000 C CNN
F 1 "ARDUINO_PRO_MICRO" H 5400 3900 60  0000 C CNN
F 2 "arduino_leonard_custom:arduino_leonardo" H 5550 3600 60  0001 C CNN
F 3 "" H 5550 3600 60  0000 C CNN
	1    5400 3900
	1    0    0    -1  
$EndComp
$Comp
L servo_custom U1
U 1 1 5A6373D8
P 5100 2250
F 0 "U1" V 5350 2500 60  0000 C CNN
F 1 "servo_custom" V 4850 2500 60  0000 C CNN
F 2 "servo_custom:servo_custom" H 5100 2250 60  0001 C CNN
F 3 "" H 5100 2250 60  0001 C CNN
	1    5100 2250
	1    0    0    -1  
$EndComp
$Comp
L servo_custom U3
U 1 1 5A637441
P 5750 2250
F 0 "U3" V 6000 2500 60  0000 C CNN
F 1 "servo_custom" V 5500 2500 60  0000 C CNN
F 2 "servo_custom:servo_custom" H 5750 2250 60  0001 C CNN
F 3 "" H 5750 2250 60  0001 C CNN
	1    5750 2250
	1    0    0    -1  
$EndComp
Wire Wire Line
	5000 3300 5000 2450
Wire Wire Line
	4900 3300 5000 3300
Wire Wire Line
	5650 2450 5650 2800
Wire Wire Line
	5100 3200 5150 3200
Wire Wire Line
	5150 3200 5150 3300
Wire Wire Line
	5750 2450 5750 3200
Wire Wire Line
	5200 2450 5200 2550
Wire Wire Line
	5200 2550 4600 2550
Wire Wire Line
	4600 2550 4600 4700
Wire Wire Line
	4600 4700 5350 4700
Wire Wire Line
	5350 4700 5350 4500
Wire Wire Line
	5950 3300 5950 2450
Wire Wire Line
	5950 2450 5850 2450
$Comp
L 2N2222 Q1
U 1 1 5A6374E0
P 6650 3850
F 0 "Q1" H 6650 3702 40  0000 R CNN
F 1 "2N2222" H 6650 4000 40  0000 R CNN
F 2 "2N2222:2N2222" H 6550 3952 29  0001 C CNN
F 3 "" H 6650 3850 60  0000 C CNN
	1    6650 3850
	1    0    0    -1  
$EndComp
$Comp
L laser_custom U4
U 1 1 5A637731
P 7200 3150
F 0 "U4" H 7500 3050 60  0000 C CNN
F 1 "laser_custom" H 7450 3450 60  0000 C CNN
F 2 "laser_custom:laser_custom" H 7200 3150 60  0001 C CNN
F 3 "" H 7200 3150 60  0001 C CNN
	1    7200 3150
	1    0    0    -1  
$EndComp
Wire Wire Line
	7250 3350 7250 3500
Wire Wire Line
	7250 3500 6300 3500
Wire Wire Line
	6300 3500 6300 3150
Wire Wire Line
	6300 3150 5000 3150
Connection ~ 5000 3150
Wire Wire Line
	6450 3850 6250 3850
Wire Wire Line
	6250 3850 6250 4700
Wire Wire Line
	6250 4700 5650 4700
Wire Wire Line
	5650 4700 5650 4500
Wire Wire Line
	6750 4050 6400 4050
Wire Wire Line
	6400 4050 6400 2950
Wire Wire Line
	6400 2950 5100 2950
Connection ~ 5100 2950
Wire Wire Line
	6750 3650 7150 3650
Wire Wire Line
	7150 3650 7150 3350
Wire Wire Line
	5100 2450 5100 3200
Wire Wire Line
	5650 2800 4900 2800
Wire Wire Line
	4900 2800 4900 3300
Connection ~ 4950 3300
Wire Wire Line
	5750 3200 5200 3200
Wire Wire Line
	5200 3200 5200 3300
Wire Wire Line
	5200 3300 5150 3300
$EndSCHEMATC
