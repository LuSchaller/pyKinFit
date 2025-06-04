SRCPATH = ./
CONDA_BASE = $(CF_CONDA_BASE)
VENV_PATH = $(CF_VENV_PYTHONPATH)
pyfitAssignment:
	pip install pybind11
	c++ -ggdb3  -O0 -Wall -shared -std=c++17 -fPIC -I$(CONDA_BASE)/include/python3.9/ -I$(VENV_PATH)/pybind11/include -I /cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.26.11-09a813662aa0f8eece54cb6d94bfed85/include/ -I $(SRCPATH) -I /cvmfs/cms.cern.ch/el9_amd64_gcc12/cms/cmssw/CMSSW_13_3_0/external/el9_amd64_gcc12/lib/ pyKinFit.cc -o pyKinFit.so -L $(SRCPATH)lib/el9_amd64_gcc12/6.26.11/ -L/cvmfs/cms.cern.ch/el9_amd64_gcc12/cms/cmssw/CMSSW_13_3_0/lib/el9_amd64_gcc12/ -L/cvmfs/cms.cern.ch/el9_amd64_gcc12/cms/cmssw/CMSSW_13_3_0/ -L/cvmfs/cms.cern.ch/el9_amd64_gcc12/cms/cmssw/CMSSW_13_3_0/external/el9_amd64_gcc12/lib/ -L /cvmfs/cms.cern.ch/el9_amd64_gcc12/external/gcc/12.3.1-40d504be6370b5a30e3947a6e575ca28/lib64/ -lstdc++ -lCore -lMatrix -lPhysics -lTKinFitter -g -L /afs/desy.de/user/s/schaller/HiWi/topmass-alljets-kinfit/standaloneKinFitter/lib/el9_amd64_gcc12/6.26.11/
