# Number-Base-Conversion

# Author
[Kayden Silva]

# Build Instructions
‘‘‘bash
gcc-o convert convert.c main.c
./convert
‘‘‘

# Test Results
Test 1: div_convert(104, 5) => "404" [PASS]
Test 2: div_convert(156, 8) => "234" [PASS]
Test 3: div_convert(255, 16) => "FF" [PASS]
Test 4: div_convert(255, 10) => "255" [PASS]
Test 5: div_convert(255, 2) => "11111111" [PASS]
Test 6: div_convert(42, 2) => "101010" [PASS]
Test 7: div_convert(0, 2) => "0" [PASS]
Test 8: div_convert(0, 8) => "0" [PASS]
Test 9: div_convert(0, 10) => "0" [PASS]
Test 10: div_convert(0, 16) => "0" [PASS]
Test 11: div_convert(1, 2) => "1" [PASS]
Test 12: div_convert(1, 8) => "1" [PASS]
Test 13: div_convert(1, 16) => "1" [PASS]
Test 14: div_convert(8, 2) => "1000" [PASS]
Test 15: div_convert(16, 2) => "10000" [PASS]
Test 16: div_convert(64, 8) => "100" [PASS]
Test 17: div_convert(256, 16) => "100" [PASS]
Test 18: div_convert(4294967295, 2) => "11111111111111111111111111111111" [PASS]
Test 19: div_convert(4294967295, 8) => "37777777777" [PASS]
Test 20: div_convert(4294967295, 10) => "4294967295" [PASS]
Test 21: div_convert(4294967295, 16) => "FFFFFFFF" [PASS]
Test 22: div_convert(42, 5) => "132" [PASS]
Test 23: div_convert(42, 8) => "52" [PASS]
Test 24: div_convert(42, 10) => "42" [PASS]
Test 25: div_convert(42, 16) => "2A" [PASS]
Test 26: sub_convert(104, 5) => "404" [PASS]
Test 27: sub_convert(156, 8) => "234" [PASS]
Test 28: sub_convert(255, 16) => "FF" [PASS]
Test 29: sub_convert(255, 10) => "255" [PASS]
Test 30: sub_convert(255, 2) => "11111111" [PASS]
Test 31: sub_convert(42, 2) => "101010" [PASS]
Test 32: sub_convert(0, 2) => "0" [PASS]
Test 33: sub_convert(0, 8) => "0" [PASS]
Test 34: sub_convert(0, 10) => "0" [PASS]
Test 35: sub_convert(0, 16) => "0" [PASS]
Test 36: sub_convert(1, 2) => "1" [PASS]
Test 37: sub_convert(1, 8) => "1" [PASS]
Test 38: sub_convert(1, 16) => "1" [PASS]
Test 39: sub_convert(8, 2) => "1000" [PASS]
Test 40: sub_convert(16, 2) => "10000" [PASS]
Test 41: sub_convert(64, 8) => "100" [PASS]
Test 42: sub_convert(256, 16) => "100" [PASS]
Test 43: sub_convert(4294967295, 2) => "11111111111111111111111111111111" [PASS]
Test 44: sub_convert(4294967295, 8) => "37777777777" [PASS]
Test 45: sub_convert(4294967295, 10) => "4294967295" [PASS]
Test 46: sub_convert(4294967295, 16) => "FFFFFFFF" [PASS]
Test 47: sub_convert(42, 5) => "132" [PASS]
Test 48: sub_convert(42, 8) => "52" [PASS]
Test 49: sub_convert(42, 10) => "42" [PASS]
Test 50: sub_convert(42, 16) => "2A" [PASS]
Test 51: div_convert(7, 2) => "111" [PASS]
Test 52: sub_convert(7, 2) => "111" [PASS]
Test 53: div_convert(15, 8) => "17" [PASS]
Test 54: sub_convert(15, 8) => "17" [PASS]
Test 55: div_convert(31, 16) => "1F" [PASS]
Test 56: sub_convert(31, 16) => "1F" [PASS]
Test 57: div_convert(1000, 2) => "1111101000" [PASS]
Test 58: sub_convert(1000, 2) => "1111101000" [PASS]
Test 59: div_convert(1000, 8) => "1750" [PASS]
Test 60: sub_convert(1000, 8) => "1750" [PASS]
Test 61: div_convert(1000, 16) => "3E8" [PASS]
Test 62: sub_convert(1000, 16) => "3E8" [PASS]
Test 63: print_tables(5)
Original: Binary=101 Octal=5 Decimal=5 Hex=5
Left Shift by 3: Binary=101000 Octal=50 Decimal=40 Hex=28
AND with 0xFF: Binary=101 Octal=5 Decimal=5 Hex=5
[FORMATTED OUTPUT CHECK] [PASS]
Test 64: print_tables(0)
Original: Binary=0 Octal=0 Decimal=0 Hex=0
Left Shift by 3: Binary=0 Octal=0 Decimal=0 Hex=0
AND with 0xFF: Binary=0 Octal=0 Decimal=0 Hex=0
[FORMATTED OUTPUT CHECK] [PASS]
Test 65: print_tables(1)
Original: Binary=1 Octal=1 Decimal=1 Hex=1
Left Shift by 3: Binary=1000 Octal=10 Decimal=8 Hex=8
AND with 0xFF: Binary=1 Octal=1 Decimal=1 Hex=1
[FORMATTED OUTPUT CHECK] [PASS]
Test 66: print_tables(7)
Original: Binary=111 Octal=7 Decimal=7 Hex=7
Left Shift by 3: Binary=111000 Octal=70 Decimal=56 Hex=38
AND with 0xFF: Binary=111 Octal=7 Decimal=7 Hex=7
[FORMATTED OUTPUT CHECK] [PASS]
Test 67: print_tables(15)
Original: Binary=1111 Octal=17 Decimal=15 Hex=F
Left Shift by 3: Binary=1111000 Octal=170 Decimal=120 Hex=78
AND with 0xFF: Binary=1111 Octal=17 Decimal=15 Hex=F
[FORMATTED OUTPUT CHECK] [PASS]
Test 68: print_tables(8)
Original: Binary=1000 Octal=10 Decimal=8 Hex=8
Left Shift by 3: Binary=1000000 Octal=100 Decimal=64 Hex=40
AND with 0xFF: Binary=1000 Octal=10 Decimal=8 Hex=8
[FORMATTED OUTPUT CHECK] [PASS]
Test 69: print_tables(16)
Original: Binary=10000 Octal=20 Decimal=16 Hex=10
Left Shift by 3: Binary=10000000 Octal=200 Decimal=128 Hex=80
AND with 0xFF: Binary=10000 Octal=20 Decimal=16 Hex=10
[FORMATTED OUTPUT CHECK] [PASS]
Test 70: print_tables(32)
Original: Binary=100000 Octal=40 Decimal=32 Hex=20
Left Shift by 3: Binary=100000000 Octal=400 Decimal=256 Hex=100
AND with 0xFF: Binary=100000 Octal=40 Decimal=32 Hex=20
[FORMATTED OUTPUT CHECK] [PASS]
Test 71: print_tables(255)
Original: Binary=11111111 Octal=377 Decimal=255 Hex=FF
Left Shift by 3: Binary=11111111000 Octal=3770 Decimal=2040 Hex=7F8
AND with 0xFF: Binary=11111111 Octal=377 Decimal=255 Hex=FF
[FORMATTED OUTPUT CHECK] [PASS]
Test 72: print_tables(256)
Original: Binary=100000000 Octal=400 Decimal=256 Hex=100
Left Shift by 3: Binary=100000000000 Octal=4000 Decimal=2048 Hex=800
AND with 0xFF: Binary=0 Octal=0 Decimal=0 Hex=0
[FORMATTED OUTPUT CHECK] [PASS]
Test 73: print_tables(511)
Original: Binary=111111111 Octal=777 Decimal=511 Hex=1FF
Left Shift by 3: Binary=111111111000 Octal=7770 Decimal=4088 Hex=FF8
AND with 0xFF: Binary=11111111 Octal=377 Decimal=255 Hex=FF
[FORMATTED OUTPUT CHECK] [PASS]
Test 74: print_tables(1000)
Original: Binary=1111101000 Octal=1750 Decimal=1000 Hex=3E8
Left Shift by 3: Binary=1111101000000 Octal=17500 Decimal=8000 Hex=1F40
AND with 0xFF: Binary=11101000 Octal=350 Decimal=232 Hex=E8
[FORMATTED OUTPUT CHECK] [PASS]
Test 75: print_tables(65535)
Original: Binary=1111111111111111 Octal=177777 Decimal=65535 Hex=FFFF
Left Shift by 3: Binary=1111111111111111000 Octal=1777770 Decimal=524280 Hex=7FFF8
AND with 0xFF: Binary=11111111 Octal=377 Decimal=255 Hex=FF
[FORMATTED OUTPUT CHECK] [PASS]
Test 76: print_tables(4294967295)
Original: Binary=11111111111111111111111111111111 Octal=37777777777 Decimal=4294967295 Hex=FFFFFFFF
Left Shift by 3: Binary=11111111111111111111111111111000 Octal=37777777770 Decimal=4294967288 Hex=FFFFFFF8
AND with 0xFF: Binary=11111111 Octal=377 Decimal=255 Hex=FF
[FORMATTED OUTPUT CHECK] [PASS]
Test 77: div_convert(2147483647, 2) => "1111111111111111111111111111111" [PASS]
Test 78: sub_convert(2147483647, 2) => "1111111111111111111111111111111" [PASS]
Test 79: div_convert(1073741824, 8) => "10000000000" [PASS]
Test 80: sub_convert(1073741824, 8) => "10000000000" [PASS]
Test 81: div_convert(268435456, 16) => "10000000" [PASS]
Test 82: sub_convert(268435456, 16) => "10000000" [PASS]
Test 83: div_convert(4294967294, 10) => "4294967294" [PASS]
Test 84: sub_convert(4294967294, 10) => "4294967294" [PASS]
Test 85: div_convert(4294967294, 16) => "FFFFFFFE" [PASS]
Test 86: sub_convert(4294967294, 16) => "FFFFFFFE" [PASS]
Test 87: div_convert(4, 5) => "4" [PASS]
Test 88: sub_convert(4, 5) => "4" [PASS]
Test 89: div_convert(7, 8) => "7" [PASS]
Test 90: sub_convert(7, 8) => "7" [PASS]
Test 91: div_convert(15, 16) => "F" [PASS]
Test 92: sub_convert(15, 16) => "F" [PASS]
Test 93: div_convert(25, 5) => "100" [PASS]
Test 94: sub_convert(25, 5) => "100" [PASS]
Test 95: div_convert(124, 5) => "444" [PASS]
Test 96: sub_convert(124, 5) => "444" [PASS]
Test 97: div_convert(171, 16) => "AB" [PASS]
Test 98: sub_convert(171, 16) => "AB" [PASS]
Test 99: div_convert(3405774592, 16) => "CAFFFF00" [PASS]
Test 100: sub_convert(3405774592, 16) => "CAFFFF00" [PASS]
Test 101: oct_to_bin("725") => "111010101" [PASS]
Test 102: oct_to_bin("345") => "011100101" [PASS]
Test 103: oct_to_bin("777") => "111111111" [PASS]
Test 104: oct_to_bin("0") => "000" [PASS]
Test 105: oct_to_bin("1") => "001" [PASS]
Test 106: oct_to_bin("7") => "111" [PASS]
Test 107: oct_to_bin("10") => "001000" [PASS]
Test 108: oct_to_bin("100") => "001000000" [PASS]
Test 109: oct_to_bin("377") => "011111111" [PASS]
Test 110: oct_to_hex("345") => Expected: "E5", Got: "0E5" [FAIL]
Test 111: oct_to_hex("777") => "1FF" [PASS]
Test 112: oct_to_hex("100") => Expected: "40", Got: "040" [FAIL]
Test 113: oct_to_hex("0") => "0" [PASS]
Test 114: oct_to_hex("1") => "1" [PASS]
Test 115: oct_to_hex("7") => "7" [PASS]
Test 116: oct_to_hex("1234") => "29C" [PASS]
Test 117: oct_to_hex("7654") => "FAC" [PASS]
Test 118: hex_to_bin("A3") => "10100011" [PASS]
Test 119: hex_to_bin("FF") => "11111111" [PASS]
Test 120: hex_to_bin("1A") => "00011010" [PASS]
Test 121: hex_to_bin("a3") => "10100011" [PASS]
Test 122: hex_to_bin("Ff") => "11111111" [PASS]
Test 123: hex_to_bin("aC") => "10101100" [PASS]
Test 124: hex_to_bin("0") => "0000" [PASS]
Test 125: hex_to_bin("1") => "0001" [PASS]
Test 126: hex_to_bin("F") => "1111" [PASS]
Test 127: hex_to_bin("CAFE") => "1100101011111110" [PASS]
Test 128: hex_to_bin("1234") => "0001001000110100" [PASS]
Test 129: to_sign_magnitude(5) => "00000000000000000000000000000101" [PASS]
Test 130: to_sign_magnitude(1) => "00000000000000000000000000000001" [PASS]
Test 131: to_sign_magnitude(255) => "00000000000000000000000011111111" [PASS]
Test 132: to_sign_magnitude(-5) => "10000000000000000000000000000101" [PASS]
Test 133: to_sign_magnitude(-1) => "10000000000000000000000000000001" [PASS]
Test 134: to_sign_magnitude(-255) => "10000000000000000000000011111111" [PASS]
Test 135: to_sign_magnitude(0) => "00000000000000000000000000000000" [PASS]
Test 136: to_ones_complement(5) => "00000000000000000000000000000101" [PASS]
Test 137: to_ones_complement(1) => "00000000000000000000000000000001" [PASS]
Test 138: to_ones_complement(255) => "00000000000000000000000011111111" [PASS]
Test 139: to_ones_complement(-5) => "11111111111111111111111111111010" [PASS]
Test 140: to_ones_complement(-1) => "11111111111111111111111111111110" [PASS]
Test 141: to_ones_complement(-255) => "11111111111111111111111100000000" [PASS]
Test 142: to_ones_complement(0) => "00000000000000000000000000000000" [PASS]
Test 143: to_twos_complement(5) => "00000000000000000000000000000101" [PASS]
Test 144: to_twos_complement(1) => "00000000000000000000000000000001" [PASS]
Test 145: to_twos_complement(255) => "00000000000000000000000011111111" [PASS]
Test 146: to_twos_complement(-5) => "11111111111111111111111111111011" [PASS]
Test 147: to_twos_complement(-1) => "11111111111111111111111111111111" [PASS]
Test 148: to_twos_complement(-255) => "11111111111111111111111100000001" [PASS]
Test 149: to_twos_complement(0) => "00000000000000000000000000000000" [PASS]
Test 150: to_twos_complement(2147483647) => "01111111111111111111111111111111" [PASS]
Test 151: to_twos_complement(-2147483648) => "10000000000000000000000000000000" [PASS]

Summary: 149/151 tests passed
