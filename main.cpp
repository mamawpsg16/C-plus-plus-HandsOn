#include <iostream>
#include <typeinfo>
#include <sstream>
#include <iterator>
#include <vector>
#include <iomanip>
using namespace std;

// int main() {
//   cout << "Enter two numbers:" << endl;
//   int i =0 , j =0;
//   cin >> i >> j;
//   /* shit */
//   cout << "The sum of " << i << " and " << j << " is " << i + j << endl;
//   return 1;
// }

// Define the function
void OutputAge(int age)
{
  cout << "Function age: " << age << endl;
}

void greetings(string name);
string concatString(string firstName, string lastName);
void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);

void showBalance(double balance);
double deposit();
double widthraw(double balance);

char getPlayerChoice();
char getComputerChoice();
void showChoice(char choice);
void checkWinner(char playerChoice, char computerChoice);

void sortNumbers(int array[], int size);
void bubbleSort(vector<int> &vec);

int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);
int age = 15;

void swap(string &x, string &y);

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkTickTacToeWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);
void walk(int steps);
template <typename T, typename U>
auto sum (T a, U b)
{
  return a+b;
}
int factorial(int num);
int main()
{
  greetings("Kevin");
  srand(time(NULL));

  /** WHILE STATEMENT*/
  // int i =1,sum =0, val ;
  // while (i <= 10) {
  //   cout << i <<endl;
  //   sum+= i;
  //   i++;
  // }
  //   cout << "Total = "  << sum <<endl;
  // cout << "Enter value on where to end the summation of the current index:" << endl;
  // cin >> val;
  // while (i <= val) {
  //     sum+= i;
  //   i++;
  // }
  //    cout << "Total = "  << sum <<endl;

  /** FOR STATEMENT*/
  // int sum = 0, val;
  // cout << "Enter a number to sum up:" << endl;
  // cin >> val;
  // for (int i = 1 ; i <= val; i++)
  // {
  //   // cout << "Index: " << i << endl;
  //    sum += i;
  // }
  //   cout << "Sum of Index: " << sum << endl;

  /** READ UNKNOWN NUMBERS OF INPUT */
  // int sum = 0, val= 0;

  // while (cin >> val)
  // {
  //   sum+= val;
  // }
  // cout << "Sum = " << sum << endl;

  /* IF STATEMENT */

  // int choice;
  // cout << "Choose beverage you prefer :"<< endl  << "1 - Tea" << endl
  // << "2 - Coffee" << endl
  // << "Random - Exit" << endl;
  // cout << "Enter a number" << endl;
  // cin >> choice;

  // if (val > 10)
  // {
  //   cout << "The value is greater than 10" << endl;
  // }else if(val == 10){
  //   cout << "The value is equal to 10" << endl;
  // }else{
  //   cout << "The value is less equal to 10" << endl;
  // }

  // if(choice == 1){
  //   cout << "Congratulations you get a tea!" << endl;
  // }else if(choice == 2){
  //   cout << "Congratulations you get a coffee!" << endl;
  // }else{
  //   cout << "You didn't get anything, goodluck next time!" << endl;
  // }

  /** Count Number of Consecutive Inputs */

  // int currVal = 0, val = 0;
  // cout << "Enter value:" << endl;
  // if (cin >> currVal)
  // {
  //   int count = 1;
  //   while (cin >> val)
  //   {
  //       if (val == currVal)
  //       {
  //         count++;
  //       }
  //       else
  //       {
  //         cout << currVal << " Occurence " << count << " times" << endl;
  //         currVal = val;
  //         count = 1;
  //       }
  //       /* code */
  //   }
  //   cout << currVal << " Occurence " << count << " times " << endl;
  // }

  /** SCOPE OR USING GLOBAL SCOPE*/
  // int age = 0;

  // OutputAge(::age);

  /** REFERENCE (&) */
  // int initialValue = 1024;
  // int &refValue = initialValue;

  // cout << "ival = "<< initialValue <<endl <<"refVal = " << refValue ;
  // refValue=1000;
  // cout <<endl <<"New ival =" <<initialValue <<endl <<"New RefVal = " << refValue;

  /** POINTERS (*) */
  // int initialValue = 1024;
  // int *ptValue = &initialValue;

  // cout << "Initial Value = " << initialValue << " ptValueAddress = " << ptValue << " ptValue = " << *ptValue << endl;
  // *ptValue = 2000;
  // cout << "Initial Value = " << initialValue << " ptValueAddress = " << ptValue << " ptValue = " << *ptValue << endl;
  // initialValue = 100;
  // cout << "Initial Value = " << initialValue << " ptValueAddress = " << ptValue << " ptValue = " << *ptValue << endl;

  /** POINTERS CONST TOPLEVEL int *const p3 & LOW LEVEL const int ci */
  // int i =0;
  // int *const p1 = &i;
  // const int ci = 42;
  // const int *p2 = &ci;
  // const int *const p3 = p2;
  // const int  &r = ci;

  // // i = ci; // OK
  // p2 = p3; // OK
  // // int *p = p3; // ERROR
  // p2 =  &i; // OK
  // // int &r = ci;
  // // cout << i << "i = ci" <<endl;
  // cout << p2 << " p2 = p3 " << *p2 <<endl;
  // cout << p2 << "   p2 =  &i " << *p2 <<endl;

  /** AUTO TYPE*/
  // int a = 10, b = 20;
  // auto sum = a + b;
  // cout << "Sum =" << sum << endl;
  // cout <<typeid(sum).name() << endl;

  // double c = 10.20, d = 20.5;
  // auto sum1 = c + d;
  // cout << "Sum =" << sum1 << endl;
  // cout <<typeid(sum1).name() << endl;

  /** DECLTYPE AND REFERENCE*/
  // const int ci = 0, &cj = ci;
  // decltype (ci) x =0;
  // decltype (cj) y = x;
  // decltype (cj) z = 0;

  // cout << typeid(ci).name() << endl;
  // cout << typeid(cj).name() << endl;
  // cout << typeid(x).name() << endl;
  // cout << typeid(y).name() << endl;
  // cout << typeid(z).name() << endl;

  // int i = 42, *p = &i, &r = i;
  // decltype (r + 0) b;
  // decltype (*p) c = i;
  // decltype ((i)) d = b;
  // decltype (i) e;

  // cout << typeid(i).name() << endl;
  // cout << typeid(p).name() << endl;
  // cout << typeid(r).name() << endl;
  // cout << typeid(b).name() << endl;
  // cout << typeid(c).name() << endl;

  // cout <<"i =" << i << endl;
  // cout <<"p =" << p << endl;
  // cout <<"r =" << r << endl;
  // cout <<"b =" << b << endl;
  // cout <<"c =" << c << endl;

  /** STRING & READ/WRITE && getline to read an entire line, OPERATIONS empty(), size(), COMPARING */
  // string name ="Kevin";
  // string age;
  // string repeater (8,'K');
  // string copyRepeater (repeater);

  //   cout << "name " << name << endl << " age " << age << endl << " repeater " << repeater << endl << " copyRepeater "<< copyRepeater << endl;
  string userInput1, userInput2;
  // cout << "Type anything:" << endl;
  // cin >> userInput1 >> userInput2;
  // cout << userInput1 << userInput2 << endl;

  // while(cin >> userInput1)

  // while(getline(cin,userInput1) )
  // cout << userInput1 << endl;

  // getline(std::cin, userInput1);
  /** EMPTY */
  // if(userInput1.empty()){
  //   cout << userInput1 << "Value is Empty" <<endl;
  // }else{
  //   cout << userInput1 << "is not Empty" <<endl;
  // }

  /** SIZE also count space*/
  // auto len = userInput1.size();
  // cout << "Length of this string = " << len << endl;

  /** COMPARING  BASE IN characters size*/
  // string largest;
  // string s1 ="Grape";
  // string s2 ="Grapefruit";
  // string s3 ="gym";

  // if((s1 > s2) && (s1 > s3)){
  //   largest = s1;
  // }else if((s2 > s3) && (s2 > s1)){
  //   largest = s2;
  // }else{
  //   largest = s3;
  // }
  // cout << "largest: " << largest << endl;

  /** ADD STRINGS */
  // string s1 = "It's ", s2 = "my ", s3 = "dream";
  // string s4 = s1 + s2 + s3 +" to get my research paper ";
  // string s5 = " published ";
  // string s6 = s4;
  // s6 += s5;
  // string s7 (3,'E');
  // string s8 =" In the I ";
  // string s9 = s6+s8+s7;

  // cout << s9;

  /** PROCESSIONG EVERY CHARACTER IN STRING*/
  // string name = "Kevin";
  // for (auto &ch : name)
  // {
  //   ch = toupper(ch);
  // }

  // std::cout << name; //

  /**  STRING STREAM */
  // string mystr;
  // float price=0;
  // int quantity=0;

  // cout << "Enter price: ";
  // getline (cin,mystr);
  // stringstream(mystr) >> price;
  // cout << "Enter quantity: ";
  // getline (cin,mystr);
  // stringstream(mystr) >> quantity;
  // cout << "Total price: " << price*quantity << endl;

  // string shit = "WTF";
  // cout << shit.length() << endl;
  // cout << shit.size() << endl;

  /** PROCESSING SOME CHARACTERS IN STRINGS */
  // string readMe ("hello ff");
  // if(!readMe.empty()){
  //   readMe[0] = toupper(readMe[0]);
  // }
  // cout << readMe << endl;
  // cout << readMe.size() << endl;

  // decltype(readMe.size()) i;
  // for (i = 0; i != readMe.size() && !isspace(readMe[i]); ++i)
  // {
  //   /* code */
  //   readMe[i] = toupper(readMe[i]);
  // }
  // cout << readMe;

  // const string hexdigits = "0123456789ABCDEF";
  // cout << "Enter a string of 0 - 15 numbers, seperated by spaces." << endl
  //      << "When finished, press ENTER:";
  // string result;
  // string::size_type ip;
  // while (cin >> ip)
  // {
  //   if (ip < hexdigits.size())
  //   {
  //     result += hexdigits[ip];
  //   }
  // }
  // cout << "Your hex number is " << result << endl;

  /** VECTOR */

  // vector<int> myVec = {1,2,3,4};
  // vector<string> strVec;

  // for (int i : myVec)
  // {
  //   cout << i << endl;
  // }

  // for (int i = 0; i < myVec.size(); i++)
  // {
  //   cout << myVec[i] << endl;
  // }
  // string text;
  // while (cin >> text)
  // {
  //   strVec.push_back(text);
  // }

  // for (auto word: strVec)
  // {
  //   cout << word << endl;
  // }

  /** RANDOM PSEUDO */

  // USE CURRENT TIME AS A SEED FOR RAND
  //  srand(time(nullptr));

  //   // Generate and print some random numbers
  //   for (int i = 0; i < 5; ++i) {
  //       int randomNum = rand();
  //       std::cout << "Random Number " << i + 1 << ": " << randomNum << std::endl;
  //   }

  //   cout << (rand() % 6) + 1 <<endl;
  // int randNum = (rand() % 6) + 1;
  // switch (randNum)
  // {
  // case 1:
  //   cout << "You win a burger "  << endl;
  //   break;
  // case 2:
  //   cout << "You win a cheese stick "  << endl;
  //   break;
  // case 3:
  //   cout << "You win a siomai "  << endl;
  //   break;
  // default:
  //   cout << "Better luck next time!" << endl;
  //   break;
  // }
  // cout << randNum << endl;

  /** GUESS NUMBER*/

  // int num = (rand() % 100) + 1;
  // int guess;
  // int tries;
  // cout << num;
  // cout << "******* GUESS THE RANDOM NUMBER ******* \n"
  //      << endl;

  // do
  // {
  //   cout << "Enter a guess between ( 1 - 100 ): " << endl;
  //   tries++;
  //   cin >> guess;
  //   if (guess > num)
  //   {
  //     cout << "Too high" << endl;
  //   }
  //   else if (guess < num)
  //   {
  //     cout << "Too low" << endl;
  //   }
  //   else
  //   {
  //     cout << "Congratulation's you guess the number " << num << " with " << tries << " Tries" << endl;
  //   }
  // } while (guess != num);

  /** DEFINE FUNCTION CONCAT STRINGS */
  // string firstName, lastName, value;
  // cout << "Enter first name: ";
  // getline (cin,value);
  // stringstream(value) >> firstName;
  // cout << "Enter last name: ";
  // getline (cin,value);
  // stringstream(value) >> lastName;

  // string fullName = concatString(firstName, lastName);
  // cout << fullName <<endl;

  /** FUNCTION OVERLOAD */

  // cout << "Bake Pizza 1" << endl;
  // bakePizza();
  // cout << "Bake Pizza 2" << endl;
  // bakePizza("tomato");
  // cout << "Bake Pizza 3" << endl;
  // bakePizza("tomato","pepperoni");

  /** ATM EXERCISE*/

  // double balance = 0.0;
  // int option;
  // double widthraw_amount;
  // string optionValue;

  // cout << "Welcome to ATM" << endl;

  // do {
  //     cout << "Begin transaction by choosing an option" << endl
  //          << "1. Show Balance" << endl
  //          << "2. Deposit" << endl
  //          << "3. Withdraw" << endl
  //          << "4. Exit" << endl;

  //     cout << "Enter an option from 1 - 4: ";
  //     getline(cin, optionValue);
  //     stringstream(optionValue) >> option;

  //     switch (option) {
  //         case 1:
  //             showBalance(balance);
  //             break;
  //         case 2:
  //             balance += deposit();
  //             showBalance(balance);
  //             cout << '\n' <<endl;
  //             break;
  //         case 3:
  //             widthraw_amount  = widthraw(balance);
  //             if ( widthraw_amount > balance) {
  //                 cout << "Insufficient balance." << endl;
  //             } else {
  //                 balance -= widthraw_amount;
  //                 cout << "Withdrawal successful." << endl;
  //             }
  //             showBalance(balance);
  //             cout << '\n' <<endl;
  //             break;
  //         case 4:
  //             cout << "Thank you for visiting!" << endl;
  //             break;
  //         default:
  //             cout << "Invalid option, please try again." << endl;
  //             break;
  //     }
  //     // Clear the input buffer
  //     cin.ignore();
  // } while (option != 4);

  /** ROCK PAPER SCISSOR EXERCISE */
  // char playerChoice;
  // char computerChoice;
  // playerChoice = getPlayerChoice();
  // cout << "Your choice: ";
  // showChoice(playerChoice);

  // computerChoice = getComputerChoice();
  // cout << "Computer choice: ";
  // showChoice(computerChoice);

  // cout << "\nAnnouncement: ";
  // checkWinner(playerChoice, computerChoice);

  /** ARRAY */

  // string cars[] = {"Corvette","Mustang"};

  // for (auto car : cars)
  // {
  //   cout << car << endl;
  // }

  // BUBBLE SORT

  // vector<int> numbers = {2, 4, 3, 6, 7, 8, 9, 10};
  // // int numbers[] = {2, 4, 3, 6, 7, 8, 9, 10};
  // // int size = sizeof(numbers)/sizeof(int);
  // // sortNumbers(numbers,size);

  // bubbleSort(numbers);

  // vector<int> numbers2(10,25);
  //   for (int number : numbers2)
  // {
  // cout << number <<endl;

  // }

  /**  ARRAY FILL()*/
  // const int SIZE =  99;
  // string foods[SIZE];
  // fill(foods, foods + (SIZE/3), "pizza");
  // fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburgers");
  // fill( foods + (SIZE/3)*2, foods + SIZE, "hotdogs");
  // for (string food : foods)
  // {
  //   cout << food << endl;
  // }

  /** FILL AN ARRAY WITH USER INPUT */
  // string foods[5];
  // int size = sizeof(foods)/sizeof(string);
  // string temp;
  // for (int i = 0; i < size; i++)
  // {
  //   cout << "Enter a food you like or 'q' to quit : #" << i + 1<< ":" <<endl;
  //   getline(cin, temp);
  //   if(temp == "q"){
  //     break;
  //   }else{
  //     foods[i] = temp;
  //   }
  // }

  // cout << "You like the following foods :" << endl;

  // for (int i = 0; !foods[i].empty(); i++)
  // {
  //   cout << foods[i];
  // }

  /** MULTIDIMENSIONAL ARRAY */
  // string cars [][3] = {
  //     {"Mustang","Escape","F-15"},
  //     {"Corvette","Equinox","Silverado"},
  //     {"Challenger","Durango","Ram 1500"}
  //   };

  // int size = sizeof(cars);
  //  for (int i = 0; i < size; i++) {
  //       // Iterate through the columns
  //       for (int j = 0; j < size; j++) {
  //           std::cout << cars[i][j] << endl;
  //       }
  //       std::cout << std::endl; // Move to the next row
  //   }

  /** QUIZ PRACTICE */
  // string questions[] = {
  //   "1. What is 1 + 1 ?",
  //   "2. What is 2 - 1 ?",
  //   "3. What is 2 * 2 ?",
  //   "4. What is 4 / 2 ?",
  // };

  // int size = sizeof(questions)/sizeof(string);

  // string options[4][4] = {
  //   {
  //     "A. 2",
  //     "B. 3",
  //     "C. 4",
  //     "D. 11",
  //   },
  //   {
  //     "A. 3",
  //     "B. 4",
  //     "C. 0",
  //     "D. 1",
  //   },
  //   {
  //     "A. 2",
  //     "B. 6",
  //     "C. 4",
  //     "D. 9",
  //   },
  //   {
  //     "A. 1",
  //     "B. 2",
  //     "C. 3",
  //     "D. 4",
  //   },
  // };

  // int optionSize = sizeof(options[0]) / sizeof(options[0][0]);

  // char guess;
  // int score;
  // char answerKey[] = {'A','D','C','B'};
  //   for (int i = 0; i < size; i++)
  //   {
  //     cout << questions[i] << endl;
  //     for (int j = 0; j < optionSize; j++)
  //     {
  //       /* code */
  //       cout << options[i][j] << endl;
  //     }
  //     cin >> guess;
  //     guess = toupper(guess);
  //     cout << '\n';
  //     if(guess == answerKey[i]){
  //       cout<< "CORRECT!" << endl;
  //       score++;
  //     }else{
  //       cout<< "WRONG!" << endl;
  //       cout<< "Correct Answer: " << answerKey[i] << endl;
  //     }
  //     cout << '\n';
  //   }

  //   cout << "Number of Question : " << optionSize << endl;
  //   cout << "Score : " << score << (optionSize / score) << " %" << endl;

  /** PASS BY VALUE = JUST COPYING VALUE VS PASS BY REFERENCE = REFERING TO THE ORIGIN */

  // string x = "Kool";
  // string y = "Water";

  // swap(x,y);

  // cout <<"X = " << x << endl;
  // cout <<"Y = " << y << endl;

  /** LUN ALGHORIGTHM*/
  // string cardNumber;
  // int result=0;
  // cout <<"Enter a credit card#:";
  // cin >> cardNumber;

  // result =  sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
  // if(result % 10 == 0){
  //   cout << "Card number : " << cardNumber  << " is valid" << endl;
  // }else{
  //   cout << "Card number : " << cardNumber  << " is not valid" << endl;
  // }

  /** POINTERS = & address-of operator / * dereference operator*/
  // string name ="Bro";
  // string *pName = &name;
  // int age = 21;
  // string freePizzas[3] = {"pizza1","pizza2","pizza3"};
  // this just point to the first element
  // string *pFreePizzas = freePizzas;

  // this to access elements of the array
  //  string *pFreePizzas = &freePizzas[0];
  //  int *pAge = &age;
  //  int size = sizeof(freePizzas)/sizeof(freePizzas[0]);

  /** ALSO CHANGE THE name DO THIS TO CHANGE THE REFERENCE WHERE THE PNAME POINTS*/
  // *pName = "Shit";

  // cout << name << " =  " << *pName << endl;
  // cout << age << " =  " << *pAge << endl;
  // cout << "freePizzas = " << freePizzas << endl;
  // cout << "*pFreePizzas = " << *pFreePizzas << endl;

  // cout << "*pFreePizzas = " << pFreePizzas << endl;
  // for (int i = 0; i < size; i++)
  // {
  //     cout << "*pFreePizzas = " << pFreePizzas[i] << endl;
  // }

  /** NULL POINTER*/
  // int *pointer = nullptr;
  // int x = 123;
  // // pointer = &x;
  // if(pointer == nullptr){
  //   cout << "Address was not assigned" << endl;
  // } else{
  //   cout << "Address was assigned:" << *pointer << endl;

  // }

  /** TIC TAC TOE EXERCISE */
  // char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
  // char player = 'X';
  // char computer = 'O';
  // bool running = true;

  // drawBoard(spaces);
  
  // while(running){
  //   playerMove(spaces, player);
  //   drawBoard(spaces);

  //   if(checkTickTacToeWinner(spaces, player, computer)){
  //     running = false;
  //   }else if(checkTie(spaces)){
  //     running = false;
  //   }
  //   computerMove(spaces, computer);
  //   drawBoard(spaces);

  //   if(checkTickTacToeWinner(spaces, player, computer)){
  //     running = false;
  //   }else if(checkTie(spaces)){
  //     running = false;
  //   }
  // }

  // cout << "Thanks for playing !" << endl;

  // int names[2] = {1,2};
  // string names[2] = {"Shit","Hello"};
  // string *pName = names;
  // int size = sizeof(names)/sizeof(names[0]);
  // for (int i = 0; i < size; i++)
  // {
  //   cout << pName[i] << endl;
  // }

  /** DYNAMIC MEMORY*/
  // int *pNum = NULL;

  // pNum = new int;

  // *pNum = 21;


  // cout << pNum << endl;
  // cout << *pNum << endl;
  // delete pNum;

  // char *pGrades = NULL;
  // int size;
  // cout << "How many grades to enter in?: ";
  // cin >> size; 
  // pGrades = new char[size];

  // for (int i = 0; i < size; i++)
  // {
  //   cout << "Enter grade #" << i + 1<< endl << ": ";
  //   cin >> pGrades[i];
  // }
  
  // for (int i = 0; i < size; i++)
  // {
  //   cout << pGrades[i] << " ";
  // }

  // delete[] pGrades;
  
  /** RECURSION*/

  // walk(100);

  // cout << factorial(10) << endl;
  
  /** FUNCTION TEMPLATE */

  std::cout << sum(10,20.5) << std::endl;

  return 0;
}

