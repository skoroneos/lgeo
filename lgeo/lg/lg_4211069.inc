/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080302 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4211069: _Tile  1 x  1 with Clip Dark Gray                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4211069)
#else
#include "lg_2555.inc"

#declare lg_4211069 = 
union {
 object {
  lg_2555
  material { texture { lg_dark_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4211069_clear = 
union {
 object {
  lg_2555
  material { texture { lg_dark_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#end