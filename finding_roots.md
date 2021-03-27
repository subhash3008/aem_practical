* Chapter 2 Example 1
  a = .5
  b = 9
  eqn => e^(ax) - ax - b = 0
  return (exp(.5 * x) - (.5 * x) - 9);
  For newton derived val:
  return ((.5 * exp(.5 * x)) - .5);
  O/P:
  Interval >>>> 4 , 5
  Root found in : 52 iteration
  Root is 4.87368
  Regula Falsi Root found in : 12 iteration
  Regula Falsi Root is 4.87368
  Secant Root found in : 7 iteration
  Secant root is 4.87368
  Newton Root found in : 6 iteration
  Newton root is 4.87368

* Chapter 2.1 Q 3
  i. x^3 − 3x − 5 = 0
    return (pow(x, 3) - (3 * x) - 5);
    O/P:
    Root found in : 53 iteration
    Root is 2.27902
  ii. x^3 − 0.39x^2 − 10.5x + 11 = 0
    return (pow(x, 3) - (.39 * pow(x, 2)) - (10.5 * x) + 11);
    O/P:
    Interval >>>> -4 , -3
    Root found in : 53 iteration
    Root is -3.50336
    Interval >>>> 1 , 2
    No root found !!!! Iterations ran : 53
    Root is 0
    Interval >>>> 2 , 3
    Root found in : 53 iteration
    Root is 2.75273
  iii. x^4 − x − 10 = 0
    return (pow(x, 4) - x - 10);
    O/P:
    Interval >>>> -11 , -10
    No root found !!!! Iterations ran : 50
    Root is 0
    Interval >>>> -2 , -1
    No root found !!!! Iterations ran : 53
    Root is 0
    Interval >>>> 1 , 2
    Root found in : 54 iteration
    Root is 1.85558
  iv. 2^x − 2x^2 − 1 = 0
    return (pow(2, x) - (2 * pow(x, 2)) - 1);
    O/P:
    Interval >>>> 6 , 7
    Root found in : 52 iteration
    Root is 6.35234
  v. 2ln x − x/2 + 1 = 0
    return ((2 * log(x)) - (x / 2) - 1);
    O/P:
    Interval >>>> 2 , 3
    Root found in : 50 iteration
    Root is 3
    Interval >>>> 3 , 4
    Root found in : 25 iteration
    Root is 4
    Interval >>>> 4 , 5
    Root found in : 49 iteration
    Root is 5
    Interval >>>> 5 , 6
    Root found in : 50 iteration
    Root is 6
  vi. x − 0.2 sin x − 0.5 = 0
    return (x - (.2 * sin(x)) - .5);
    O/P:
    Interval >>>> 0 , 1
    Root found in : 55 iteration
    Root is 0.615468
