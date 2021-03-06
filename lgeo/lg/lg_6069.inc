/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980803 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6069: Wedge 4 x 4                                                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6069)
#else
#declare lg_angle1=pi/2-atan2(LG_BRICK_WIDTH+LG_CORNER_SPACE-LG_WALL_WIDTH*(1-sin(pi/4)), LG_BRICK_HEIGHT-LG_WALL_WIDTH*(1+sin(pi/4)));
#declare lg_angle2=atan2(LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1), 3*LG_BRICK_WIDTH);
#declare lg_angle3=atan2(1,3);
#declare lg_angle4=atan2(LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1),LG_BRICK_WIDTH*cos(lg_angle3));
#declare lg_6069 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    LG_CORNER_SPACE
   }
   sphere {
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
    <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT>,
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0, 0, -LG_BRICK_HEIGHT>,
    <-3*LG_BRICK_WIDTH/cos(lg_angle3), -0.12+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
    rotate <0, 0, -lg_angle3*180/pi>
    translate <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0, LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <-3*LG_BRICK_WIDTH/cos(lg_angle3), -0.12+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle3*180/pi>
    translate <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0.06, LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT>,
    <-0.06, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/cos(lg_angle1), -LG_WALL_WIDTH+LG_CORNER_SPACE>
    rotate <-lg_angle1*180/pi, 0, 0>
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   intersection {
    box {
     <-0.5, 0, 0>,
     <2.5, LG_BRICK_WIDTH*cos(lg_angle3)/cos(lg_angle4), -LG_WALL_WIDTH+LG_CORNER_SPACE>
     rotate <-lg_angle4*180/pi, 0, 0>
     rotate <0, 0, -lg_angle3*180/pi>
     translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
    }
    box {
     <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_E>
    }
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0, LG_BRICK_WIDTH/2, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
  <3.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT>,
  <1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
  <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <3.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
  <3.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  box {
   <-0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
   <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  union {
   box {
    <-0.5*LG_BRICK_WIDTH-LG_E, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-LG_E, 0, 0>,
    <2, LG_BRICK_WIDTH/cos(lg_angle1), LG_BRICK_WIDTH>
    rotate <-lg_angle1*180/pi, 0, 0>
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-LG_E, 0, 0>,
    <2, -LG_BRICK_WIDTH/cos(lg_angle1), LG_BRICK_WIDTH>
    rotate <lg_angle1*180/pi, 0, 0>
    translate <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
  }
 }
 difference {
  union {
   box {
    <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2, 0>,
    <1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH+0.06, LG_BRICK_WIDTH+LG_E, -2*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-0.06, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH+0.06, -LG_BRICK_WIDTH-LG_E, -2*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-0.06, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, 0>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, LG_BRICK_WIDTH+LG_WALL_WIDTH/2, 0>,
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_WALL_WIDTH, 0>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2, 0>,
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -0>,
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT>
   }
   box {
    <0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -0>,
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT>
   }
   box {
    <3*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, LG_BRICK_WIDTH+0.1, -2*LG_PLATE_HEIGHT>
   }
   box {
    <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_BRICK_WIDTH-0.1, -2*LG_PLATE_HEIGHT>
   }
   box {
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <3*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT>
   }
   box {
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_E, 3*LG_BRICK_WIDTH/2-0.06, -LG_BRICK_HEIGHT>,
    <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH/2+0.06, -LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_E, -3*LG_BRICK_WIDTH/2-0.06, -LG_BRICK_HEIGHT>,
    <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_WIDTH/2+0.06, -LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-0.06, -LG_PLATE_HEIGHT>,
    <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2+0.06, -LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2-0.06, -LG_PLATE_HEIGHT>,
    <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+0.06, -LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-0.06, -2*LG_PLATE_HEIGHT>,
    <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2+0.06, -LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2-0.06, -2*LG_PLATE_HEIGHT>,
    <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+0.06, -LG_CORNER_SPACE>
   }
   difference {
    cylinder {
     <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT>,
     <LG_BRICK_WIDTH, 0, 0>,
     LG_KNOB_INNER_RADIUS
    }
    cylinder {
     <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT-LG_E>,
     <LG_BRICK_WIDTH, 0, 0>,
     LG_KNOB_INNER_RADIUS/2
    }
   }
   object {
    lg_brick_cylinder
    translate <2.5*LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <-LG_E, -LG_BRICK_WIDTH, 0>,
    <3*LG_BRICK_WIDTH/cos(lg_angle2)+LG_E, LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
    rotate <0, lg_angle2*180/pi, 0>
    translate <0.5*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-LG_E, 0, 0>,
    <1, LG_BRICK_WIDTH/cos(lg_angle1), LG_BRICK_WIDTH>
    rotate <-lg_angle1*180/pi, 0, 0>
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-LG_E, 0, 0>,
    <1, -LG_BRICK_WIDTH/cos(lg_angle1), LG_BRICK_WIDTH>
    rotate <lg_angle1*180/pi, 0, 0>
    translate <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <-0.5, 0, 0>,
    <2.5, -LG_BRICK_WIDTH*cos(lg_angle3)/cos(lg_angle4), LG_BRICK_WIDTH>
    rotate <lg_angle4*180/pi, 0, 0>
    rotate <0, 0, lg_angle3*180/pi>
    translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <-0.5, 0, 0>,
    <2.5, LG_BRICK_WIDTH*cos(lg_angle3)/cos(lg_angle4), LG_BRICK_WIDTH>
    rotate <-lg_angle4*180/pi, 0, 0>
    rotate <0, 0, -lg_angle3*180/pi>
    translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   object {
    lg_knob_inner_space
    translate <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 difference {
  box {
   <0, -LG_BRICK_WIDTH, 0>,
   <3*LG_BRICK_WIDTH/cos(lg_angle2), LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   rotate <0, lg_angle2*180/pi, 0>
   translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
  }
  box {
   <3.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_E, -LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_E>,
   <2.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E, -LG_BRICK_HEIGHT>
  }
 }
 object {
  lg_plate_column
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
}

#declare lg_6069_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    LG_CORNER_SPACE
   }
   sphere {
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
    <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT>,
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0, 0, -LG_BRICK_HEIGHT>,
    <-3*LG_BRICK_WIDTH/cos(lg_angle3), -0.12+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
    rotate <0, 0, -lg_angle3*180/pi>
    translate <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0, LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
    <-3*LG_BRICK_WIDTH/cos(lg_angle3), -0.12+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle3*180/pi>
    translate <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0.06, LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT>,
    <-0.06, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/cos(lg_angle1), -LG_WALL_WIDTH+LG_CORNER_SPACE>
    rotate <-lg_angle1*180/pi, 0, 0>
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   intersection {
    box {
     <-0.5, 0, 0>,
     <2.5, LG_BRICK_WIDTH*cos(lg_angle3)/cos(lg_angle4), -LG_WALL_WIDTH+LG_CORNER_SPACE>
     rotate <-lg_angle4*180/pi, 0, 0>
     rotate <0, 0, -lg_angle3*180/pi>
     translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
    }
    box {
     <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_E>
    }
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0, LG_BRICK_WIDTH/2, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
  <3.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT>,
  <1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
  <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <3.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(lg_angle1)*sin(lg_angle1)>,
  <3.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  box {
   <-0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
   <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  union {
   box {
    <-0.5*LG_BRICK_WIDTH-LG_E, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-LG_E, 0, 0>,
    <2, LG_BRICK_WIDTH/cos(lg_angle1), LG_BRICK_WIDTH>
    rotate <-lg_angle1*180/pi, 0, 0>
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-LG_E, 0, 0>,
    <2, -LG_BRICK_WIDTH/cos(lg_angle1), LG_BRICK_WIDTH>
    rotate <lg_angle1*180/pi, 0, 0>
    translate <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
  }
 }
 difference {
  merge {
   box {
    <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2, 0>,
    <1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH+0.06, LG_BRICK_WIDTH+LG_E, -2*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-0.06, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH+0.06, -LG_BRICK_WIDTH-LG_E, -2*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-0.06, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, 0>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, LG_BRICK_WIDTH+LG_WALL_WIDTH/2, 0>,
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_WALL_WIDTH, 0>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2, 0>,
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -0>,
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT>
   }
   box {
    <0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -0>,
    <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT>
   }
   box {
    <3*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, LG_BRICK_WIDTH+0.1, -2*LG_PLATE_HEIGHT>
   }
   box {
    <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_BRICK_WIDTH-0.1, -2*LG_PLATE_HEIGHT>
   }
   box {
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <3*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT>
   }
   box {
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_E, 3*LG_BRICK_WIDTH/2-0.06, -LG_BRICK_HEIGHT>,
    <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH/2+0.06, -LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_E, -3*LG_BRICK_WIDTH/2-0.06, -LG_BRICK_HEIGHT>,
    <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_WIDTH/2+0.06, -LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-0.06, -LG_PLATE_HEIGHT>,
    <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2+0.06, -LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2-0.06, -LG_PLATE_HEIGHT>,
    <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+0.06, -LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-0.06, -2*LG_PLATE_HEIGHT>,
    <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2+0.06, -LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2-0.06, -2*LG_PLATE_HEIGHT>,
    <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+0.06, -LG_CORNER_SPACE>
   }
   difference {
    cylinder {
     <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT>,
     <LG_BRICK_WIDTH, 0, 0>,
     LG_KNOB_INNER_RADIUS
    }
    cylinder {
     <LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT-LG_E>,
     <LG_BRICK_WIDTH, 0, 0>,
     LG_KNOB_INNER_RADIUS/2
    }
   }
   object {
    lg_brick_cylinder_clear
    translate <2.5*LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <-LG_E, -LG_BRICK_WIDTH, 0>,
    <3*LG_BRICK_WIDTH/cos(lg_angle2)+LG_E, LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
    rotate <0, lg_angle2*180/pi, 0>
    translate <0.5*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-LG_E, 0, 0>,
    <1, LG_BRICK_WIDTH/cos(lg_angle1), LG_BRICK_WIDTH>
    rotate <-lg_angle1*180/pi, 0, 0>
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-LG_E, 0, 0>,
    <1, -LG_BRICK_WIDTH/cos(lg_angle1), LG_BRICK_WIDTH>
    rotate <lg_angle1*180/pi, 0, 0>
    translate <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <-0.5, 0, 0>,
    <2.5, -LG_BRICK_WIDTH*cos(lg_angle3)/cos(lg_angle4), LG_BRICK_WIDTH>
    rotate <lg_angle4*180/pi, 0, 0>
    rotate <0, 0, lg_angle3*180/pi>
    translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <-0.5, 0, 0>,
    <2.5, LG_BRICK_WIDTH*cos(lg_angle3)/cos(lg_angle4), LG_BRICK_WIDTH>
    rotate <-lg_angle4*180/pi, 0, 0>
    rotate <0, 0, -lg_angle3*180/pi>
    translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 difference {
  box {
   <0, -LG_BRICK_WIDTH, 0>,
   <3*LG_BRICK_WIDTH/cos(lg_angle2), LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   rotate <0, lg_angle2*180/pi, 0>
   translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
  }
  box {
   <3.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_E, -LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_E>,
   <2.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E, -LG_BRICK_HEIGHT>
  }
 }
 object {
  lg_plate_column_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
}

#declare lg_6069_slope =
union {
 box {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/cos(lg_angle1), -LG_E>
  rotate <-lg_angle1*180/pi, 0, 0>
  translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle1), -LG_E>
  rotate <lg_angle1*180/pi, 0, 0>
  translate <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH/cos(lg_angle2), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_E>
  rotate <0, lg_angle2*180/pi, 0>
  translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
 }
 intersection {
  box {
   <-0.5, 0, LG_CORNER_SPACE>,
   <2.5, LG_BRICK_WIDTH*cos(lg_angle3)/cos(lg_angle4), -LG_E>
   rotate <-lg_angle4*180/pi, 0, 0>
   rotate <0, 0, -lg_angle3*180/pi>
   translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
  }
  box {
   <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE*cos(lg_angle2), LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle4)), 0>,
   <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-cos(lg_angle3)), 2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
  }
 }
 intersection {
  box {
   <-0.5, 0, LG_CORNER_SPACE>,
   <2.5, -LG_BRICK_WIDTH*cos(lg_angle3)/cos(lg_angle4), -LG_E>
   rotate <lg_angle4*180/pi, 0, 0>
   rotate <0, 0, lg_angle3*180/pi>
   translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
  }
  box {
   <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE*cos(lg_angle2), -LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle4)), 0>,
   <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-cos(lg_angle3)), -2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
  }
 }
}

#end
