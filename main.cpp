#include <example1/example1.h>
#include <example2/example2.h>
#include <example3/example3.h>

int main(int argc, char *argv[])
{
    example1_add(1, 2);
    example2::add(1, 2);
    example3::add(1, 2);
 
    return 0;
}