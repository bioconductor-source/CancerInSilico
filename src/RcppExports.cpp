// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cppRunModel
Rcpp::List cppRunModel(Rcpp::List rParams);
RcppExport SEXP CancerInSilico_cppRunModel(SEXP rParamsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type rParams(rParamsSEXP);
    rcpp_result_gen = Rcpp::wrap(cppRunModel(rParams));
    return rcpp_result_gen;
END_RCPP
}
