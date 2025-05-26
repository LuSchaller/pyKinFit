#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
namespace py = pybind11;

#include "KinFit.cc"

PYBIND11_MODULE(pyKinFit, m) {
    m.doc() = "KinFitter module"; // optional module docstring

    m.def("setBestCombi", &setBestCombi, "A function that returns the best combination of jets and their fitted values based on the chi2 value of the kinematic fit", py::arg("inputpt"), py::arg("inputeta"), py::arg("inputphi"), py::arg("inputM"), py::return_value_policy::automatic);
}
