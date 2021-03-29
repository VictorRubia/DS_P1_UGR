cmake_minimum_required(VERSION 3.16)
project(DS)

set(CMAKE_CXX_STANDARD 14)

include_directories(DS_P1_S3/C++)

add_executable(DS
        DS_P1_S3/C++/CadenaFiltros.cpp
        DS_P1_S3/C++/CadenaFiltros.h
        DS_P1_S3/C++/Cliente.cpp
        DS_P1_S3/C++/Cliente.h
        DS_P1_S3/C++/CompruebaDeudas.cpp
        DS_P1_S3/C++/CompruebaDeudas.h
        DS_P1_S3/C++/CompruebaRentabilidad.cpp
        DS_P1_S3/C++/CompruebaRentabilidad.h
        DS_P1_S3/C++/CuentaBancaria.cpp
        DS_P1_S3/C++/CuentaBancaria.h
        DS_P1_S3/C++/Filtro.h
        DS_P1_S3/C++/FiltroIntercepcionBanca.cpp
        DS_P1_S3/C++/FormularioPrestamo.cpp
        DS_P1_S3/C++/FormularioPrestamo.h
        DS_P1_S3/C++/GestorFiltros.cpp
        DS_P1_S3/C++/GestorFiltros.h
        DS_P1_S3/C++/Prestamo.cpp
        DS_P1_S3/C++/Prestamo.h)
