// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// rcpparma_hello_world
arma::mat rcpparma_hello_world();
RcppExport SEXP _stratEst_rcpparma_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpparma_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_outerproduct
arma::mat rcpparma_outerproduct(const arma::colvec& x);
RcppExport SEXP _stratEst_rcpparma_outerproduct(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_outerproduct(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_innerproduct
double rcpparma_innerproduct(const arma::colvec& x);
RcppExport SEXP _stratEst_rcpparma_innerproduct(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_innerproduct(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_bothproducts
Rcpp::List rcpparma_bothproducts(const arma::colvec& x);
RcppExport SEXP _stratEst_rcpparma_bothproducts(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_bothproducts(x));
    return rcpp_result_gen;
END_RCPP
}
// stratEst_cpp
List stratEst_cpp(arma::mat data, arma::mat strategies, arma::mat shares, arma::mat covariates, bool LCR, arma::vec cluster, std::string response, std::string r_responses, std::string r_trembles, std::string select, int min_strategies, std::string crit, std::string SE, int outer_runs, double outer_tol_eval, int outer_max_eval, int inner_runs, double inner_tol_eval, int inner_max_eval, int LCR_runs, int LCR_tol_eval, int LCR_max_eval, int BS_samples, bool print_messages, bool integer_strategies, double newton_stepsize, bool penalty);
RcppExport SEXP _stratEst_stratEst_cpp(SEXP dataSEXP, SEXP strategiesSEXP, SEXP sharesSEXP, SEXP covariatesSEXP, SEXP LCRSEXP, SEXP clusterSEXP, SEXP responseSEXP, SEXP r_responsesSEXP, SEXP r_tremblesSEXP, SEXP selectSEXP, SEXP min_strategiesSEXP, SEXP critSEXP, SEXP SESEXP, SEXP outer_runsSEXP, SEXP outer_tol_evalSEXP, SEXP outer_max_evalSEXP, SEXP inner_runsSEXP, SEXP inner_tol_evalSEXP, SEXP inner_max_evalSEXP, SEXP LCR_runsSEXP, SEXP LCR_tol_evalSEXP, SEXP LCR_max_evalSEXP, SEXP BS_samplesSEXP, SEXP print_messagesSEXP, SEXP integer_strategiesSEXP, SEXP newton_stepsizeSEXP, SEXP penaltySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type strategies(strategiesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type shares(sharesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type covariates(covariatesSEXP);
    Rcpp::traits::input_parameter< bool >::type LCR(LCRSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type cluster(clusterSEXP);
    Rcpp::traits::input_parameter< std::string >::type response(responseSEXP);
    Rcpp::traits::input_parameter< std::string >::type r_responses(r_responsesSEXP);
    Rcpp::traits::input_parameter< std::string >::type r_trembles(r_tremblesSEXP);
    Rcpp::traits::input_parameter< std::string >::type select(selectSEXP);
    Rcpp::traits::input_parameter< int >::type min_strategies(min_strategiesSEXP);
    Rcpp::traits::input_parameter< std::string >::type crit(critSEXP);
    Rcpp::traits::input_parameter< std::string >::type SE(SESEXP);
    Rcpp::traits::input_parameter< int >::type outer_runs(outer_runsSEXP);
    Rcpp::traits::input_parameter< double >::type outer_tol_eval(outer_tol_evalSEXP);
    Rcpp::traits::input_parameter< int >::type outer_max_eval(outer_max_evalSEXP);
    Rcpp::traits::input_parameter< int >::type inner_runs(inner_runsSEXP);
    Rcpp::traits::input_parameter< double >::type inner_tol_eval(inner_tol_evalSEXP);
    Rcpp::traits::input_parameter< int >::type inner_max_eval(inner_max_evalSEXP);
    Rcpp::traits::input_parameter< int >::type LCR_runs(LCR_runsSEXP);
    Rcpp::traits::input_parameter< int >::type LCR_tol_eval(LCR_tol_evalSEXP);
    Rcpp::traits::input_parameter< int >::type LCR_max_eval(LCR_max_evalSEXP);
    Rcpp::traits::input_parameter< int >::type BS_samples(BS_samplesSEXP);
    Rcpp::traits::input_parameter< bool >::type print_messages(print_messagesSEXP);
    Rcpp::traits::input_parameter< bool >::type integer_strategies(integer_strategiesSEXP);
    Rcpp::traits::input_parameter< double >::type newton_stepsize(newton_stepsizeSEXP);
    Rcpp::traits::input_parameter< bool >::type penalty(penaltySEXP);
    rcpp_result_gen = Rcpp::wrap(stratEst_cpp(data, strategies, shares, covariates, LCR, cluster, response, r_responses, r_trembles, select, min_strategies, crit, SE, outer_runs, outer_tol_eval, outer_max_eval, inner_runs, inner_tol_eval, inner_max_eval, LCR_runs, LCR_tol_eval, LCR_max_eval, BS_samples, print_messages, integer_strategies, newton_stepsize, penalty));
    return rcpp_result_gen;
END_RCPP
}
// transform_cpp
arma::vec transform_cpp(arma::vec id, arma::vec supergame, arma::vec period, arma::vec group, arma::vec output, arma::vec input, arma::vec unique_ids);
RcppExport SEXP _stratEst_transform_cpp(SEXP idSEXP, SEXP supergameSEXP, SEXP periodSEXP, SEXP groupSEXP, SEXP outputSEXP, SEXP inputSEXP, SEXP unique_idsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type id(idSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type supergame(supergameSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type period(periodSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type group(groupSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type output(outputSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type input(inputSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type unique_ids(unique_idsSEXP);
    rcpp_result_gen = Rcpp::wrap(transform_cpp(id, supergame, period, group, output, input, unique_ids));
    return rcpp_result_gen;
END_RCPP
}
// transform_pd_cpp
arma::vec transform_pd_cpp(arma::vec id, arma::vec supergame, arma::vec period, arma::vec output, arma::vec p_output, arma::vec input, arma::vec unique_ids);
RcppExport SEXP _stratEst_transform_pd_cpp(SEXP idSEXP, SEXP supergameSEXP, SEXP periodSEXP, SEXP outputSEXP, SEXP p_outputSEXP, SEXP inputSEXP, SEXP unique_idsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type id(idSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type supergame(supergameSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type period(periodSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type output(outputSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type p_output(p_outputSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type input(inputSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type unique_ids(unique_idsSEXP);
    rcpp_result_gen = Rcpp::wrap(transform_pd_cpp(id, supergame, period, output, p_output, input, unique_ids));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_stratEst_rcpparma_hello_world", (DL_FUNC) &_stratEst_rcpparma_hello_world, 0},
    {"_stratEst_rcpparma_outerproduct", (DL_FUNC) &_stratEst_rcpparma_outerproduct, 1},
    {"_stratEst_rcpparma_innerproduct", (DL_FUNC) &_stratEst_rcpparma_innerproduct, 1},
    {"_stratEst_rcpparma_bothproducts", (DL_FUNC) &_stratEst_rcpparma_bothproducts, 1},
    {"_stratEst_stratEst_cpp", (DL_FUNC) &_stratEst_stratEst_cpp, 27},
    {"_stratEst_transform_cpp", (DL_FUNC) &_stratEst_transform_cpp, 7},
    {"_stratEst_transform_pd_cpp", (DL_FUNC) &_stratEst_transform_pd_cpp, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_stratEst(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
