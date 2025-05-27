#!/usr/bin/bash
export LD_LIBRARY_PATH=/afs/desy.de/user/s/schaller/HiWi/topmass-alljets-kinfit/standaloneKinFitter/lib/el9_amd64_gcc12/6.26.11/:/cvmfs/cms.cern.ch/el9_amd64_gcc12/cms/cmssw/CMSSW_13_3_0/external/el9_amd64_gcc12/lib/:$LD_LIBRARY_PATH
#/usr/lib64/root:
export LD_PRELOAD=/cvmfs/cms.cern.ch/el9_amd64_gcc12/external/gcc/12.3.1-40d504be6370b5a30e3947a6e575ca28/lib64/libstdc++.so.6
#:/cvmfs/cms.cern.ch/el9_amd64_gcc12/cms/cmssw/CMSSW_13_3_0/external/el9_amd64_gcc12/lib/libNet.so
#/cvmfs/cms.cern.ch/el9_amd64_gcc12/cms/cmssw/CMSSW_13_3_1/lib/el9_amd64_gcc12/
export PYTHONPATH=/afs/desy.de/user/s/schaller/HiWi/topmass-alljets-kinfit/standaloneKinFitter/:$PYTHONPATH
