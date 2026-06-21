// Reads a line like "1 + 2" from stdin and prints the sum.
// Handy for an input/output test: input "1 + 2", expected output "3".
let input = '';
process.stdin.on('data', chunk => {
  input += chunk;
});
process.stdin.on('end', () => {
  const match = input.trim().match(/^(-?\d+)\s*\+\s*(-?\d+)$/);
  if (!match) {
    console.error('Usage: echo "1 + 2" | node calculator.js');
    process.exit(1);
  }
  console.log(Number(match[1]) + Number(match[2]));
});
