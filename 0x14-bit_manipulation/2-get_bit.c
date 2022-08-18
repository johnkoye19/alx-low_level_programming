Write a function that returns the value of a bit at a given index.

int get_bit(unsigned long int n, unsigned int index)
{
while (n >= 0)
{
n = n / 2;
}
}
where index is the index, starting from 0 of the bit you want to get
Returns: the value of the bit at index index or -1 if an error occured
