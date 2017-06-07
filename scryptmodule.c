#include <Python.h>

#include "scrypt.h"

static PyObject *scrypt_getpowhash(PyObject *self, PyObject *args)
{
    char *output;
    PyObject *value;
    PyStringObject *input;
    unsigned int N;
    if (!PyArg_ParseTuple(args, "S", &input))
        return NULL;
    Py_INCREF(input);
    output = PyMem_Malloc(32);
    //N = 1 << (getNfactor((char *)PyString_AsString((PyObject*) input)) + 1);
    N = 1 << (11); 

    scrypt_N_1_1_256((char *)PyString_AsString((PyObject*) input), output, N);
    Py_DECREF(input);
    value = Py_BuildValue("s#", output, 32);
    PyMem_Free(output);
    return value;
}

static PyMethodDef ScryptMethods[] = {
    { "getPoWHash", scrypt_getpowhash, METH_VARARGS, "Returns the proof of work hash using scrypt" },
    { NULL, NULL, 0, NULL }
};

PyMODINIT_FUNC initfjc_scrypt(void) {
    (void) Py_InitModule("fjc_scrypt", ScryptMethods);
}
