project('sample_pybind', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++17'])

pybind11_dep = dependency('pybind11')
doctest_proj = subproject('onqtam-doctest')
doctest_dep = doctest_proj.get_variable('doctest_dep')

py_mod = import('python')
py3 = py_mod.find_installation()
py3_dep = py3.dependency()

subdir('test')
subdir('python')
