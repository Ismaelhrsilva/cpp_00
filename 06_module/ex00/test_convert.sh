#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'

EXEC="./convert"

TESTS=(
	"0|char: Non displayable
int: 0
float: 0.0f
double: 0.0"

	"nan|char: impossible
int: impossible
float: nanf
double: nan"

	"nanf|char: impossible
int: impossible
float: nanf
double: nan"

	"+inff|char: impossible
int: impossible
float: +inff
double: +inf"

	"-inff|char: impossible
int: impossible
float: -inff
double: -inf"

	"+inf|char: impossible
int: impossible
float: +inff
double: +inf"

	"-inf|char: impossible
int: impossible
float: -inff
double: -inf"

	"42.0f|char: '*'
int: 42
float: 42.0f
double: 42.0"

	"42.0|char: '*'
int: 42
float: 42.0f
double: 42.0"

	"a|char: 'a'
int: 97
float: 97.0f
double: 97.0"

	"~|char: '~'
int: 126
float: 126.0f
double: 126.0"

	"127|char: Non displayable
int: 127
float: 127.0f
double: 127.0"

	"128|char: impossible
int: 128
float: 128.0f
double: 128.0"

	"2147483647|char: impossible
int: 2147483647
float: 2147483648.0f
double: 2147483647.0"

	"2147483648|char: impossible
int: impossible
float: 2147483648.0f
double: 2147483648.0"

	"hello|char: impossible
int: impossible
float: impossible
double: impossible"

	"123abc|char: impossible
int: impossible
float: impossible
double: impossible"

	".5|char: impossible
int: 0
float: 0.5f
double: 0.5"

	"1e10|char: impossible
int: impossible
float: 10000000000.0f
double: 10000000000.0"

	"3.4028235e+38f|char: impossible
int: impossible
float: 3.4028235e+38f
double: 3.4028235e+38"

	"-128|char: impossible
int: -128
float: -128.0f
double: -128.0"
)

pass_count=0
fail_count=0

for test_case in "${TESTS[@]}"; do
	INPUT="${test_case%%|*}"
	EXPECTED="${test_case#*|}"

	OUTPUT="$($EXEC "$INPUT" 2>&1)"

	if [ "$OUTPUT" == "$EXPECTED" ]; then
		echo -e "${GREEN}✔ Test passed for input '$INPUT'${NC}"
		((pass_count++))
	else
		echo -e "${RED}✘ Test failed for input '$INPUT'${NC}"
		echo -e "${RED}Expected:${NC}"
		echo "$EXPECTED"
		echo -e "${RED}Got:${NC}"
		echo "$OUTPUT"
		((fail_count++))
	fi
	echo
done

echo -e "${GREEN}Total passed: $pass_count${NC}"
echo -e "${RED}Total failed: $fail_count${NC}"
