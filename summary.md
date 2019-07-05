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


## 第四天
