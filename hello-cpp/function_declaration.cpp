

size_t count_calls()
{
  static size_t ctr=0; //value will persist across calls
  return ++ctr;
}

int main()
{
  for (size+t i=0; i!=10; ++i)
    str::cout<< count_calls() <<std::endl;
    return 0;
}

