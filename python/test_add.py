import unittest

from add import add


class TestAdd(unittest.TestCase):
    def test_positive(self):
        self.assertEqual(add(2, 3), 5)

    def test_negative(self):
        self.assertEqual(add(-4, 2), -2)

    def test_zero(self):
        self.assertEqual(add(0, 7), 7)


if __name__ == "__main__":
    unittest.main()
