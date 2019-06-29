/*
 * ========================= create_goes.h ==========================
 *                          -- tpr --
 *                                        CREATE -- 2019.04.10
 *                                        MODIFY -- 
 * ----------------------------------------------------------
 */
#ifndef TPR_CREATE_GOES_H_
#define TPR_CREATE_GOES_H_


//-------------------- Engine --------------------//
#include "IntVec.h"
#include "GameObjType.h"
#include "MapAltitude.h"
#include "Density.h"
#include "DiskGameObj.h"


namespace gameObjs{//------------- namespace gameObjs ----------------


goid_t create_a_Go( goSpecId_t goSpecId_,
                    const IntVec2 &_mpos,
					float fieldWeight_,
					const MapAltitude &alti_,
					const Density &_density );


void rebind_a_disk_Go( const DiskGameObj &_diskGo,
                        float fieldWeight_,
					    const MapAltitude &alti_,
					    const Density &_density  );


}//------------- namespace gameObjs: end ----------------
#endif 