void greetings(string name)
{
  int i = 1;
  // while (i < 10)
  // {
  //   cout << "Happy birthday " << name << endl;
  //   i++;
  // }
}

string concatString(string firstName, string lastName)
{
  return firstName + " " + lastName;
}

/** FUNCTION OVERLOAD */
void bakePizza()
{
  cout << "Here is your pizza" << endl;
}
void bakePizza(string topping1)
{
  cout << "Here is your pizza with " << topping1 << endl;
}
void bakePizza(string topping1, string topping2)
{
  cout << "Here is your pizza with " << topping1 << " & " << topping2 << endl;
}

void showBalance(double balance)
{
  cout << "Your balance is " << fixed << setprecision(2) << balance << endl;
}

double deposit()
{
  double deposit_amount;
  cout << "Enter amount you would like to deposit: ";
  cin >> deposit_amount;
  if (deposit_amount < 0)
  {
    cout << "That's not a valid amount" << endl;
    ;
    return 0;
  }

  return deposit_amount;
}

double widthraw(double balance)
{
  // Implement the widthraw function logic here
  double widthraw_amount;
  cout << "Enter amount you would like to widthraw: ";
  cin >> widthraw_amount;

  if (widthraw_amount > balance)
  {
    cout << "Insufficient balance: " << balance << endl;
    ;
    return 0;
  }
  else if (widthraw_amount < 0)
  {
    cout << "That's not a valid amount" << endl;
    return 0;
  }

  return widthraw_amount;
}

