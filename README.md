# TouhouGameProject1

ポケット東方project(仮)？おもちゃ

## Description(説明)

フウザサさんのイラストから製作

***DEMO:***

![Demo](https://image-url.gif)

## Features(特徴)

- Awesome function
- Awesome UI
- ...

For more information, see `awesome-tool --help`.

## Requirement(要件)

特にないよ

## Used parts

- pro mini ATMEGA328P 5V 16MHz Arduino PRO miniと互換
	- https://www.amazon.co.jp/HiLetgo%C2%AE-3%E5%80%8B%E3%82%BB%E3%83%83%E3%83%88-ATMEGA328P-Arduino-mini%E3%81%A8%E4%BA%92%E6%8F%9B/dp/B013QV2EQM/ref=sr_1_1_sspa?__mk_ja_JP=%E3%82%AB%E3%82%BF%E3%82%AB%E3%83%8A&keywords=arduino+pro+mini+5v&qid=1558607224&s=industrial&sr=1-1-spons&psc=1

- ADXL345 3軸デジタル 加速度モジュール 重力 加速度 チルトセンサモジュール 傾斜センサモジュール 傾斜センサ [並行輸入品]
	- https://www.amazon.co.jp/gp/product/B01N632NWF/ref=ppx_yo_dt_b_asin_title_o05__o00_s00?ie=UTF8&psc=1

- ~~Nokia 5110用　LCDディスプレイスクリーンモジュールレッドバックライトアダプタPCB~~
	- ~~https://www.amazon.co.jp/%E3%83%8E%E3%83%BC%E3%83%96%E3%83%A9%E3%83%B3%E3%83%89%E5%93%81-STK0151001295-%E3%80%90%E3%83%8E%E3%83%BC%E3%83%96%E3%83%A9%E3%83%B3%E3%83%89%E5%93%81%E3%80%91Nokia-5110%E7%94%A8-LCD%E3%83%87%E3%82%A3%E3%82%B9%E3%83%97%E3%83%AC%E3%82%A4%E3%82%B9%E3%82%AF%E3%83%AA%E3%83%BC%E3%83%B3%E3%83%A2%E3%82%B8%E3%83%A5%E3%83%BC%E3%83%AB%E3%83%AC%E3%83%83%E3%83%89%E3%83%90%E3%83%83%E3%82%AF%E3%83%A9%E3%82%A4%E3%83%88%E3%82%A2%E3%83%80%E3%83%97%E3%82%BFPCB/dp/B01GNKIDWW/ref=sr_1_2?__mk_ja_JP=%E3%82%AB%E3%82%BF%E3%82%AB%E3%83%8A&keywords=nokia+5110&qid=1558607136&s=industrial&sr=1-2-catcorr~~

- ~~TFT LCDモジュール1.44インチ液晶ディスプレイモジュールTFT LCDスクリーン~~
	- ~~https://www.amazon.co.jp/LCD%E3%83%A2%E3%82%B8%E3%83%A5%E3%83%BC%E3%83%AB1-44%E3%82%A4%E3%83%B3%E3%83%81%E6%B6%B2%E6%99%B6%E3%83%87%E3%82%A3%E3%82%B9%E3%83%97%E3%83%AC%E3%82%A4%E3%83%A2%E3%82%B8%E3%83%A5%E3%83%BC%E3%83%ABTFT-LCD%E3%82%B9%E3%82%AF%E3%83%AA%E3%83%BC%E3%83%B3%E3%80%81128x128-SPI%E3%80%81%E7%94%BB%E5%83%8F%E3%82%B0%E3%83%A9%E3%83%95%E3%82%A3%E3%83%83%E3%82%AF%E3%82%AB%E3%83%A9%E3%83%BC%E3%82%B9%E3%82%AF%E3%83%AA%E3%83%BC%E3%83%B3%E3%80%81Arduino%E7%94%A85110-5V%E3%82%92%E4%BA%A4%E6%8F%9B%E3%81%99%E3%82%8B51-Arduino%E3%83%AB%E3%83%BC%E3%83%81%E3%83%B3/dp/B07GFNKG1L/ref=sr_1_5?s=industrial&ie=UTF8&qid=1549616055&sr=1-5&keywords=OLED%2BSSD1331&th=1~~

## Usage(使用法)

1. ライブラリを追加でダウンロードしないと動かない

## Installation(インストール)

追加使用ライブラリ
- Adafruit-GFX-Library
	- $ git clone https://github.com/adafruit/Adafruit-GFX-Library.git

- ~~Adafruit_PCD8544_Nokia_5110_LCD_library~~
	- ~~$ git clone https://github.com/adafruit/Adafruit-PCD8544-Nokia-5110-LCD-library.git~~

- Adafruit-ST7735-Library
	- $ git clone https://github.com/adafruit/Adafruit-ST7735-Library.git

-	ArduinoSTL
	- $ git clone https://github.com/mike-matera/ArduinoSTL.git

- DFRobotDFPlayerMini
	- $ git clone https://github.com/DFRobot/DFRobotDFPlayerMini.git
	- [DFPlayer](https://www.dfrobot.com/wiki/index.php/DFPlayer_Mini_SKU:DFR0299)
	- [参考](https://stonez56.blogspot.com/2015/03/arduino-dfplayer-mini-mp3-module.html)

## Anything Else(他に何か)

フォルダ分けするとエラー出るためフォルダ分けしていません

## Author(著者)

基本モデル from[フウザサさん](http://seiga.nicovideo.jp/seiga/im6459594)
