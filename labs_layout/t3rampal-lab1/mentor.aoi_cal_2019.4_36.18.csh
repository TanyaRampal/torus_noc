#!/usr/bin/env tcsh

if( $?CMC_HOME == 0) then
	setenv CMC_HOME /CMC
endif

source $CMC_HOME/scripts/mentor.2015.01.csh

# Mentor Calibre
setenv CALIBRE_HOME /CMC/tools/mentor/aoi_cal_2019.4_36.18/
setenv PATH ${PATH}:${CALIBRE_HOME}/bin

# Mentor Document
setenv MGC_DOC_PATH /CMC/tools/mentor/docs_cal_2020.2_14.12/
setenv MGC_HTML_BROWSER /usr/bin/firefox
setenv MGC_PDF_READER /usr/bin/evince



