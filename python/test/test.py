import unittest

import _sample_bind as sb


class BindingTest(unittest.TestCase):
    def test_add(self):
        self.assertEqual(sb.add(10, 20), 30)


if __name__ == "__main__":
    unittest.main()
