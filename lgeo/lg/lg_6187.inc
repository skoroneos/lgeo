/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980330 Lutz Uhlmann                                                       */
/* 20041102 Lars C. Hassing   Corrected origin (Mark Riley suggestion)         */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6187: Bar 1 x 2 x 4                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6187)
#else
#declare lg_6187 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    torus {
     LG_BRICK_WIDTH/2,
     LG_KNOB_INNER_RADIUS
     rotate <0, 0, 90>
     translate <0, 1.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, LG_BRICK_WIDTH/2+LG_KNOB_INNER_RADIUS>
    }
    union {
     box {
      <-LG_KNOB_RADIUS, 1.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_E>,
      <LG_KNOB_RADIUS, 0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH>
     }
     box {
      <-LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2+LG_KNOB_INNER_RADIUS>,
      <LG_KNOB_RADIUS, 0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH>
     }
    }
   }
   difference {
    torus {
     LG_BRICK_WIDTH/2,
     LG_KNOB_INNER_RADIUS
     rotate <0, 0, 90>
     translate <0, 1.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, 1.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS>
    }
    union {
     box {
      <-LG_KNOB_RADIUS, 1.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_E>,
      <LG_KNOB_RADIUS, 0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH>
     }
     box {
      <-LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_E, 1.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS>,
      <LG_KNOB_RADIUS, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
     }
    }
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS>,
    <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2+LG_KNOB_INNER_RADIUS>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0.06-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.06-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.06+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.06+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2>,
    LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  union {
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  box {
   <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
   <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
  }
 }
 object {
  lg_plate_column
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 box {
  <0.06, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_E>,
  <-0.06, -LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2>
 }
 box {
  <0.06-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_E>,
  <-0.06+LG_CORNER_SPACE, -LG_BRICK_WIDTH, LG_WALL_WIDTH/2>
 }
 cylinder {
  <0, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_KNOB_INNER_RADIUS>,
  <0, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS>,
  <0, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 translate <0, 0, -2*LG_BRICK_WIDTH>
} 

#declare lg_6187_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    torus {
     LG_BRICK_WIDTH/2,
     LG_KNOB_INNER_RADIUS
     rotate <0, 0, 90>
     translate <0, 1.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, LG_BRICK_WIDTH/2+LG_KNOB_INNER_RADIUS>
    }
    union {
     box {
      <-LG_KNOB_RADIUS, 1.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_E>,
      <LG_KNOB_RADIUS, 0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH>
     }
     box {
      <-LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2+LG_KNOB_INNER_RADIUS>,
      <LG_KNOB_RADIUS, 0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH>
     }
    }
   }
   difference {
    torus {
     LG_BRICK_WIDTH/2,
     LG_KNOB_INNER_RADIUS
     rotate <0, 0, 90>
     translate <0, 1.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, 1.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS>
    }
    union {
     box {
      <-LG_KNOB_RADIUS, 1.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_E>,
      <LG_KNOB_RADIUS, 0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH>
     }
     box {
      <-LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_E, 1.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS>,
      <LG_KNOB_RADIUS, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
     }
    }
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS>,
    <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2+LG_KNOB_INNER_RADIUS>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0.06-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.06-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.06+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.06+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2>,
    LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  merge {
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  box {
   <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
   <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
  }
 }
 object {
  lg_plate_column_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 box {
  <0.06, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_E>,
  <-0.06, -LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2>
 }
 box {
  <0.06-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_E>,
  <-0.06+LG_CORNER_SPACE, -LG_BRICK_WIDTH, LG_WALL_WIDTH/2>
 }
 cylinder {
  <0, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_KNOB_INNER_RADIUS>,
  <0, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS>,
  <0, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 translate <0, 0, -2*LG_BRICK_WIDTH>
} 

#end
