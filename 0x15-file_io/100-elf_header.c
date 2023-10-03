#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Display an error message and exit with a status code.
 * @msg: The error message to display.
 * @status: The exit status code.
 */
void error_exit(const char *msg, int status)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(status);
}

/**
 * print_elf_header - Print the information in the ELF header.
 * @header: A pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Unknown");
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown");
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		error_exit("Usage: elf_header elf_filename", 97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		error_exit("Error: Can't read from file", 98);
	}

	bytes_read = read(fd, &elf_header, sizeof(elf_header));
	if (bytes_read != sizeof(elf_header) || memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		error_exit("Error: Not an ELF file", 98);
	}

	print_elf_header(&elf_header);
	close(fd);

	return (0);
}

