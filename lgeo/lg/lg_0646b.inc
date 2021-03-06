/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20070922 Lutz Uhlmann                                                       */
/* 20071201 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0646b: Window 1 x 6 x 2 with shutters long sill, open studs              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0646b)
#else
#declare LENGTH = 1;
#declare WIDTH = 6;
#declare HEIGHT = 2;
#declare lg_0646b = 
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.2+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.15-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.15-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.44-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.2+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.44-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.2+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.44-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.2+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.15-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.44-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.15-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <0, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.28>,
    LG_CORNER_SPACE
    rotate <0, -45 ,0>
    translate <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   difference {
    union {
     box {
      <0.5*LG_BRICK_WIDTH-0.2, 1.5*LG_BRICK_WIDTH-0.1, -0.18-LG_CORNER_SPACE>,
      <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>
     }
     box {
      <0.5*LG_BRICK_WIDTH-0.2, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -0.18>,
      <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34>
     }
     box {
      <0.5*LG_BRICK_WIDTH-0.2, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
      <0.5*LG_BRICK_WIDTH, 0.05+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>
     }
    }
    union {
     box {
      <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.2+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
      <0.5*LG_BRICK_WIDTH+LG_E, 0.15-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.44-LG_CORNER_SPACE>
     }
     box {
      <0.5*LG_BRICK_WIDTH-0.2-LG_E, 1.5*LG_BRICK_WIDTH-0.2, -0.28>,
      <0.5*LG_BRICK_WIDTH+LG_E, 0.15, -2*LG_BRICK_HEIGHT+0.44>
     }
    }
   }
   box {
    <0.5*LG_BRICK_WIDTH-0.1, 1.5*LG_BRICK_WIDTH-0.15, -0.08+LG_E>,
    <0.5*LG_BRICK_WIDTH-0.2, 1.36, -2*LG_BRICK_HEIGHT+0.2>
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>,
    <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.28>,
    <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-0.1, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+0.27>
   }
   box {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
   box {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT>,
    <0.5*LG_BRICK_WIDTH-0.1, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_WALL_WIDTH>
   }
   box {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-0.1, 1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    box {
     <0.5*LG_BRICK_WIDTH+0.08, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE-LG_E, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
    box {
     <0.5*LG_BRICK_WIDTH+0.08+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
     <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE-2*LG_E, 1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
    }
   }
   #declare BOX_Z=-LG_WALL_WIDTH;
   #while (BOX_Z>-4.5*LG_PLATE_HEIGHT)
    box {
     <0, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, LG_E>,
     <-LG_WALL_WIDTH/2, 1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, -4*LG_PLATE_HEIGHT/13-LG_E>
     rotate <0, -20, 0>
     translate <0.5*LG_BRICK_WIDTH, 0, BOX_Z>
    }
    #declare BOX_Z = BOX_Z - 4*LG_PLATE_HEIGHT/13;
   #end
   #if (MIR=1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end 
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  union {
   box {
    <LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.28>,
    <-0.2, -1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    rotate <0, -45, 0>
    translate <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0, 1.5*LG_BRICK_WIDTH+2*LG_CORNER_SPACE, 0.28>,
    <-0.2, -1.5*LG_BRICK_WIDTH-2*LG_CORNER_SPACE, 0>
    rotate <0, -45, 0>
    translate <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <0.5*LG_BRICK_WIDTH-0.2, 1.5*LG_BRICK_WIDTH+0.1, -2*LG_BRICK_HEIGHT+0.22>,
    <0.5*LG_BRICK_WIDTH-0.3, -1.5*LG_BRICK_WIDTH-0.1, -2*LG_BRICK_HEIGHT+0.32>
   }
   box {
    <0.5*LG_BRICK_WIDTH+0.08, 1.5*LG_BRICK_WIDTH+0.1, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0, -1.5*LG_BRICK_WIDTH-0.1, -2*LG_BRICK_HEIGHT-0.4>
   }
   box {
    <0.5*LG_BRICK_WIDTH-0.2, 1.5*LG_BRICK_WIDTH+0.1, -2*LG_BRICK_HEIGHT+0.4>,
    <0, -1.5*LG_BRICK_WIDTH-0.1, -2*LG_BRICK_HEIGHT-0.4>
   }
  }
 }
 box {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -0.08+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_CORNER_SPACE>
 }
 box {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT>,
  <-0.5*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT>,
  <0.5*LG_BRICK_WIDTH-0.15, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -0.08>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>
 }
 box {
  <0.5*LG_BRICK_WIDTH-0.1, 0.1, -0.08+LG_E>,
  <0.5*LG_BRICK_WIDTH-0.2, -0.1, -2*LG_BRICK_HEIGHT+0.22>
 }
 box {
  <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>,
  <0.5*LG_BRICK_WIDTH-0.16, -1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <0.5*LG_BRICK_WIDTH-0.1, 1.5*LG_BRICK_WIDTH+LG_E, -2*LG_BRICK_HEIGHT+0.2>,
  <0.5*LG_BRICK_WIDTH-0.2, -1.5*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_HEIGHT+0.4>
 }
 box {
  <0.5*LG_BRICK_WIDTH-0.1, 1.5*LG_BRICK_WIDTH+LG_E, -2*LG_BRICK_HEIGHT>,
  <0.5*LG_BRICK_WIDTH-0.16, -1.5*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_HEIGHT+0.3>
 }
 box {
  <0.5*LG_BRICK_WIDTH-0.1, 1.5*LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-0.12, -1.5*LG_BRICK_WIDTH-LG_E, -0.2>
 }
 #declare CYL_X = -2;
 #while (CYL_X < 3)
  difference {
   union {
    box {
     <0.5*LG_BRICK_WIDTH-0.1, CYL_X*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -2*LG_BRICK_HEIGHT>,
     <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_KNOB_INNER_RADIUS, CYL_X*LG_BRICK_WIDTH+LG_KNOB_INNER_RADIUS, -2*LG_BRICK_HEIGHT+0.2>
    }
    cylinder {
     <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_KNOB_INNER_RADIUS, CYL_X*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT>
     <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_KNOB_INNER_RADIUS, CYL_X*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+0.2>
     LG_KNOB_INNER_RADIUS
    }
   }
   box {
    <0.5*LG_BRICK_WIDTH-0.2, CYL_X*LG_BRICK_WIDTH-0.05, -2*LG_BRICK_HEIGHT+0.15>,
    <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, CYL_X*LG_BRICK_WIDTH+0.05, -2*LG_BRICK_HEIGHT+0.25>
   }
  } 
  #declare CYL_X = CYL_X + 1;
 #end
 #declare CYL_X = -2.5;
 #while (CYL_X < 3)
  object {
   lg_tech_knob_logo
   rotate <0, 0, -90>
   translate <0, CYL_X*LG_BRICK_WIDTH, 0>
  } 
  #declare CYL_X = CYL_X + 1;
 #end
} 

#declare lg_0646b_clear = 
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.2+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.15-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.15-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.44-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.2+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.44-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.2+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.44-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.2+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.15-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.44-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.15-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <0, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.28>,
    LG_CORNER_SPACE
    rotate <0, -45 ,0>
    translate <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   difference {
    merge {
     box {
      <0.5*LG_BRICK_WIDTH-0.2, 1.5*LG_BRICK_WIDTH-0.1, -0.18-LG_CORNER_SPACE>,
      <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>
     }
     box {
      <0.5*LG_BRICK_WIDTH-0.2, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -0.18>,
      <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.05+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34>
     }
     box {
      <0.5*LG_BRICK_WIDTH-0.2, 1.5*LG_BRICK_WIDTH-0.1-LG_CORNER_SPACE, -0.18-LG_CORNER_SPACE>,
      <0.5*LG_BRICK_WIDTH, 0.05+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.34+LG_CORNER_SPACE>
     }
    }
    merge {
     box {
      <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.2+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
      <0.5*LG_BRICK_WIDTH+LG_E, 0.15-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.44-LG_CORNER_SPACE>
     }
     box {
      <0.5*LG_BRICK_WIDTH-0.2-LG_E, 1.5*LG_BRICK_WIDTH-0.2, -0.28>,
      <0.5*LG_BRICK_WIDTH+LG_E, 0.15, -2*LG_BRICK_HEIGHT+0.44>
     }
    }
   }
   box {
    <0.5*LG_BRICK_WIDTH-0.1, 1.5*LG_BRICK_WIDTH-0.15, -0.08+LG_E>,
    <0.5*LG_BRICK_WIDTH-0.2, 1.36, -2*LG_BRICK_HEIGHT+0.2>
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>,
    <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.28>,
    <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-0.1, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+0.27>
   }
   box {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
   box {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT>,
    <0.5*LG_BRICK_WIDTH-0.1, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_WALL_WIDTH>
   }
   box {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-0.1, 1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    box {
     <0.5*LG_BRICK_WIDTH+0.08, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE-LG_E, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
    box {
     <0.5*LG_BRICK_WIDTH+0.08+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
     <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE-2*LG_E, 1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
    }
   }
   #declare BOX_Z=-LG_WALL_WIDTH;
   #while (BOX_Z>-4.5*LG_PLATE_HEIGHT)
    box {
     <0, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, LG_E>,
     <-LG_WALL_WIDTH/2, 1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, -4*LG_PLATE_HEIGHT/13-LG_E>
     rotate <0, -20, 0>
     translate <0.5*LG_BRICK_WIDTH, 0, BOX_Z>
    }
    #declare BOX_Z = BOX_Z - 4*LG_PLATE_HEIGHT/13;
   #end
   #if (MIR=1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end 
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  merge {
   box {
    <LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.28>,
    <-0.2, -1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    rotate <0, -45, 0>
    translate <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0, 1.5*LG_BRICK_WIDTH+2*LG_CORNER_SPACE, 0.28>,
    <-0.2, -1.5*LG_BRICK_WIDTH-2*LG_CORNER_SPACE, 0>
    rotate <0, -45, 0>
    translate <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
  merge {
   box {
    <0.5*LG_BRICK_WIDTH-0.2, 1.5*LG_BRICK_WIDTH+0.1, -2*LG_BRICK_HEIGHT+0.22>,
    <0.5*LG_BRICK_WIDTH-0.3, -1.5*LG_BRICK_WIDTH-0.1, -2*LG_BRICK_HEIGHT+0.32>
   }
   box {
    <0.5*LG_BRICK_WIDTH+0.08, 1.5*LG_BRICK_WIDTH+0.1, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0, -1.5*LG_BRICK_WIDTH-0.1, -2*LG_BRICK_HEIGHT-0.4>
   }
   box {
    <0.5*LG_BRICK_WIDTH-0.2, 1.5*LG_BRICK_WIDTH+0.1, -2*LG_BRICK_HEIGHT+0.4>,
    <0, -1.5*LG_BRICK_WIDTH-0.1, -2*LG_BRICK_HEIGHT-0.4>
   }
  }
 }
 box {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -0.08+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_CORNER_SPACE>
 }
 box {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT>,
  <-0.5*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT>,
  <0.5*LG_BRICK_WIDTH-0.15, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -0.08>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>
 }
 box {
  <0.5*LG_BRICK_WIDTH-0.1, 0.1, -0.08+LG_E>,
  <0.5*LG_BRICK_WIDTH-0.2, -0.1, -2*LG_BRICK_HEIGHT+0.22>
 }
 box {
  <0.5*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>,
  <0.5*LG_BRICK_WIDTH-0.16, -1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <0.5*LG_BRICK_WIDTH-0.1, 1.5*LG_BRICK_WIDTH+LG_E, -2*LG_BRICK_HEIGHT+0.2>,
  <0.5*LG_BRICK_WIDTH-0.2, -1.5*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_HEIGHT+0.4>
 }
 box {
  <0.5*LG_BRICK_WIDTH-0.1, 1.5*LG_BRICK_WIDTH+LG_E, -2*LG_BRICK_HEIGHT>,
  <0.5*LG_BRICK_WIDTH-0.16, -1.5*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_HEIGHT+0.3>
 }
 box {
  <0.5*LG_BRICK_WIDTH-0.1, 1.5*LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-0.12, -1.5*LG_BRICK_WIDTH-LG_E, -0.2>
 }
 #declare CYL_X = -2;
 #while (CYL_X < 3)
  difference {
   merge {
    box {
     <0.5*LG_BRICK_WIDTH-0.1, CYL_X*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -2*LG_BRICK_HEIGHT>,
     <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_KNOB_INNER_RADIUS, CYL_X*LG_BRICK_WIDTH+LG_KNOB_INNER_RADIUS, -2*LG_BRICK_HEIGHT+0.2>
    }
    cylinder {
     <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_KNOB_INNER_RADIUS, CYL_X*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT>
     <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_KNOB_INNER_RADIUS, CYL_X*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+0.2>
     LG_KNOB_INNER_RADIUS
    }
   }
   box {
    <0.5*LG_BRICK_WIDTH-0.2, CYL_X*LG_BRICK_WIDTH-0.05, -2*LG_BRICK_HEIGHT+0.15>,
    <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, CYL_X*LG_BRICK_WIDTH+0.05, -2*LG_BRICK_HEIGHT+0.25>
   }
  } 
  #declare CYL_X = CYL_X + 1;
 #end
 #declare CYL_X = -2.5;
 #while (CYL_X < 3)
  object {
   lg_tech_knob_logo_clear
   rotate <0, 0, -90>
   translate <0, CYL_X*LG_BRICK_WIDTH, 0>
  } 
  #declare CYL_X = CYL_X + 1;
 #end
} 

#end
