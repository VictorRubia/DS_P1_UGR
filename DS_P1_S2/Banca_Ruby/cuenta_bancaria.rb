module Banca
  class CuentaBancaria
    attr_accessor :_prestamo, :_limite

    public def mostrar_prestamos()
      @_prestamo.each do |i|
        puts i
      end
    end

    def Clone()
      return self.clone
    end

    public def initialize(prest, limit)
      # @AttributeType ArrayList
      @_prestamo = prest
      # @AttributeType int
      @_limite = limit
    end
  end
end