/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970911 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3937: Hinge 1 x 2 Base                                                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3937)
#else
#declare lg_angle1 = 30;
#declare lg_angle2 = atan2(0.2+2*LG_CORNER_SPACE-(LG_WALL_WIDTH+LG_CORNER_SPACE)*cos(lg_angle1*pi/180), 0.4-LG_CORNER_SPACE-(LG_WALL_WIDTH+LG_CORNER_SPACE)*sin(lg_angle1*pi/180))*180/pi;
#declare lg_3937 =
union {
 #declare MIR = 0;
 #while (MIR < 2 )
  union {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_WALL_WIDTH+LG_CORNER_SPACE)*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+(LG_WALL_WIDTH+LG_CORNER_SPACE)*sin(lg_angle1*pi/180)>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_WALL_WIDTH+LG_CORNER_SPACE)*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+(LG_WALL_WIDTH+LG_CORNER_SPACE)*sin(lg_angle1*pi/180)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_E>,
    <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_E>,
    <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH/2>,
    LG_CORNER_SPACE
   }
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.1-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH/2>
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_WALL_WIDTH+LG_CORNER_SPACE)*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+(LG_WALL_WIDTH+LG_CORNER_SPACE)*sin(lg_angle1*pi/180)>,
    <-(LG_WALL_WIDTH+LG_CORNER_SPACE)*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+(LG_WALL_WIDTH+LG_CORNER_SPACE)*sin(lg_angle1*pi/180)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    <-(LG_WALL_WIDTH+LG_CORNER_SPACE)*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+(LG_WALL_WIDTH+LG_CORNER_SPACE)*sin(lg_angle1*pi/180)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    <-(LG_WALL_WIDTH+LG_CORNER_SPACE)*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+(LG_WALL_WIDTH+LG_CORNER_SPACE)*sin(lg_angle1*pi/180)>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     torus {
      LG_WALL_WIDTH+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
     }
     torus {
      LG_WALL_WIDTH+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
     }
    }
    union {
     intersection {
      box {
       <LG_CORNER_SPACE, LG_E, 0>,
       <-2*LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E, 2*LG_WALL_WIDTH>
       rotate <0, lg_angle1, 0>
      }
      box {
       <LG_E, LG_E, 2*LG_WALL_WIDTH>,
       <-2*LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E, 0>
      }
     }
     intersection {
      box {
       <-LG_CORNER_SPACE, LG_E, 0>,
       <2*LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E, 2*LG_WALL_WIDTH>
       rotate <0, -lg_angle1, 0>
      }
      box {
       <-LG_E, LG_E, 2*LG_WALL_WIDTH>,
       <2*LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E, 0>
      }
     }
     translate <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
    }
   }
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <1.5*LG_WALL_WIDTH*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+1.5*LG_WALL_WIDTH*sin(lg_angle1*pi/180)>
   }
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <1.5*LG_WALL_WIDTH*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+1.5*LG_WALL_WIDTH*sin(lg_angle1*pi/180)>
   }
   difference {
    union {
     torus {
      2*LG_WALL_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
     }
     torus {
      2*LG_WALL_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
     }
     difference {
      cylinder {
       <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
       <0, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
       2*LG_WALL_WIDTH
      }
      cylinder {
       <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
       <0, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2>,
       LG_WALL_WIDTH
      }
     }
     difference {
      cylinder {
       <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
       <0, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2>,
       2*LG_WALL_WIDTH-LG_CORNER_SPACE
      }
      cylinder {
       <0, LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2>,
       <0, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>,
       LG_WALL_WIDTH+LG_CORNER_SPACE
      }
     }
    }
    union {
     box {
      <2*LG_WALL_WIDTH+LG_E, LG_E, 0>,
      <-2*LG_WALL_WIDTH-LG_E, -LG_WALL_WIDTH-LG_E, 2*LG_WALL_WIDTH+LG_E>
      rotate <0, -lg_angle1, 0>
     }
     box {
      <2*LG_WALL_WIDTH+LG_E, LG_E, 0>,
      <-2*LG_WALL_WIDTH-LG_E, -LG_WALL_WIDTH-LG_E, -2*LG_WALL_WIDTH-LG_E>
     }
     translate <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
    }
   }
   cylinder {
    <1.5*LG_WALL_WIDTH*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+1.5*LG_WALL_WIDTH*sin(lg_angle1*pi/180)>
    <1.5*LG_WALL_WIDTH*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+1.5*LG_WALL_WIDTH*sin(lg_angle1*pi/180)>,
    LG_WALL_WIDTH/2
   }
   cylinder {
    <1.5*LG_WALL_WIDTH*cos(lg_angle1*pi/180), LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+1.5*LG_WALL_WIDTH*sin(lg_angle1*pi/180)>
    <1.5*LG_WALL_WIDTH*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+1.5*LG_WALL_WIDTH*sin(lg_angle1*pi/180)>,
    LG_WALL_WIDTH/2-LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2>,
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>
   }
   difference {
    box {
     <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
     <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_WALL_WIDTH>
     rotate <0, -lg_angle2, 0>
     translate <-(LG_WALL_WIDTH+LG_CORNER_SPACE)*cos(lg_angle1*pi/180), 0, -LG_BRICK_WIDTH/2+(LG_WALL_WIDTH+LG_CORNER_SPACE)*sin(lg_angle1*pi/180)>
    }
    box {
     <-LG_E, LG_BRICK_WIDTH, 0>,
     <LG_CORNER_SPACE+LG_E, LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH>
     rotate <0, -lg_angle2, 0>
     translate <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>
    }
   }
   difference {
    box {
     <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>
    }
    union {
     cylinder {
      <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
      <0, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2>,
      LG_WALL_WIDTH
     }
     box {
      <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_WALL_WIDTH, 0>
     }
     box {
      <0, LG_BRICK_WIDTH, 2*LG_CORNER_SPACE>,
      <2*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2>
      rotate <0, -lg_angle2, 0>
      translate <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>
     }
     box {
      <0, LG_BRICK_WIDTH, 0>,
      <2*LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_CORNER_SPACE>
      rotate <0, -lg_angle2, 0>
      translate <-LG_BRICK_WIDTH/4, 0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>
     }
    }
   }
   difference {
    box {
     <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>
    }
    union {
     cylinder {
      <0, LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2>,
      <0, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>,
      LG_WALL_WIDTH+LG_CORNER_SPACE
     }
     box {
      <0, LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, 0>
     }
     box {
      <0, LG_BRICK_WIDTH+LG_E, 2*LG_CORNER_SPACE>,
      <2*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>
      rotate <0, -lg_angle2, 0>
      translate <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>
     }
    }
   }
   difference {
    cylinder {
     <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
     <0, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
     LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E
    }
    union {
     cylinder {
      <0, LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2>,
      <0, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>,
      LG_WALL_WIDTH
     }
     intersection {
      box {
       <LG_CORNER_SPACE, LG_E, 0>,
       <-2*LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E, 2*LG_WALL_WIDTH>
       rotate <0, lg_angle1, 0>
      }
      box {
       <LG_E, LG_E, 2*LG_WALL_WIDTH>,
       <-2*LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E, 0>
      }
      translate <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
     }
     intersection {
      box {
       <-LG_CORNER_SPACE, LG_E, 0>,
       <2*LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E, 2*LG_WALL_WIDTH>
       rotate <0, -lg_angle1, 0>
      }
      box {
       <-LG_E, LG_E, 2*LG_WALL_WIDTH>,
       <2*LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E, 0>
      }
      translate <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
     }
    }
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <-1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
  <-1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 } 
 cylinder {
  <2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <1.5*LG_WALL_WIDTH+LG_E, 0.06, -LG_BRICK_HEIGHT+LG_E>,
  <-1.5*LG_WALL_WIDTH-LG_E, -0.06, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
 }
 box {
  <0.06, LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_E>,
  <-0.06, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
  <1.5*LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
 }
 box {
  <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>
 }
 box {
  <2*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <1.5*LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
  <-1.5*LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>,
  <-1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2>
 }
 box {
  <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-1.5*LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>
 }
 box {
  <2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
  <-2*LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
 }
 box {
  <LG_WALL_WIDTH/2, 0.1-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_E>,
  <-LG_WALL_WIDTH/2, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
 }
 box {
  <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0.1, -2*LG_PLATE_HEIGHT-LG_E>,
  <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, -0.1, -LG_BRICK_WIDTH/2>
 }
 cylinder {
  <0, 0.1, -LG_BRICK_WIDTH/2>,
  <0, -0.1, -LG_BRICK_WIDTH/2>,
  LG_WALL_WIDTH/2-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
  <0, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
  LG_WALL_WIDTH/2
 }
}

