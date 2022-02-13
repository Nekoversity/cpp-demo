namespace calculator {
    class SimpleCalculator {
    private:
        double a, b;
    public:
        SimpleCalculator(const double&, const double&);
        double compute(const double&) const;
        double step_compute(const double&, const int&, const double&);
        virtual ~SimpleCalculator() {}
    };
}
