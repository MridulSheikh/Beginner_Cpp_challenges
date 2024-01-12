const start = 8;
const end = 11;

const lessThanNine = [
  "zero",
  "one",
  "two",
  "three",
  "four",
  "five",
  "six",
  "seven",
  "eight",
  "nine",
];

const printEvenOrOdd = (n) => {
  if (n % 2 == 0) {
    console.log("even");
    return;
  }
  console.log("odd");
};

for (let i = start; i <= end; i++) {
  if (i <= 9) {
    console.log(lessThanNine[i]);
  } else {
    printEvenOrOdd(i);
  }
}
