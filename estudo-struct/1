#!/bin/bash

# Caminho completo para o inotifywait
INOTIFYWAIT_PATH=/usr/bin/inotifywait

# Loop infinito
while true; do
	# Monitorar alterações no arquivo 01.c
	if $INOTIFYWAIT_PATH -e modify 01.c; then
		# Se houver alterações, compilar e executar o programa
		gcc 01.c -o saida && ./saida.c
	fi
done
