# cmake_minimum_required(VERSION <specify CMake version here>)
project(DS_P1_S3)

set(CMAKE_CXX_STANDARD 14)

add_executable(DS_P1_S3 FiltroIntercepcionBanca Prestamo GestorFiltros FormularioPrestamo CuentaBancaria CompruebaRentabilidad CompruebaDeudas Cliente CadenaFiltros)