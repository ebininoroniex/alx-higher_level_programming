#include <Python.h>

/**
 * print_python_list - prints some basic info about Python lists
 * @p: Python object
 */
void print_python_list(PyObject *p)
{
    Py_ssize_t size, i;
    PyObject *item;

    size = PyList_Size(p);

    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %zd\n", size);
    printf("[*] Allocated = %zd\n", ((PyListObject *)p)->allocated);
    printf("[*] Items:\n");

    for (i = 0; i < size; i++)
    {
        item = PyList_GetItem(p, i);
        printf("Element %zd: %s\n", i, Py_TYPE(item)->tp_name);
    }
}

/**
 * print_python_bytes - prints some basic info about Python bytes objects
 * @p: Python object
 */
void print_python_bytes(PyObject *p)
{
    Py_ssize_t size, i;
    char *s;

    if (!PyBytes_Check(p))
    {
        printf("[!] Invalid Bytes Object\n");
        return;
    }

    size = PyBytes_Size(p);
    s = PyBytes_AsString(p);

    printf("[.] bytes object info\n");
    printf("  size: %zd\n", size);
    printf("  trying string: %s\n", s);

    if (size > 10)
    {
        printf("  first 10 bytes: %.*s\n", 10, s);
    }
    else
    {
        printf("  first %zd bytes: %.*s\n", size, size, s);
    }
}
