CXX = g++
CXXFLAGS = -Wall -Wextra -O2

# Arquivos fonte e executáveis
MAIN_SRC = main.cpp
MAIN_EXE = main

STRESS_SRC = stress.cpp
STRESS_EXE = stress

# Regra padrão: compilar ambos os executáveis
all: $(MAIN_EXE) $(STRESS_EXE)

# Regra para compilar o main
$(MAIN_EXE): $(MAIN_SRC)
	$(CXX) $(CXXFLAGS) -o $(MAIN_EXE) $(MAIN_SRC)

# Regra para compilar o stress
$(STRESS_EXE): $(STRESS_SRC)
	$(CXX) $(CXXFLAGS) -o $(STRESS_EXE) $(STRESS_SRC)

# Regra para limpar os arquivos compilados
clean:
	rm -f $(MAIN_EXE) $(STRESS_EXE)

.PHONY: all clean
