#!/bin/env/python
# -*- coding: utf-8 -*-

# Run on Raspberry Pi in order to log measured values from arduino connected via USB.

import serial
import datetime
import time

arduino_serial = serial.Serial('/dev/ttyACM0', 9600)

startup_datetime_str = datetime.datetime.now().strftime("%Y-%m-%d_%H:%M:%S")

with open(startup_datetime_str + "_measurement", "w") as f:

    while 1:

        # get measurements from arduino
        measurement_str = arduino_serial.readline()

        # get datetime for measurement
        measurement_datetime_str = datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S ")

        # append current line to file
        f.write(measurement_datetime_str + measurement_str)