char getPlayerChoice()
{

  char choice;
  do
  {
    cout << "Choose an option between r,p or s : " << endl
         << "r for Rock" << endl
         << "p for Paper" << endl
         << "s for Scissor" << endl;
    cin >> choice;
    cin.ignore();
  } while (choice != 'r' && choice != 'p' && choice != 's');

  return choice;
}

char getComputerChoice()
{
  int randNum = (rand() % 3) + 1;

  switch (randNum)
  {
  case 1:
    return 'r';
  case 2:
    return 'p';
  case 3:
    return 's';
  }

  return 0;
}

void showChoice(char choice)
{
  switch (choice)
  {
  case 'r':
    cout << "Rock" << endl;
    break;
  case 'p':
    cout << "Paper" << endl;
    break;
  case 's':
    cout << "Scissor" << endl;
    break;
  default:
    cout << "Not valid" << endl;
    break;
  }
}

void checkWinner(char playerChoice, char computerChoice)
{
  switch (playerChoice)
  {
  case 'r':
    if (computerChoice == 'r')
    {
      cout << " TIE!" << endl;
    }
    else if (computerChoice == 'p')
    {
      cout << " You win!" << endl;
    }
    else
    {
      cout << " You win!" << endl;
    }
    break;
  case 'p':
    if (computerChoice == 'r')
    {
      cout << " You win!" << endl;
    }
    else if (computerChoice == 'p')
    {
      cout << " TIE!" << endl;
    }
    else
    {
      cout << " You Lose!" << endl;
    }
    break;
  case 's':
    if (computerChoice == 'r')
    {
      cout << " You lose!" << endl;
    }
    else if (computerChoice == 'p')
    {
      cout << " You win!" << endl;
    }
    else
    {
      cout << " TIE!" << endl;
    }
    break;
  default:
    cout << "Not valid" << endl;
    break;
  }
}

