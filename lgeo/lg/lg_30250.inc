/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990615 Lutz Uhlmann                                                       */
/* 20080129 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30250: Bracket 4 x 7 x 3                                                 */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30250)
#else
#declare lg_angle=atan2(LG_BRICK_WIDTH, LG_BRICK_WIDTH);
#declare lg_30250 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH/2+0.06, LG_BRICK_WIDTH+LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2-0.06, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2+0.06, LG_BRICK_WIDTH+LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-0.06, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
    <4*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT>,
     <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_TOP_HEIGHT>
    }
    union {
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 2*LG_BRICK_HEIGHT-LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <-LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 2*LG_BRICK_HEIGHT-LG_TOP_HEIGHT>
     }
    }
   }
   difference {
    union {
     cylinder {
      <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <0, 0, -LG_BRICK_HEIGHT>,
      <LG_BRICK_WIDTH/cos(lg_angle), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
      rotate <0, 0, -lg_angle*180/pi>
      translate <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     box {
      <0, LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/cos(lg_angle), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, -lg_angle*180/pi>
      translate <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
    }
    box {
     <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_BRICK_HEIGHT-LG_E>,
     <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_BRICK_HEIGHT+LG_KNOB_HEIGHT+LG_E>
     rotate <0, 0, 45>
     translate <5.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
    }
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 2*LG_BRICK_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 2*LG_BRICK_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_plate_column
    translate <2*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_column
    translate <3*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <3.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <4.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <4.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <5.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_BRICK_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_CORNER_SPACE>
 }
 box {
  <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_BRICK_HEIGHT>
 }
 box {
  <6*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
 }
 box {
  <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <6*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_brick_cylinder
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <5*LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
 }
 difference {
  box {
   <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
   <LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
  }
  union {
   box {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_E>,
    <LG_BRICK_WIDTH-LG_E, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT-LG_E>
   }
   box {
    <0, 0, -2*LG_PLATE_HEIGHT+LG_E>,
    <LG_BRICK_WIDTH/cos(lg_angle), 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle*180/pi>
    translate <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0, 0, -2*LG_PLATE_HEIGHT+LG_E>,
    <LG_BRICK_WIDTH/cos(lg_angle), -1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, lg_angle*180/pi>
    translate <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <4.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <4.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <4.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <4.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <5.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <5.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
  }
 }
}

#declare lg_30250_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH/2+0.06, LG_BRICK_WIDTH+LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2-0.06, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2+0.06, LG_BRICK_WIDTH+LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-0.06, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
    <4*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT>,
     <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_HEIGHT-LG_TOP_HEIGHT>
    }
    union {
     object {
      lg_knob_inner_space_clear
      translate <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 2*LG_BRICK_HEIGHT-LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space_clear
      translate <-LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 2*LG_BRICK_HEIGHT-LG_TOP_HEIGHT>
     }
    }
   }
   difference {
    merge {
     cylinder {
      <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <0, 0, -LG_BRICK_HEIGHT>,
      <LG_BRICK_WIDTH/cos(lg_angle), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
      rotate <0, 0, -lg_angle*180/pi>
      translate <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     box {
      <0, LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/cos(lg_angle), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, -lg_angle*180/pi>
      translate <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
    }
    box {
     <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_BRICK_HEIGHT-LG_E>,
     <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_BRICK_HEIGHT+LG_KNOB_HEIGHT+LG_E>
     rotate <0, 0, 45>
     translate <5.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
    }
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 2*LG_BRICK_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 2*LG_BRICK_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_plate_column_clear
    translate <2*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_column_clear
    translate <3*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <3.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <4.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <4.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <5.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_BRICK_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_CORNER_SPACE>
 }
 box {
  <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_BRICK_HEIGHT>
 }
 box {
  <6*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
 }
 box {
  <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <6*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_brick_cylinder_clear
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <5*LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
 }
 difference {
  box {
   <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
   <LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
  }
  union {
   box {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_E>,
    <LG_BRICK_WIDTH-LG_E, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT-LG_E>
   }
   box {
    <0, 0, -2*LG_PLATE_HEIGHT+LG_E>,
    <LG_BRICK_WIDTH/cos(lg_angle), 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle*180/pi>
    translate <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0, 0, -2*LG_PLATE_HEIGHT+LG_E>,
    <LG_BRICK_WIDTH/cos(lg_angle), -1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, lg_angle*180/pi>
    translate <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <4.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <4.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <4.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <4.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <5.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <5.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
  }
 }
}

#end