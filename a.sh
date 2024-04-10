#!/bin/bash

gpio readall

gpio mode 21 pwm

gpio pwmc 21 240

gpio pwmTone 21 200
