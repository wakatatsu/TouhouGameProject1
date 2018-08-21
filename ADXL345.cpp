#include "ADXL345.h"

ADXL345::ADXL345() {
  pinMode(SS, OUTPUT);
  digitalWrite(SS, HIGH);
  // ADXL345初期化
  writeRegister(DATA_FORMAT, 0x03); // ±16g 10bit
  writeRegister(POWER_CTL, 0x08);  // 測定モード
}

void ADXL345::writeRegister(char registerAddress, char value) {
  // SPI開始時にSSをLOWにする
  digitalWrite(SS, LOW);
  // レジスタアドレス送信
  SPI.transfer(registerAddress);
  // レジスタに設定する値送信
  SPI.transfer(value);
  // SPI終了時にSSをHIGHにする
  digitalWrite(SS, HIGH);
}

void ADXL345::readRegister(char registerAddress, int numBytes, char *values) {
  // 書き込みフラグを立てる
  char address = 0x80 | registerAddress;
  // 複数バイトフラグを立てる
  if(numBytes > 1)address = address | 0x40;
  // SPI開始時にSSをLOWにする
  digitalWrite(SS, LOW);
  // 読み出し先レジスタのアドレスを送信
  SPI.transfer(address);
  // 値の読み出し
  for(int i=0; i<numBytes; i++) {
    values[i] = SPI.transfer(0x00);
  }
  // SPI終了時にSSをHIGHにする
  digitalWrite(SS, HIGH);
}
