const test = require('node:test');
const assert = require('node:assert');
const { add } = require('./add');

test('adds two positive numbers', () => {
  assert.strictEqual(add(2, 3), 5);
});

test('adds negative numbers', () => {
  assert.strictEqual(add(-4, 2), -2);
});

test('adds with zero', () => {
  assert.strictEqual(add(0, 7), 7);
});
