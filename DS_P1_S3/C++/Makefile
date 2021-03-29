CXX = g++
CXXFLAGS = -Wall -std=c++17

SRC = FiltroIntercepcionBanca.cpp CadenaFiltros.cpp Cliente.cpp CompruebaDeudas.cpp CompruebaRentabilidad.cpp CuentaBancaria.cpp GestorFiltros.cpp Prestamo.cpp FormularioPrestamo.cpp
OBJ = $(SRC:.cc=.o)
EXEC = sesion2

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm *.o $(EXEC)