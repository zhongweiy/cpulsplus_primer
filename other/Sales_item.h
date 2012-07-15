#include<string>
using std::string;

class Sales_item {
    public:
        double avg_price() const;
        bool same_isbn(const Sales_item &rhs) const
        { return isbn == rhs.isbn; }
        Sales_item(): units_sold(0), revenue(0.0) { }
        void write() const;
        void read(const string &str, const unsigned units_sold_in, 
                      const double revenue_in);
        void add(const Sales_item &sitem);

    private:
        std::string isbn;
        unsigned units_sold;
        double revenue;
};
