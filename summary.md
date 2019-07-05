 # 开源硬件作业
 ## 第一天
 
 ####   学习内容
 ·为什么要学习开源硬件
 
 	开源硬件能够让我们更近距离地接触到世界各国各地的新鲜事和更新的科技，见识到更多的代码和更多的用法。
 ·如何学习开源硬件
 	
	多练习，多看原版视频，多实践
 ·三个软件
 
 	arduino
	fritzing
	processing
 ·几个常用网站
 
 	github.cc
## 第二天
arduino编程
Morse.h
```c
#ifndef _MORSE_H
#define _MORSE_H
class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void c_space();
    void w_space();
  private:
    int _pin;
    int _dottime;
};
#endif /*_MORSE_H*/
```
```c
#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
	_dottime=250;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime*4);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::c_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*3);
}

void Morse::w_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*7);
}
```
## 第三天
小车电路图
小车的运行代码
```c


## 第四天
