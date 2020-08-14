int val=0; //光センサーからの入力値を格納する
int ledVal = 0; //LEDへの出力値を格納

void setup() {
  Serial.begin(9800); 
}

void loop() {
  val=analogRead(0);  //A0からセンサーの入力値を受け付ける
  ledVal = val/2;
  Serial.println(ledVal);
  //  D3に青色、D4に緑色、D5に赤色のLEDを接続
  if(ledVal < 50){    //入力値が50以下の時
    analogWrite(3,255);  //青色が点灯
    analogWrite(4,0);
    analogWrite(5,0);
  }else if(ledVal < 100){  // 入力値が51~99の時
    analogWrite(3,0);
    analogWrite(4,255);  //緑色が点灯
    analogWrite(5,0);
  }else {  //入力値が100以上の時
    analogWrite(3,0);
    analogWrite(4,0);
    analogWrite(5,255); //赤色が点灯
    }
    delay(300);
}
