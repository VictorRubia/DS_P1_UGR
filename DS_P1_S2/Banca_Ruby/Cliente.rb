require_relative 'cuenta_prototype_factory'
require_relative 'prestamo'
require_relative 'cuenta_bancaria'
require_relative 'prestamo_empresas'

module Banca
  public class Cliente
           def crear_banco
             prest1 = Prestamo.new(1, 1500, 3)
             prestamos = []
             prestamos.push(prest1)

             factoria_prestamo_simple = CuentaPrototypeFactory.new(CuentaBancaria.new(prestamos, 3500), Prestamo.new(0, 1000, 3))

             prestamo1 = factoria_prestamo_simple.fabricar_prestamo
             cuenta_bancaria_simple_clonacion = factoria_prestamo_simple.fabricar_cuenta_bancaria

             cuenta_bancaria_simple_clonacion._prestamo.push(prestamo1)

             cuenta_bancaria_simple_clonacion.mostrar_prestamos

             prest2 = PrestamoEmpresas.new(1, 10000, 10, 0.1)
             prestamos_empresas = []
             prestamos_empresas.push(prest2)

             factoria_prestamo_empresas = CuentaPrototypeFactory.new(CuentaBancaria.new(prestamos_empresas, 10000), PrestamoEmpresas.new(0, 5000, 5, 0.05))

             prestamo_empresa_clonacion = factoria_prestamo_empresas.fabricar_prestamo
             cuenta_bancaria_emp_clonacion = factoria_prestamo_empresas.fabricar_cuenta_bancaria

             cuenta_bancaria_emp_clonacion._prestamo.push(prestamo_empresa_clonacion)

             cuenta_bancaria_emp_clonacion.mostrar_prestamos

           end

           def initialize; end
         end

  cliente = Cliente.new()
  cliente.crear_banco()
end