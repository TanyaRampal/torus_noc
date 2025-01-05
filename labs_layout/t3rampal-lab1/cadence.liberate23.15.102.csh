#!/usr/bin/env tcsh

#CMC Microsystems
#CMC STC EDA Script -- Cadence LIBERATE
#Feng LIU
#Date:

#LOG

if( $?CMC_HOME == 0) then
	setenv CMC_HOME /CMC
endif

source $CMC_HOME/scripts/cadence.2014.12.csh

setenv CMC_CDS_LIBERATE_ARCH ${CMC_CDS_ARCH}
setenv CMC_CDS_LIBERATE_HOME ${CDS_TOP_DIR}/LIBERATE23.15.102_${CMC_CDS_LIBERATE_ARCH}

if ( ! -d ${CDS_TOP_DIR}/LIBERATE23.15.102_${CMC_CDS_LIBERATE_ARCH} ) then
    echo ""
    echo "ERROR: LIBERATE23.15.102 installation not found! Exit."
    echo ""
    exit 
endif 

setenv PATH ${CMC_CDS_LIBERATE_HOME}/bin:${PATH}
#setenv PATH ${CMC_CDS_LIBERATE_HOME}/tools.lnx86/bin:${PATH}
