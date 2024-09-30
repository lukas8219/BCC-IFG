
**Exercício 1** Explique as funções dos seguintes componentes de um sistema operacional: 
![[Pasted image 20240928180237.png]]
- Gerenciador de E/S; 
- Gerenciador de memória; 
  One of the responsibilities of a modern computer system is memory management. Although the memory size of computers has increased tremendously in recent years, so has the size of the programs and data to be processed. Memory allocation must be managed to prevent applications from running out of memory. Operating systems can be divided into two broad categories of memory management: monoprogramming and multiprogramming.
  - Monoprogramming: most of the memory capacity is dedicated to a single program. In this configuration, the whole program is in memory for execution. The job of the memory manager is straightforward here. It loads the program into memory, runs it, and replaces it with the next program. The program must fit into memory. If the size of memory is less than the size of the program, the program cannot be run. When one program is being run, no other program can be executed. A program, during its execution, often needs to receive data from input devices and needs to send data to output devices. A program, during its execution, often needs to receive data from input devices and needs to send data to output devices. Input/output devices are slow compared with the CPU, so when the input/output operations are being carried out, the CPU is idle. It cannot serve another program because this program is not in memory. This is a very inefficient use of memory and CPU time.
  - Multiprogramming: more than one program is in memory at the same time, and they are executed concurrently, with the CPU switching rapidly between the programs.
![[Pasted image 20240928180824.png]]
	- Partitioning: In this scheme, memory is divided into variable-length sections. Each section or partition holds one program. The CPU switches between programs. It starts with one program, executing some instructions until it either encounters an input/output operation or the time allocated for that program has expired. The CPU then saves the address of the memory location where the last instruction was executed and moves to the next program. The same procedure is repeated with the second program. After all the programs have been served, the CPU moves back to the first program. With this technique, each program is entirely in memory and occupying contiguous locations. Partitioning improves the efficiency of the CPU, but there are still some issues: The size of the partitions has to be determined beforehand by the memory manager. If partition sizes are small, some programs cannot be loaded into memory. If partition sizes are large, there might be some ‘holes’ (unused locations) in memory. ❑ Even if partitioning is perfect when the computer is started, there may be some holes after completed programs are replaced by new ones.
	- Paging: In paging, memory is divided into equally sized sections called frames. Programs are also divided, into equally sized sections called pages. The size of a page and a frame is usually the same and equal to the size of the block used by the system to retrieve information from a storage device. A page is loaded into a frame in memory. If a program has three pages, it occupies three frames in memory. With this technique, the program does not have to be contiguous in memory: two consecutive pages can occupy noncontiguous frames in memory. The advantage of paging over partitioning is that two programs, each using three noncontiguous frames, can be replaced by one program that needs six frames. There is no need for the new program to wait until six contiguous frames are free before being loaded into memory. Paging improves efficiency to some extent, but the whole program still needs to be in memory before being executed. This means that a program that needs six frames, for example, cannot be loaded into memory if there are currently only four unoccupied frames.

- Gerenciador de CPU; 
- Gerenciador de arquivos. 

---


**Exercício 2** O que são drivers de dispositivos e como eles se relacionam com o gerenciador de dispositivos? O que ocorre em um PC quando o sistema operacional não possui instalados os respectivos drivers de dispositivos?

---
**Exercício 3** Por que as Application Programming Interfaces dos sistemas operacionais são formam um componente muito importante para os programadores? Explique. 

---
**Exercício 4** Qual a importância dos compiladores para os programadores? Explique.