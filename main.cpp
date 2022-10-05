//Auton Select
int HS = 1;
 int A1 = 0;
 int A2 = 0;
 int A3 = 0;
 int A4 = 0;
 int A5 = 0;
 int A6 = 0;
 int A7 = 0;
 int A8 = 0;

 void Home() {
   Brain.Screen.clearScreen();
   Brain.Screen.setFont(mono30);
   Brain.Screen.drawRectangle(0, 0, 480, 240, ("#C0C0C0"));
   Brain.Screen.drawCircle(60, 200, 90, ("#4B9CD3"));
   Brain.Screen.drawCircle(400, 70, 110, ("#000080"));

   Brain.Screen.drawRectangle(20, 26, 80, 80, ("#DCDCDC"));
   Brain.Screen.printAt(23, 56, false, "Auton");
   Brain.Screen.printAt(50, 91, false, "1", fontType::mono30);

   Brain.Screen.drawRectangle(140, 26, 80, 80, ("#DCDCDC"));
   Brain.Screen.printAt(143, 56, false, "Auton");
   Brain.Screen.printAt(170, 91, false, "2", fontType::mono30);

   Brain.Screen.drawRectangle(260, 26, 80, 80, ("#DCDCDC"));
   Brain.Screen.printAt(263, 56, false, "Auton");
   Brain.Screen.printAt(290, 91, false, "3", fontType::mono30);

   Brain.Screen.drawRectangle(380, 26, 80, 80, ("#DCDCDC"));
   Brain.Screen.printAt(383, 56, false, "Auton");
   Brain.Screen.printAt(410, 91, false, "4", fontType::mono30);

   Brain.Screen.drawRectangle(20, 134, 80, 80, ("#DCDCDC"));
   Brain.Screen.printAt(23, 164, false, "Auton");
   Brain.Screen.printAt(50, 199, false, "5", fontType::mono30);

   Brain.Screen.drawRectangle(140, 134, 80, 80, ("#DCDCDC"));
   Brain.Screen.printAt(143, 164, false, "Auton");
   Brain.Screen.printAt(170, 199, false, "6", fontType::mono30);

   Brain.Screen.drawRectangle(260, 134, 80, 80, ("#DCDCDC"));
   Brain.Screen.printAt(263, 164, false, "Auton");
   Brain.Screen.printAt(290, 199, false, "7", fontType::mono30);

   Brain.Screen.drawRectangle(380, 134, 80, 80, ("#DCDCDC"));
   Brain.Screen.printAt(383, 164, false, "Auton");
   Brain.Screen.printAt(410, 199, false, "8", fontType::mono30);
 
 while(HS == 1) {
   if (Brain.Screen.pressing()) {  //Asks if the brain is being pressed.
     if (Brain.Screen.xPosition() >= 20 && Brain.Screen.xPosition() <= 100 && Brain.Screen.yPosition() <= 106 && Brain.Screen.yPosition() >= 26) {
       A1=1;
       HS=0;
       Brain.Screen.clearScreen();
       Brain.Screen.setCursor(1, 1);
       Brain.Screen.print("Autonomous 1");
     } 
     else if (Brain.Screen.xPosition() >= 140 && Brain.Screen.xPosition() <= 220 && Brain.Screen.yPosition() <= 106 && Brain.Screen.yPosition() >= 26) {
       A2=1;
       HS=0;
       Brain.Screen.clearScreen();
       Brain.Screen.setCursor(1, 1);
       Brain.Screen.print("Autonomous 2");
     }
     else if (Brain.Screen.xPosition() >= 260 && Brain.Screen.xPosition() <= 340 && Brain.Screen.yPosition() >= 26 && Brain.Screen.yPosition() <= 106) {
       A3=1;
       HS=0;
       Brain.Screen.clearScreen();
       Brain.Screen.setCursor(1, 1);
       Brain.Screen.print ("Autonomous 3");
     }
     else if (Brain.Screen.xPosition() >= 380 && Brain.Screen.xPosition() <= 460 && Brain.Screen.yPosition() >= 26 && Brain.Screen.yPosition() <= 106) {
       A4=1;
       HS=0;
       Brain.Screen.clearScreen();
       Brain.Screen.setCursor(1, 1);
       Brain.Screen.print ("Autonomous 4");
     }
     else if (Brain.Screen.xPosition() >= 20 && Brain.Screen.xPosition() <= 100 && Brain.Screen.yPosition() >= 134 && Brain.Screen.yPosition() <= 214) {
       A5=1;
       HS=0;
       Brain.Screen.clearScreen();
       Brain.Screen.setCursor(1, 1);
       Brain.Screen.print ("Autonomous 5");
     }
     else if (Brain.Screen.xPosition() >= 140 && Brain.Screen.xPosition() <= 220 && Brain.Screen.yPosition() >= 134 && Brain.Screen.yPosition() <= 214) {
       A6=1;
       HS=0;
       Brain.Screen.clearScreen();
       Brain.Screen.setCursor(1, 1);
       Brain.Screen.print ("Autonomous 6");
     }
     else if (Brain.Screen.xPosition() >= 260 && Brain.Screen.xPosition() <= 340 && Brain.Screen.yPosition() >= 134 && Brain.Screen.yPosition() <= 214) {
       A7=1;
       HS=0;
       Brain.Screen.clearScreen();
       Brain.Screen.setCursor(1, 1);
       Brain.Screen.print ("Autonomous 7");
     }
     else if (Brain.Screen.xPosition() >= 380 && Brain.Screen.xPosition() <= 460 && Brain.Screen.yPosition() >= 134 && Brain.Screen.yPosition() <= 214) {
       A8=1;
       HS=0;
       Brain.Screen.clearScreen();
       Brain.Screen.setCursor(1, 1);
       Brain.Screen.print ("Autonomous 8");
     }
     else{}
   } 
 }
 }

 void Auton_1() {
   Brain.Screen.clearScreen();
 }

 void Auton_2() {
   Brain.Screen.clearScreen();
 }

 void Auton_3() {
   Brain.Screen.clearScreen();
 }

 void Auton_4() {
   Brain.Screen.clearScreen();
 }

 void Auton_5() {
   Brain.Screen.clearScreen();
 }

 void Auton_6() {
  Brain.Screen.clearScreen();
 }

 void Auton_7() {
   Brain.Screen.clearScreen();
 }

 void Auton_8() {
   Brain.Screen.clearScreen();
 }

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the V5 has been powered on and        */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {
  vexcodeInit();
  if(HS == 1){
    Home();
  }
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
  if (A1 == 1) {
    Auton_1();
  }
  else if (A2 == 1) {
    Auton_2();
  }
  else if (A3 == 1) {
    Auton_3();
  }
  else if (A4 == 1) {
    Auton_4();
  }
  else if (A5 == 1) {
    Auton_5();
  }
  else if (A6 == 1) {
    Auton_6();
  }
  else if (A7 == 1) {
    Auton_7();
  }
  else if (A8 == 1) {
    Auton_8();
  }
  else{}
}