#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>


const char *class_names[] = {
	"None",
	"ELF32",
	"ELF64"
};

const char *data_names[] = {
	"None",
	"2's complement, little endian",
	"2's complement, big endian"
};

const char *type_names[] = {
	"None",
	"REL (Relocatable file)",
	"EXEC (Executable file)",
	"DYN (Shared object file)",
	"CORE (Core file)"
};

/**
 * print_version - a function that prints the Version number of
 *      the elf specification
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
void print_osabi(Elf64_Half osabi)
{
	switch (osabi)
	{
		case ELFOSABI_SYSV || ELFOSABI_NONE:
			printf("OS/ABI:                           UNIX System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("OS/ABI:                            HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("OS/ABI:                            NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("OS/ABI:                            Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("OS/ABI:                            Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("OS/ABI:                            IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("OS/ABI:                            FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("OS/ABI:                            TRU64 UNIX\n");
			break;
		case ELFOSABI_ARM:
			printf("OS/ABI:                            ARM architecture\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("OS/ABI:                            Stand-alone (embedded)\n");
			break;
	}
}

/**
 * main - Write a program that displays the information contained in the
 *      ELF header at the start of an ELF file
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
	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	printf("ELF Header:\nMagic:\t");
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\nClass:                            ");
	printf("%s\n", class_names[header.e_ident[EI_CLASS]]);
	printf("Data:                             ");
	printf("%s\n", data_names[header.e_ident[EI_DATA]]);
	printf("Version:                          ");
	printf("%d (current)\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI:                           ");
	printf("%d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version:                      ");
	printf("%d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type:                             %s\n", type_names[header.e_type]);
	printf("Entry point address:              %#lx\n", header.e_entry);
	print_osabi(header.e_ident[EI_OSABI]);
	close(fd);
	return (0);
}
