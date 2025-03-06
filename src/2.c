
int solveMathProblem() {
  double num1 = getRandomNum(10);
  double num2 = getRandomNum(10);
  char op;
  switch (getRandomInt(3)) {
    case 0:
      op = '+';
      break;
    case 1:
      op = '-';
      break;
    case 2:
      op = '*';
      break;
  }
  double result = calculateResult(num1, num2, op);
  return (int)result;
}

double calculateResult(double num1, double num2, char op) {
  if (op == '+') {
    return num1 + num2;
  } else if (op == '-') {
    return num1 - num2;
  } else if (op == '*') {
    return num1 * num2;
  }
}

double getRandomNum(int max) {
  return ((double)rand() / RAND_MAX) * max;
}

int getRandomInt(int max) {
  return (int)(getRandomNum(max + 1));
}