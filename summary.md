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
// f前进; b后退; l左转; r右转; s停止;

void  setup（）
{
  pinMode（5，OUTPUT）;
  pinMode（6，OUTPUT）;
  pinMode（9，OUTPUT）;
  pinMode（10，OUTPUT）;
  串行。开始（9600）;
}

int income = 0 ;
void  loop（）
{
  如果（串行。可用的（）> 0）
  {
    收入=串行。read（）;
    转换（收入）
    { 
      案例 ' f '：
          forward（）;
          打破 ;
      案例 ' b '：
          落后（）;
          打破 ;
      案例 ' l '：
          左（）;
          打破 ;
      案例 ' r '：
          对（）;
          打破 ;
      案例 “小号”：
          停止（）;
          打破 ;
      默认值：
      打破 ;
    }
  }
}
    
void  forward（）
{
  digitalWrite（5，HIGH）;
  digitalWrite（6，LOW）;
  digitalWrite（9，HIGH）;
  digitalWrite（10，LOW）;
}
    
void  backward（）
{
  digitalWrite（6，HIGH）;
  digitalWrite（5，LOW）;
  digitalWrite（10，HIGH）;
  digitalWrite（9，LOW）;
}
    
void  left（）
{
  digitalWrite（5，HIGH）;
  digitalWrite（6，LOW）;
  digitalWrite（10，HIGH）;
  digitalWrite（9，LOW）;
 }
    
无效 的权利（）
{
  digitalWrite（6，HIGH）;
  digitalWrite（5，LOW）;
  digitalWrite（9，HIGH）;
  digitalWrite（10，LOW）;
 }

void  stop（）
{
  digitalWrite（5，LOW）;
  digitalWrite（6，LOW）;
  digitalWrite（9，LOW）;
  digitalWrite（10，LOW）;
}
```
数码管的设计与原理和实验

## 第四天

	学习了GitHub客户端与网页端的数据传送与交流；完成了网页版的morse电码
```c
int _pin=13;
int _dottime=250;

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

int incomingByte = 0;
 
void setup()
{
  pinMode(_pin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  if(Serial.available() > 0){
    incomingByte = Serial.read();
    switch(incomingByte){
      case 97:dot();
              dash();
              c_space();break;
      case 98:dash();
              dot();
              dot();
              dot();
              c_space();break;
      case 99:dash();
              dot();
              dash();
              dot();
              c_space();break;
      case 100:dash();
               dot();
               dot();
               c_space();break;
      case 101:dot();
               c_space();break;
      case 102:dot();
               dot();
               dash();
               dot();
               c_space();break;
      case 103:dash();
               dash();
               dot();
               c_space();break;
      case 104:dot();
               dot();
               dot();
               dot();
               c_space();break;
      case 105:dot();
               dot();
               c_space();break;
      case 106:dot();
               dash();
               dash();
               dash();
               c_space();break;
      case 107:dash();
               dot();
               dash();
               c_space();break;
      case 108:dot();
               dash();
               dot();
               dot();
               c_space();break;
      case 109:dash();
               dash();
               c_space();break;
      case 110:dash();
               dot();
               c_space();break;
      case 111:dash();
               dash();
               dash();
               c_space();break;
      case 112:dot();
               dash();
               dash();
               dot();
               c_space();break;
      case 113:dash();
               dash();
               Mdot();
               dash();
               c_space();break;
      case 114:dot();
               dash();
               dot();
               c_space();break;
      case 115:dot();
               dot();
               dot();
               c_space();break;
      case 116:dash();
               c_space();break;
      case 117:dot();
               dot();
               dash();
               c_space();break;
      case 118:dot();
               dot();
               dot();
               dash();
               c_space();break;
      case 119:dot();
               dash();
               dash();
               c_space();break;
      case 120:dash();
               dot();
               dot();
               dash();
               c_space();break;
      case 121:dash();
               dot();
               dash();
               dash();
               c_space();break;
      case 122:dash();
               dash();
               dot();
               dot();
               c_space();break;
      case 32: w_space();
    }
  }
}
```
## 心得
学会了怎样使用GitHub，怎样与全球的写代码的工作者进行交流。了解了arduino，fritzing，processing等软件，在makercad上面进行模拟电路实验，制作有趣的小东西，开发我们的思维。

