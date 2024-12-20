
#include <iostream>
#include <vector>
#include <algorithm>



std::vector<int> _numbers;
int _input;


void AskUserInputFiveNum();
void GetTheHighestNumber(std::vector<int>& numbers);
void AskUserForNumbers();
void MultiplyByTow(std::vector<int>& _numbers);

void AskUserForNumbers()
{
	std::cout << "Please input number\n";

	while (true)
	{
		std::cout << "input 0 to stop\n";

		std::cin >> _input;

		if (_input == 0)
		{
			std::cout << "STOPPED\n";
			break;
		}

		std::cout << "You just Input :" << _input << std::endl;

		_numbers.push_back(_input);
	}

	if (!_numbers.empty())
		MultiplyByTow(_numbers);
}

void MultiplyByTow(std::vector<int>& _numbers)
{
	int _result;

	if (_numbers.size() < 3)
	{
		std::cout << "Not enough number please Enter at lest 3 numbers \n";
		_numbers.clear();
		AskUserForNumbers();
	}

	for (int i = 0; i < _numbers.size(); i += 2)
	{
		_result = _numbers[i] * 2;

		std::cout << "The number : " << _numbers[i] << "Multiply by 2 is : " << _result <<"\n";
	}
}

void GetTheHighestNumber(std::vector<int>& numbers)
{
	auto _getHighestNum = std::max_element(_numbers.begin(), _numbers.end());
	if (_getHighestNum != _numbers.end()) {
		std::cout << *_getHighestNum << " is the Highest number \n";
	}
}

void AskUserInputFiveNum()
{
	std::cout << "Please input 5 numbers : \n";

	for (int i = 0; i < 5; i++)
	{
		std::cin >> _input;

		std::cout << "You Input :" << _input << std::endl;

		if (std::cin.fail())
		{
			std::cout << "Non digit found Please enter numbers only" << std::endl;


			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			i--;
			continue;
		}

		_numbers.push_back(_input);
	}

	GetTheHighestNumber(_numbers);
}


void ReverseLoop() 
{
	std::vector<int> _numbs = { 1,2,3,4,5 };

	for (int i = _numbs.size(); i--> 0;)
	{
		std::cout << "Loop Reversed : " << _numbs[i] << "\n";
	}
}

int main()
{
	//ReverseLoop();
	//AskUserInputFiveNum();
	//AskUserForNumbers();
}