void sortNumbers(int array[], int size)
{
  int temp = 0;
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void bubbleSort(vector<int> &vec)
{
  int n = vec.size();
  bool swapped;

  do
  {
    swapped = false;
    for (int i = 0; i < n - 1; i++)
    {
      if (vec[i] > vec[i + 1])
      {
        std::swap(vec[i], vec[i + 1]);
        swapped = true;
      }
    }
  } while (swapped);
}

void swap(string &x, string &y)
{
  string temp;

  temp = x;
  x = y;
  y = temp;
}

int getDigit(const int number)
{
  return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const string cardNumber)
{
  int sum = 0;

  for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
  {
    sum += cardNumber[i] - '0';
  }
  return sum;
}

int sumEvenDigits(const string cardNumber)
{

  int sum = 0;

  for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
  {
    sum += getDigit((cardNumber[i] - '0') * 2);
  }
  return sum;
}

void drawBoard(char *spaces)
{
  cout << "" << endl;
  cout << "     |     |     " << endl;
  cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << endl;
  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;
  cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << endl;
  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;
  cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << endl;
  cout << "" << endl;
}

void playerMove(char *spaces, char player)
{
  int number;
  do{
    /* code */
    cout << "Enter a spot to place a market (1-9)";
    cin >> number;
    number --;
    if(spaces[number] == ' '){
      spaces[number] = player;
      break;
    }
  } while (!number > 0 || !number < 8);
  
}

void computerMove(char *spaces, char computer)
{
  int number;
  srand(time(NULL));
  while (true)
  {
    number = rand() % 9;
    if(spaces[number] == ' '){
      spaces[number] = computer;
      break;
    }
  }
  
}

bool checkTickTacToeWinner(char *spaces, char player, char computer)
{
  if(spaces[0] != ' ' && spaces[1] != ' ' && spaces[2] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
    spaces[0] == player ? cout << "You Win!" :  cout << "You Lose!" <<endl;
  }else if(spaces[3] != ' ' && spaces[4] != ' ' && spaces[5] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
    spaces[3] == player ? cout << "You Win!" :  cout << "You Lose!" <<endl;
  }else if(spaces[6] != ' ' && spaces[7] != ' ' && spaces[8] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
    spaces[6] == player ? cout << "You Win!" :  cout << "You Lose!" <<endl;
  }else if(spaces[0] != ' ' && spaces[3] != ' ' && spaces[4] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
    spaces[0] == player ? cout << "You Win!" :  cout << "You Lose!" <<endl;
  }else if(spaces[1] != ' ' && spaces[4] != ' ' && spaces[7] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
    spaces[1] == player ? cout << "You Win!" :  cout << "You Lose!" <<endl;
  }else if(spaces[2] != ' ' && spaces[5] != ' ' && spaces[8] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
    spaces[2] == player ? cout << "You Win!" :  cout << "You Lose!" <<endl;
  }else if(spaces[0] != ' ' && spaces[4] != ' ' && spaces[8] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
    spaces[0] == player ? cout << "You Win!" :  cout << "You Lose!" <<endl;
  }else if(spaces[2] != ' ' && spaces[4] != ' ' && spaces[6] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
    spaces[2] == player ? cout << "You Win!" :  cout << "You Lose!" <<endl;
  }else{
    return false;
  }
  return true;
}

bool checkTie(char *spaces)
{
  for (int i = 0; i < 9; i++)
  {
    if(spaces[i] == ' '){
      return false;
    }
  }
  cout << "ITS A TIE" << endl;
  
  return true;
}

/** RECURSION */
void walk(int steps){
  /* ITERATIVE */
  // for (int i = 0; i < steps; i++)
  // {
  //   cout << "You take a step!"<<endl;
  // }

  /** RECURSION*/
  if(steps > 0){
     cout << "You take a step!"<<endl;
     walk(steps - 1);
  }
}

int factorial(int num){
  // int result  = 1;
  // for (int i = 1; i <= num; i++)
  // {
  //   result *= i; 
  // }
  
  if(num > 1){
    return num * factorial(num - 1);
  }else{
    return 1;
  }
}
