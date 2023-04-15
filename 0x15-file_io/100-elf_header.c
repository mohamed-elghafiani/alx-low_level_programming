#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>


/**
 * print_version: a function that prints the Version number of
 *	the elf specification
 *
 * @version: version number
 * Return: Nothing
 */
void print_version(int version)
{
	if (version == EV_NONE)
	{
		printf("\nVersion:\t%d (Invalid version)", version);
	}
	printf("\nVersion:\t%d (Current version)", version);
}

/**
 * print_osabi - the operating system and ABI to which the object is targeted
 *
 * @osabi: a byte identifying the OS and ABI
 * Return: Nothing
 */
void print_osabi(int osabi)
{
	switch (osabi)
	{
	case ELFOSABI_SYSV || ELFOSABI_NONE:
		printf("OS/ABI:\t UNIX System V ABI");
		break;
	case ELFOSABI_HPUX:
		printf("OS/ABI:\t HP-UX ABI");
		break;
	case ELFOSABI_NETBSD:
		printf("OS/ABI:\t NetBSD ABI");
		break;
	case ELFOSABI_LINUX:
		printf("OS/ABI:\t Linux ABI");
		break;
	case ELFOSABI_SOLARIS:
		printf("OS/ABI:\t Solaris ABI");
		break;
	case ELFOSABI_IRIX:
		printf("OS/ABI:\t IRIX ABI");
		break;
	case ELFOSABI_FREEBSD:
		printf("OS/ABI:\t FreeBSD ABI");
		break;
	case ELFOSABI_TRU64:
		printf("OS/ABI:\t TRU64 UNIX ABI");
		break;
	case ELFOSABI_ARM:
		printf("OS/ABI:\t ARM architecture ABI");
		break;
	case ELFOSABI_STANDALONE:
		printf("OS/ABI:\t Stand-alone (embedded) ABI");
		break;
	}
}

/**
 * main - Write a program that displays the information contained in the
 *	ELF header at the start of an ELF file
 *
 * @argc: arguments number
 * @argv: arguments vector
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	int fd, i;
	Elf64_Ehdr header;

	if (argc < 2)
	{
		dprintf(STDERR_FILENO, "Error: Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	printf("ELF Header:\n");
	printf("Magic:\t");
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	print_version(EI_VERSION);
	print_osabi(EI_OSABI);
	printf("\nClass:\t%x\n", EI_CLASS);
	return (0);
}
