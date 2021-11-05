#include <iostream>
using std::ostream;

class complex;
class complex {
    private:
        double re;
        double im;
    public:
        complex() {
        }
        complex(double re, double vi = 0) 
        :re(re), im(im) {

        }
        void setreal(double re) {
            this->re = re;
        }
        void setimag(double im) {
            this->im = im;
        }
        double real() const {
            return re;
        }
        double imag() const {
            return im;
        }
        

};
inline
ostream& operator<<(ostream& cout, complex& cmx) {
    return cout << '(' << cmx.real() << ',' << cmx.imag() << ')' << std::endl;

}
inline
complex operator+(complex& cmx1, complex& cmx2) {
    complex tmpcmx;
    tmpcmx.setreal(cmx1.real()+cmx2.real());
    tmpcmx.setimag(cmx1.imag()+cmx2.imag());
    return tmpcmx;
}
