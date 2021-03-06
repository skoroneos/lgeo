/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071225 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3004p06: Brick 1 x 2 with black grille Pattern                           */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3004p06)
#else
#include "lg_3004.inc"
#declare lg_3004p06_decals = 
union {
 #declare STRIPE_X = -0.75*LG_BRICK_WIDTH;
 #while (STRIPE_X < 0.8*LG_BRICK_WIDTH)
  box {
   <0.5*LG_BRICK_WIDTH-0.0001, STRIPE_X-LG_BRICK_WIDTH/16, -0.12>,
   <0.5*LG_BRICK_WIDTH+0.0001, STRIPE_X+LG_BRICK_WIDTH/16, -LG_BRICK_HEIGHT+0.12>
  }
  #declare STRIPE_X = STRIPE_X + 0.25*LG_BRICK_WIDTH;
 #end
 material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
}

#declare lg_3004p06 =
union {
 object { lg_3004 }
 object {
  lg_3004p06_decals
 }
}

#declare lg_3004p06_clear =
union {
 object { lg_3004_clear }
 object {
  lg_3004p06_decals
 }
}

#end
