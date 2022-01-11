// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_read_warc
DataFrame rcpp_read_warc(std::string const& path, std::string const& filter, std::string const& include);
RcppExport SEXP _sparkwarc_rcpp_read_warc(SEXP pathSEXP, SEXP filterSEXP, SEXP includeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string const& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string const& >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< std::string const& >::type include(includeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_read_warc(path, filter, include));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sparkwarc_rcpp_read_warc", (DL_FUNC) &_sparkwarc_rcpp_read_warc, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_sparkwarc(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
