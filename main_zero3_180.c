#include "stdio.h"
#include <stdlib.h>
#include <wiringPi.h>

#define PWM_PIN 21 // 你要使用的 GPIO 引脚号

int main() {
    if (wiringPiSetup() == -1) {
        // 初始化失败
        printf("初始化失败\n");
        return 1;
    }

    pinMode(PWM_PIN, PWM_OUTPUT); // 设置引脚为 PWM 输出模式
    printf("设置引脚为PWM模式\n");
    system("./a.sh");

    int pwmValue = 150;
//    更改direction可改变旋转速度,下面的direction也改
    int direction = 2;

    while (1) {
        // 设置 PWM 输出的占空比
        printf("现在占空比为:%d\n",pwmValue);
        pwmWrite(PWM_PIN, pwmValue);

        delay(100);

        pwmValue += direction;

//        更改if条件语句可改变扇形大小,最大不大于250,最小不小于50
        if (pwmValue >= 230){
            direction = -2;
        }
        if (pwmValue <= 70){
            direction = 2;
        }


    }

    return 0;
}
