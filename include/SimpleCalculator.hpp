namespace calculator {
    class SimpleCalculator {
    private:
        double a, b;
    public:
        SimpleCalculator(const double&, const double&);
        double compute(const double&) const;
        void step_compute(const double&, const double&, double*) const;
        void tabulate(const double&, const double&) const;
        virtual ~SimpleCalculator() {}
    };
}
