int quangtro = A1; //Thiết đặt chân analog đọc quang trở
void setup() {
  // Khởi tạo cổng Serial 9600
  Serial.begin(9600);
}

void loop() {
  int giatriQuangtro = analogRead(quangtro);// đọc giá trị quang trở
  
  Serial.println(giatriQuangtro); // Xuất giá trị ra Serial Monitor
  
  delay(500);
}
