module Banca

  class FactoriaBancaria
  end

  class CuentaPrototypeFactory < FactoriaBancaria
    attr_accessor :_prototypeCuenta, :_prototypePrestamo

    def initialize(cuenta, prestamo)
      super()
      # @AttributeType Cliente.Prestamo
      @_prototype_prestamo = prestamo
      # @AttributeType Cliente.CuentaBancaria
      @_prototype_cuenta = cuenta

    end

    def fabricar_cuenta_bancaria
      @_prototype_cuenta.Clone
    end

    def fabricar_prestamo
      @_prototype_prestamo.Clone
    end
  end
end