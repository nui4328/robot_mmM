void ReadMe()
  {
    
    fw( 55, 56, 250, "line");  //เดินหาหน้าเข้าหาเส้นความเร็ว 50, 50 เวลาการวิ่ง 250    
    fw( 55, 56, 250, "non_line"); //เดินหน้าจนกว่าเวลาหมดความเร็ว 50, 50 เวลาการวิ่ง 250 (หุ่นยนต์ไม่ถึ่งเส้น)
    bw( 55, 56, 250, "line"); //ถอยหลังเข้าหาเส้นความเร็ว 50, 50 เวลาการวิ่ง 250
    bw( 55, 56, 250, "non_line"); //ถอยหลังจนกว่าเวลาหมดความเร็ว 50, 50 เวลาการวิ่ง 250
    tr(90, 200); //เลี้ยวซ้ายความเร็วในการหมุน 90 เวลาในการหมุน 200
    tl(90, 200); //เลี้ยวขวาความเร็วในการหมุน 90 เวลาในการหมุน 200
    set_f(2); //การ set ให้หุ่นยนต์ตรงโดยการเดินหน้าเข้าหาเส้น เลข 2 ในวงเล็บคือ จำนวนการเข้าไปเซต
    set_b(2); //การทำให้หุ่นยนต์ตรงโดยการเช็กเส้นข้างหลัง
    mission(); //ปล่อยกล่อง

    fw_no_sensor( 55, 56, 250, "line");  //เดินหาหน้าเข้าหาเส้นความเร็ว 50, 50 เวลาการวิ่ง 250   (ไม่เช็คเส้นข้างหน้า  เอาไว้วิ่งขึ้นสะพานกับตะเกรียบ) 
    fw_no_sensor( 55, 56, 250, "non_line");
   
  }
