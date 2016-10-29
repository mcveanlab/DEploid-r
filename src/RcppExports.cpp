// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dEploid
List dEploid(std::string args, std::string file);
RcppExport SEXP DEploid_dEploid(SEXP argsSEXP, SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type args(argsSEXP);
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    rcpp_result_gen = Rcpp::wrap(dEploid(args, file));
    return rcpp_result_gen;
END_RCPP
}
// test_RRG_sample
double test_RRG_sample();
RcppExport SEXP DEploid_test_RRG_sample() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(test_RRG_sample());
    return rcpp_result_gen;
END_RCPP
}
// test_RRG_sampleUnitExpo
double test_RRG_sampleUnitExpo();
RcppExport SEXP DEploid_test_RRG_sampleUnitExpo() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(test_RRG_sampleUnitExpo());
    return rcpp_result_gen;
END_RCPP
}
// test_RRG_sampleExpoExpoLimit
double test_RRG_sampleExpoExpoLimit(double lambda, double b, double limit);
RcppExport SEXP DEploid_test_RRG_sampleExpoExpoLimit(SEXP lambdaSEXP, SEXP bSEXP, SEXP limitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type limit(limitSEXP);
    rcpp_result_gen = Rcpp::wrap(test_RRG_sampleExpoExpoLimit(lambda, b, limit));
    return rcpp_result_gen;
END_RCPP
}
