# Printf: [![kdaniely's 42 ft_printf Score](https://badge42.vercel.app/api/v2/cldiw2g0k01220fl8ferid3xf/project/2950768)](https://github.com/JaeSeoKim/badge42)

A partial reimplementation of the printf in C. Handles only the following conversions.

| Conversion | Short Description                                                                             |
|------------|-----------------------------------------------------------------------------------------------|
| %c         | Print a single character.                                                                     |
| %s         | Print a string of characters.                                                                 |
| %p         | The void * pointer argument is printed in hexadecimal.                                        |
| %d         | Print a decimal (base 10) number.                                                             |
| %i         | Print an integer in base 10.                                                                  |
| %u         | Print an unsigned decimal (base 10) number.                                                   |
| %x         | Print a number in hexadecimal (base 16), with lowercase.                                      |
| %X         | Print a number in hexadecimal (base 16), with uppercase.                                      |
| %%         | Print a percent sign.                                                                         |
| %#x        | Print "0x" before a hexadecimal number.                                                       |
| % d        | Print space before a decimal number if it is a positive number.                               |
| %+d        | Print + before a decimal number if it is a positive number.                                   |
