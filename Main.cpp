#include <iostream>

int main()
{
  for (size_t i = 0; i < 100; i++)
  {
    std::string output = "";
    if(i % 3 == 0)
    {
      output = "Fizz";
    }
    if(i % 5 == 0)
    {
      output = output + "Buzz";
    }
    else
    {
      output = i;
    }
    std::cout << output << std::endl;
  }
  std::cin.get();
  return 0;
}
