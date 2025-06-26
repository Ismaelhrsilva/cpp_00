#!/bin/bash

# Caminho para o executável
EXEC=./RPN
INPUT_FILE=test.txt

# Verifica se o executável existe
if [ ! -f "$EXEC" ]; then
  echo "Erro: o executável '$EXEC' não foi encontrado."
  exit 1
fi

# Verifica se o arquivo de teste existe
if [ ! -f "$INPUT_FILE" ]; then
  echo "Erro: o arquivo '$INPUT_FILE' não foi encontrado."
  exit 1
fi

echo "=== Iniciando testes com $INPUT_FILE ==="
echo

# Processa cada linha
while IFS= read -r line || [[ -n "$line" ]]; do
  # Remove espaços extras na exibição
  CLEANED=$(echo "$line" | tr -s ' ')
  if [[ -z "$CLEANED" ]]; then
    continue
  fi

  echo "Entrada: \"$CLEANED\""
  $EXEC "$line"
  echo "-----------------------------"
done <"$INPUT_FILE"
