SCRPATH = ./
PYTHON_BASE = $(which python)
ifndef PYTHON_BASE
	PYTHON_BASE= $(which python3)
endif
CONDA_PATH = $CF_CONDA_PYTHONPATH
VENV_PATH = $CF_VENV_PYTHONPATH
pyfitAssignment:
	c++ -ggdb3  -O0 -Wall -shared -std=c++17 -fPIC -I$(SRCPATH)lib/el9_amd64_gcc12/6.26.11/python3.9/ -I /afs/desy.de/user/s/schaller/HiWi/topmass-alljets-kinfit/data/software/venvs/cf_5de7213c/lib/python3.9/site-packages/pybind11/include -I /cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.26.11-09a813662aa0f8eece54cb6d94bfed85/include/ -I $(SCRPATH) pyKinFit.cc -o pyKinFit.so -L $(SRCPATH)lib/el9_amd64_gcc12/6.26.11/ -L/cvmfs/cms.cern.ch/el9_amd64_gcc12/cms/cmssw/CMSSW_13_3_0/lib/el9_amd64_gcc12/ -L/cvmfs/cms.cern.ch/el9_amd64_gcc12/cms/cmssw/CMSSW_13_3_0/ -L/cvmfs/cms.cern.ch/el9_amd64_gcc12/cms/cmssw/CMSSW_13_3_0/external/el9_amd64_gcc12/lib/ -lCore -lMatrix -lPhysics -lTKinFitter -g
