Based on the KinFitter package by Thomas Goepfert:
KinFitter - A Kinematic Fit with Constraints

Wiki: https://github.com/goepfert/KinFitter/wiki/KinFitter---A-Kinematic-Fit-with-Constraints
Documentation: http://www.iktp.tu-dresden.de/~goepfert/KinFitter.pdf

# Setup:
setup your python environment
```bash
cd pyKinFit
make
```
edit path.sh according to the comments
in Python:
```
import pyKinFit
pyKinFit.setBestCombi(inputpt, inputeta, inputphi, inputmass)
```
You can execute
```bash
python3 cfest.py
```
to confirm everything works
