#include <iostream>
#include <vector>

int main(void)
{
  unsigned int target = 0;
  unsigned int sum = 0;
  std::vector<unsigned int> list;

  std::cout << "Please enter a positive number: ";
  std::cin >> target;

  for(unsigned int i = 3; i <= target; i++)
    {
      if((i % 3) == 0)
	list.push_back(i);
      else if(((i % 5) == 0) && (list.back() != i))
	list.push_back(i); 
    }

  for(unsigned int j = 0; j < list.size(); j++)
    {
      if(j % 5 == 0)
	std::cout << std::endl;

      sum += list[j];
      
      std::cout << list[j] << " ";     
    }
  std::cout << std::endl;

  std::cout << "The sum of all multiples is: " << sum << std::endl;
  

  return 0;
}
