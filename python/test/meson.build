py3_prog = find_program(py3.full_path())

test('test_python',
  py3_prog,
  args: [files('test.py')],
  env: ['PYTHONPATH=' + meson.project_build_root()],
  suite: 'python',
)
