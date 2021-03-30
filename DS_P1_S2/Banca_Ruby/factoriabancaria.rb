module Banca
  class FactoriaBancaria
    def fabricar_cuenta_bancaria()
      raise 'No se puede instanciar clase abstracta'
    end

    def fabricar_prestamo()
      raise 'No se puede instanciar clase abstracta'
    end

    def initialize
      raise 'No se puede instanciar clase abstracta'
    end
  end
end