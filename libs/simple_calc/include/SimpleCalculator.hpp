#ifndef __SIMPLE_CALC__

#define __SIMPLE_CALC__

namespace simple {
    class SimpleCalculator {
    private:
        double a, b;
    public:
        SimpleCalculator(const double&, const double&);
        double compute(const double&) const;
        void step_compute(const double&, const double&, double*) const;
        virtual ~SimpleCalculator() {}
    };
}
#endif  // __SIMPLE_CALC__
