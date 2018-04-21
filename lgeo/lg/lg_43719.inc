/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080225 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_43719: Wing 4 x 4 with 2 x 2 Cutout                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_43719)
#else
#declare lg_angle=atan2(1,4);
#declare lg_43719 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <0.04+LG_E, -LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04, -LG_CORNER_SPACE>,
    <0.04+LG_E, -LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_WALL_WIDTH/2, -LG_BRICK_WIDTH+0.04, -LG_PLATE_HEIGHT>,
    <1.6*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <1.4*LG_BRICK_WIDTH, LG_BRICK_WIDTH-0.08, -LG_PLATE_HEIGHT>
    <1.6*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+0.12, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-2*LG_BRICK_WIDTH+0.12, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    box {
     <0.04, -1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
     <LG_WALL_WIDTH, -LG_BRICK_WIDTH-0.04, -LG_PLATE_HEIGHT>
    }
    union {
     box {
      <0, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_E>,
      <-4*LG_BRICK_WIDTH/cos(lg_angle), -LG_BRICK_WIDTH, LG_E>
      rotate <0, 0, lg_angle*180/pi>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
     }
     box {
      <0, 0, -LG_PLATE_HEIGHT-LG_E>,
      <-4*LG_BRICK_WIDTH/cos(lg_angle), -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, lg_angle*180/pi>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
     }
    }
   }
   box {
    <0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -LG_BRICK_WIDTH-0.04, -LG_PLATE_HEIGHT>
   }
   difference {
    union {
     torus {
      0.04+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
     torus {
      0.04+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     difference {
      cylinder {
       <0, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
       <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
       LG_WALL_WIDTH
      }
      union {
       cylinder {
        <0, -LG_BRICK_WIDTH, LG_E>,
        <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
        0.04
       }
       cylinder {
        <0, -LG_BRICK_WIDTH, LG_E>,
        <0, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
        0.04+LG_CORNER_SPACE
       }
       cylinder {
        <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
        <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        0.04+LG_CORNER_SPACE
       }
      }
     }
    }
    union {
     box {
      <0, -0.5*LG_BRICK_WIDTH, LG_E>,
      <-LG_BRICK_WIDTH/2, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     }
     box {
      <LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, LG_E>,
      <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     }
    }
   }
   difference {
    box {
     <LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH+0.04+LG_E, -LG_PLATE_HEIGHT>,
     <1.5*LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH+0.04-LG_WALL_WIDTH/2, -LG_CORNER_SPACE>
    }
    cylinder {
     <1.5*LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH+0.04-LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
     <1.5*LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH+0.04-LG_WALL_WIDTH/2, -LG_E>,
     LG_WALL_WIDTH/2
    }
   }
   difference {
    union {
     cylinder {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <0, 0, -LG_PLATE_HEIGHT>,
      <-(4*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), 0.12-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
      rotate <0, 0, lg_angle*180/pi>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
     }
     box {
      <0, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-(4*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), 0.12-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, lg_angle*180/pi>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
     }
    }
    union {
     box {
      <-0.22, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <0.22, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
      rotate <0, 0, lg_angle*180/pi>
      translate <-1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <-0.26, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
      <0.26, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
      rotate <0, 0, lg_angle*180/pi>
      translate <-0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <-0.22, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <0.22, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
      rotate <0, 0, lg_angle*180/pi>
      translate <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, 0>,
      <-2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     }
    }
   }
   scale <1, 1-2*MIR, 1>
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
  <LG_WALL_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <0.04, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <LG_WALL_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder
  translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 }
 difference {
  box {
   <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   box {
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    <-4*LG_BRICK_WIDTH/cos(lg_angle), -LG_BRICK_WIDTH, LG_E>
    rotate <0, 0, lg_angle*180/pi>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    <-4*LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH, LG_E>
    rotate <0, 0, -lg_angle*180/pi>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, LG_E>,
    <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
    0.04+LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH, LG_E>,
    <0, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
    0.04+LG_CORNER_SPACE
   }
   box {
    <0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_E>,
    <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <0, LG_BRICK_WIDTH+0.04+LG_CORNER_SPACE, LG_E>,
    <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
 }
 translate <-LG_BRICK_WIDTH, 0, 0>
}

#declare lg_43719_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <0.04+LG_E, -LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04, -LG_CORNER_SPACE>,
    <0.04+LG_E, -LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_WALL_WIDTH/2, -LG_BRICK_WIDTH+0.04, -LG_PLATE_HEIGHT>,
    <1.6*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <1.4*LG_BRICK_WIDTH, LG_BRICK_WIDTH-0.08, -LG_PLATE_HEIGHT>
    <1.6*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+0.12, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_CORNER_SPACE>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-2*LG_BRICK_WIDTH+0.12, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    box {
     <0.04, -1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
     <LG_WALL_WIDTH, -LG_BRICK_WIDTH-0.04, -LG_PLATE_HEIGHT>
    }
    union {
     box {
      <0, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_E>,
      <-4*LG_BRICK_WIDTH/cos(lg_angle), -LG_BRICK_WIDTH, LG_E>
      rotate <0, 0, lg_angle*180/pi>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
     }
     box {
      <0, 0, -LG_PLATE_HEIGHT-LG_E>,
      <-4*LG_BRICK_WIDTH/cos(lg_angle), -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, lg_angle*180/pi>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
     }
    }
   }
   box {
    <0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -LG_BRICK_WIDTH-0.04, -LG_PLATE_HEIGHT>
   }
   difference {
    merge {
     torus {
      0.04+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
     torus {
      0.04+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     difference {
      cylinder {
       <0, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
       <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
       LG_WALL_WIDTH
      }
      union {
       cylinder {
        <0, -LG_BRICK_WIDTH, LG_E>,
        <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
        0.04
       }
       cylinder {
        <0, -LG_BRICK_WIDTH, LG_E>,
        <0, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
        0.04+LG_CORNER_SPACE
       }
       cylinder {
        <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
        <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        0.04+LG_CORNER_SPACE
       }
      }
     }
    }
    union {
     box {
      <0, -0.5*LG_BRICK_WIDTH, LG_E>,
      <-LG_BRICK_WIDTH/2, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     }
     box {
      <LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, LG_E>,
      <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     }
    }
   }
   difference {
    box {
     <LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH+0.04+LG_E, -LG_PLATE_HEIGHT>,
     <1.5*LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH+0.04-LG_WALL_WIDTH/2, -LG_CORNER_SPACE>
    }
    cylinder {
     <1.5*LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH+0.04-LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
     <1.5*LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH+0.04-LG_WALL_WIDTH/2, -LG_E>,
     LG_WALL_WIDTH/2
    }
   }
   difference {
    merge {
     cylinder {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <0, 0, -LG_PLATE_HEIGHT>,
      <-(4*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), 0.12-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
      rotate <0, 0, lg_angle*180/pi>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
     }
     box {
      <0, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-(4*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), 0.12-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, lg_angle*180/pi>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
     }
    }
    union {
     box {
      <-0.22, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <0.22, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
      rotate <0, 0, lg_angle*180/pi>
      translate <-1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <-0.26, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
      <0.26, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
      rotate <0, 0, lg_angle*180/pi>
      translate <-0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <-0.22, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <0.22, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
      rotate <0, 0, lg_angle*180/pi>
      translate <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, 0>,
      <-2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     }
    }
   }
   scale <1, 1-2*MIR, 1>
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
  <LG_WALL_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <0.04, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <LG_WALL_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder_clear
  translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 }
 difference {
  box {
   <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   box {
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    <-4*LG_BRICK_WIDTH/cos(lg_angle), -LG_BRICK_WIDTH, LG_E>
    rotate <0, 0, lg_angle*180/pi>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    <-4*LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH, LG_E>
    rotate <0, 0, -lg_angle*180/pi>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, LG_E>,
    <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
    0.04+LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH, LG_E>,
    <0, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
    0.04+LG_CORNER_SPACE
   }
   box {
    <0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_E>,
    <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <0, LG_BRICK_WIDTH+0.04+LG_CORNER_SPACE, LG_E>,
    <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
 }
 translate <-LG_BRICK_WIDTH, 0, 0>
}

#end