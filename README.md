# OPizero3_for_Sg90_d180

香橙派开发没有树莓派那么好的生态环境

香橙派3b对Sg90支持还好，因为它的针脚默认输出200hz

但是zero3默认输出23475hz,还不能用wiringPi库的RPi专用函数如:pwmSetRange()和pwmSetClock()

只能用原始方法，在代码间插入system()来运行一次.sh文件来改变pwm针脚的输出频率

更改针脚，记得在.sh文件也要更改

希望能有其他更好的方法改变对pwm针脚的控制
