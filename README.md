<div align="center" style="text-decoration: none;">
    <img src="https://raw.githubusercontent.com/15Galan/42_project-readmes/master/banners/cursus/projects/ft_printf-light.png#gh-light-mode-only" alt="Banner (claro)" />
    <img src="https://raw.githubusercontent.com/15Galan/42_project-readmes/master/banners/cursus/projects/ft_printf-dark.png#gh-dark-mode-only" alt="Banner (oscuro)" />
    <br>
    This project aims to redo in C the printf() function.
    <br>
    This will primarily teach you how to handle a variable number of arguments.
    <br><br>
    <a href='https://profile.intra.42.fr/users/dsarmien' target="_blank" style="text-decoration: none;">
        <img alt='42 Málaga' src='https://img.shields.io/badge/Málaga-black?style=for-the-badge&logo=42&logoColor=white'/>
    </a>
    <img src="https://img.shields.io/badge/100%20%2F%20100-success?style=for-the-badge&label=SUCCESS&labelColor=%23424242&color=%23DACE28" />
    <img src="https://api.visitorbadge.io/api/visitors?path=https%3A%2F%2Fgithub.com%2FWildZarek%2Fft_printf&label=VISITORS&labelColor=%23424242&countColor=%23dace28&labelStyle=upper"/>
  
</div>

---

# <a href='https://projects.intra.42.fr/42cursus-ft_printf/dsarmien' target="_blank">ft_printf</a>

## Mandatory Part

<table>
  <tr>
    <th>Program Name</th>
    <td><em>libftprintf.a</em></td>
  </tr>
  <tr>
    <th>Turn in files</th>
    <td>Makefile, <code>*.h</code>, <code>*/*.h</code>, <code>*.c</code>, <code>*/*.c</code>,</td>
  </tr>
  <tr>
    <th>Makefile</th>
    <td><em>NAME</em>, <em>all</em>, <em>clean</em>, <em>fclean</em>, <em>re</em></td>
  </tr>
  <tr>
    <th>External functs.</th>
    <td><code>malloc()</code>, <code>free()</code>, <code>write()</code>, <code>va_start()</code>, <code>va_arg()</code>, <code>va_copy()</code>, <code>va_start()</code></td>
  </tr>
  <tr>
    <th>Description</th>
    <td>Write a library that contains <code>ft_printf()</code>, a function that will mimic the original <code>printf()</code></td>
  </tr>
</table>

The prototype of `ft_printf()` is:

```c
int ft_printf(char const *, ...);
```

## Technical considerations

- Do not implement the original printf()’s buffer management.
- Your function has to handle the following conversions: `cspdiuxX%`
- Your implementation will be evaluated against the behavior of the original `printf()`.
- All files must be placed at the root of your repository.
- Every `.c` file must compile with the following *flags*: `-Wall -Werror -Wextra`.
- You must use the `ar` command to create your library. The use of `libtool` is strictly forbidden.
- Your `libftprintf.a` must be created at the root of your repository.

You have to implement the following conversions:

- `%c` Prints a single character.
- `%s` Prints a string (as defined by the common C convention).
- `%p` The void * pointer argument has to be printed in hexadecimal format.
- `%d` Prints a decimal (base 10) number.
- `%i` Prints an integer in base 10.
- `%u` Prints an unsigned decimal (base 10) number.
- `%x` Prints a number in hexadecimal (base 16) lowercase format.
- `%X` Prints a number in hexadecimal (base 16) uppercase format.
- `%%` Prints a percent sign.

# Bonus part

> [!WARNING]  
> Not done for this project.

Rules:

- Manage any combination of the following flags: `-0.` and the field minimum width under all conversions.
- Manage all the following flags: `# +` (Yes, one of them is a space)