#declare lg_3937_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2 )
  merge {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_WALL_WIDTH+LG_CORNER_SPACE)*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+(LG_WALL_WIDTH+LG_CORNER_SPACE)*sin(lg_angle1*pi/180)>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_WALL_WIDTH+LG_CORNER_SPACE)*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+(LG_WALL_WIDTH+LG_CORNER_SPACE)*sin(lg_angle1*pi/180)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_E>,
    <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_E>,
    <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH/2>,
    LG_CORNER_SPACE
   }
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.1-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH/2>
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_WALL_WIDTH+LG_CORNER_SPACE)*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+(LG_WALL_WIDTH+LG_CORNER_SPACE)*sin(lg_angle1*pi/180)>,
    <-(LG_WALL_WIDTH+LG_CORNER_SPACE)*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+(LG_WALL_WIDTH+LG_CORNER_SPACE)*sin(lg_angle1*pi/180)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    <-(LG_WALL_WIDTH+LG_CORNER_SPACE)*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+(LG_WALL_WIDTH+LG_CORNER_SPACE)*sin(lg_angle1*pi/180)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
    <-(LG_WALL_WIDTH+LG_CORNER_SPACE)*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+(LG_WALL_WIDTH+LG_CORNER_SPACE)*sin(lg_angle1*pi/180)>,
    LG_CORNER_SPACE
   }
   difference {
    merge {
     torus {
      LG_WALL_WIDTH+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
     }
     torus {
      LG_WALL_WIDTH+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
     }
    }
    union {
     intersection {
      box {
       <LG_CORNER_SPACE, LG_E, 0>,
       <-2*LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E, 2*LG_WALL_WIDTH>
       rotate <0, lg_angle1, 0>
      }
      box {
       <LG_E, LG_E, 2*LG_WALL_WIDTH>,
       <-2*LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E, 0>
      }
     }
     intersection {
      box {
       <-LG_CORNER_SPACE, LG_E, 0>,
       <2*LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E, 2*LG_WALL_WIDTH>
       rotate <0, -lg_angle1, 0>
      }
      box {
       <-LG_E, LG_E, 2*LG_WALL_WIDTH>,
       <2*LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E, 0>
      }
     }
     translate <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
    }
   }
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <1.5*LG_WALL_WIDTH*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+1.5*LG_WALL_WIDTH*sin(lg_angle1*pi/180)>
   }
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <1.5*LG_WALL_WIDTH*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+1.5*LG_WALL_WIDTH*sin(lg_angle1*pi/180)>
   }
   difference {
    merge {
     torus {
      2*LG_WALL_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
     }
     torus {
      2*LG_WALL_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
     }
     difference {
      cylinder {
       <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
       <0, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
       2*LG_WALL_WIDTH
      }
      cylinder {
       <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
       <0, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2>,
       LG_WALL_WIDTH
      }
     }
     difference {
      cylinder {
       <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
       <0, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2>,
       2*LG_WALL_WIDTH-LG_CORNER_SPACE
      }
      cylinder {
       <0, LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2>,
       <0, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>,
       LG_WALL_WIDTH+LG_CORNER_SPACE
      }
     }
    }
    union {
     box {
      <2*LG_WALL_WIDTH+LG_E, LG_E, 0>,
      <-2*LG_WALL_WIDTH-LG_E, -LG_WALL_WIDTH-LG_E, 2*LG_WALL_WIDTH+LG_E>
      rotate <0, -lg_angle1, 0>
     }
     box {
      <2*LG_WALL_WIDTH+LG_E, LG_E, 0>,
      <-2*LG_WALL_WIDTH-LG_E, -LG_WALL_WIDTH-LG_E, -2*LG_WALL_WIDTH-LG_E>
     }
     translate <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
    }
   }
   cylinder {
    <1.5*LG_WALL_WIDTH*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+1.5*LG_WALL_WIDTH*sin(lg_angle1*pi/180)>
    <1.5*LG_WALL_WIDTH*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+1.5*LG_WALL_WIDTH*sin(lg_angle1*pi/180)>,
    LG_WALL_WIDTH/2
   }
   cylinder {
    <1.5*LG_WALL_WIDTH*cos(lg_angle1*pi/180), LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+1.5*LG_WALL_WIDTH*sin(lg_angle1*pi/180)>
    <1.5*LG_WALL_WIDTH*cos(lg_angle1*pi/180), LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+1.5*LG_WALL_WIDTH*sin(lg_angle1*pi/180)>,
    LG_WALL_WIDTH/2-LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2>,
    <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>
   }
   difference {
    box {
     <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
     <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_WALL_WIDTH>
     rotate <0, -lg_angle2, 0>
     translate <-(LG_WALL_WIDTH+LG_CORNER_SPACE)*cos(lg_angle1*pi/180), 0, -LG_BRICK_WIDTH/2+(LG_WALL_WIDTH+LG_CORNER_SPACE)*sin(lg_angle1*pi/180)>
    }
    box {
     <-LG_E, LG_BRICK_WIDTH, 0>,
     <LG_CORNER_SPACE+LG_E, LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH>
     rotate <0, -lg_angle2, 0>
     translate <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>
    }
   }
   difference {
    box {
     <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>
    }
    union {
     cylinder {
      <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
      <0, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2>,
      LG_WALL_WIDTH
     }
     box {
      <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_WALL_WIDTH, 0>
     }
     box {
      <0, LG_BRICK_WIDTH, 2*LG_CORNER_SPACE>,
      <2*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2>
      rotate <0, -lg_angle2, 0>
      translate <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>
     }
     box {
      <0, LG_BRICK_WIDTH, 0>,
      <2*LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_CORNER_SPACE>
      rotate <0, -lg_angle2, 0>
      translate <-LG_BRICK_WIDTH/4, 0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>
     }
    }
   }
   difference {
    box {
     <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>
    }
    union {
     cylinder {
      <0, LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2>,
      <0, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>,
      LG_WALL_WIDTH+LG_CORNER_SPACE
     }
     box {
      <0, LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, 0>
     }
     box {
      <0, LG_BRICK_WIDTH+LG_E, 2*LG_CORNER_SPACE>,
      <2*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>
      rotate <0, -lg_angle2, 0>
      translate <-LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>
     }
    }
   }
   difference {
    cylinder {
     <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
     <0, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
     LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E
    }
    union {
     cylinder {
      <0, LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2>,
      <0, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>,
      LG_WALL_WIDTH
     }
     intersection {
      box {
       <LG_CORNER_SPACE, LG_E, 0>,
       <-2*LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E, 2*LG_WALL_WIDTH>
       rotate <0, lg_angle1, 0>
      }
      box {
       <LG_E, LG_E, 2*LG_WALL_WIDTH>,
       <-2*LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E, 0>
      }
      translate <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
     }
     intersection {
      box {
       <-LG_CORNER_SPACE, LG_E, 0>,
       <2*LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E, 2*LG_WALL_WIDTH>
       rotate <0, -lg_angle1, 0>
      }
      box {
       <-LG_E, LG_E, 2*LG_WALL_WIDTH>,
       <2*LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E, 0>
      }
      translate <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
     }
    }
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <-1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
  <-1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 } 
 cylinder {
  <2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <1.5*LG_WALL_WIDTH+LG_E, 0.06, -LG_BRICK_HEIGHT+LG_E>,
  <-1.5*LG_WALL_WIDTH-LG_E, -0.06, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
 }
 box {
  <0.06, LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_E>,
  <-0.06, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
  <1.5*LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
 }
 box {
  <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>
 }
 box {
  <2*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <1.5*LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
  <-1.5*LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>,
  <-1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2>
 }
 box {
  <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-1.5*LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE>
 }
 box {
  <2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
  <-2*LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
 }
 box {
  <LG_WALL_WIDTH/2, 0.1-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_E>,
  <-LG_WALL_WIDTH/2, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
 }
 box {
  <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0.1, -2*LG_PLATE_HEIGHT-LG_E>,
  <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, -0.1, -LG_BRICK_WIDTH/2>
 }
 cylinder {
  <0, 0.1, -LG_BRICK_WIDTH/2>,
  <0, -0.1, -LG_BRICK_WIDTH/2>,
  LG_WALL_WIDTH/2-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
  <0, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
  LG_WALL_WIDTH/2
 }
}

#end






