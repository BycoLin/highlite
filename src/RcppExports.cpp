// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// output_types
Rcpp::IntegerVector output_types();
RcppExport SEXP highlite_output_types() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(output_types());
    return rcpp_result_gen;
END_RCPP
}
// highlight_
std::string highlight_(std::string input, std::string language, int output, std::string theme, std::string theme_path, std::string language_path);
RcppExport SEXP highlite_highlight_(SEXP inputSEXP, SEXP languageSEXP, SEXP outputSEXP, SEXP themeSEXP, SEXP theme_pathSEXP, SEXP language_pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type input(inputSEXP);
    Rcpp::traits::input_parameter< std::string >::type language(languageSEXP);
    Rcpp::traits::input_parameter< int >::type output(outputSEXP);
    Rcpp::traits::input_parameter< std::string >::type theme(themeSEXP);
    Rcpp::traits::input_parameter< std::string >::type theme_path(theme_pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type language_path(language_pathSEXP);
    rcpp_result_gen = Rcpp::wrap(highlight_(input, language, output, theme, theme_path, language_path));
    return rcpp_result_gen;
END_RCPP
}
