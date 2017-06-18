// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// Mahalanobis
arma::vec Mahalanobis(arma::mat x, arma::rowvec center, arma::mat cov);
RcppExport SEXP bvashr_Mahalanobis(SEXP xSEXP, SEXP centerSEXP, SEXP covSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type center(centerSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cov(covSEXP);
    rcpp_result_gen = Rcpp::wrap(Mahalanobis(x, center, cov));
    return rcpp_result_gen;
END_RCPP
}
// dmvnorm_arma
arma::vec dmvnorm_arma(arma::mat x, arma::rowvec mean, arma::mat sigma, bool log);
RcppExport SEXP bvashr_dmvnorm_arma(SEXP xSEXP, SEXP meanSEXP, SEXP sigmaSEXP, SEXP logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type log(logSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnorm_arma(x, mean, sigma, log));
    return rcpp_result_gen;
END_RCPP
}
// dbvnorm
double dbvnorm(arma::rowvec y, arma::rowvec mu, arma::mat sigma, bool log_lik);
RcppExport SEXP bvashr_dbvnorm(SEXP ySEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP log_likSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type log_lik(log_likSEXP);
    rcpp_result_gen = Rcpp::wrap(dbvnorm(y, mu, sigma, log_lik));
    return rcpp_result_gen;
END_RCPP
}
// log_sum_exp
double log_sum_exp(arma::vec y);
RcppExport SEXP bvashr_log_sum_exp(SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(log_sum_exp(y));
    return rcpp_result_gen;
END_RCPP
}
// get_lik_mat_cfm
arma::mat get_lik_mat_cfm(const arma::mat y, const arma::mat s, const arma::cube u, const double lambda_12, const double lambda_21, const double rho);
RcppExport SEXP bvashr_get_lik_mat_cfm(SEXP ySEXP, SEXP sSEXP, SEXP uSEXP, SEXP lambda_12SEXP, SEXP lambda_21SEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type s(sSEXP);
    Rcpp::traits::input_parameter< const arma::cube >::type u(uSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda_12(lambda_12SEXP);
    Rcpp::traits::input_parameter< const double >::type lambda_21(lambda_21SEXP);
    Rcpp::traits::input_parameter< const double >::type rho(rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(get_lik_mat_cfm(y, s, u, lambda_12, lambda_21, rho));
    return rcpp_result_gen;
END_RCPP
}
// get_log_likelihood_cfm
double get_log_likelihood_cfm(const arma::mat y, const arma::mat s, const arma::cube u, const double lambda_12, const double lambda_21, const double rho, const arma::vec pi_vec);
RcppExport SEXP bvashr_get_log_likelihood_cfm(SEXP ySEXP, SEXP sSEXP, SEXP uSEXP, SEXP lambda_12SEXP, SEXP lambda_21SEXP, SEXP rhoSEXP, SEXP pi_vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type s(sSEXP);
    Rcpp::traits::input_parameter< const arma::cube >::type u(uSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda_12(lambda_12SEXP);
    Rcpp::traits::input_parameter< const double >::type lambda_21(lambda_21SEXP);
    Rcpp::traits::input_parameter< const double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type pi_vec(pi_vecSEXP);
    rcpp_result_gen = Rcpp::wrap(get_log_likelihood_cfm(y, s, u, lambda_12, lambda_21, rho, pi_vec));
    return rcpp_result_gen;
END_RCPP
}
// get_lik_mat_ss
arma::mat get_lik_mat_ss(arma::mat m);
RcppExport SEXP bvashr_get_lik_mat_ss(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(get_lik_mat_ss(m));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"bvashr_Mahalanobis", (DL_FUNC) &bvashr_Mahalanobis, 3},
    {"bvashr_dmvnorm_arma", (DL_FUNC) &bvashr_dmvnorm_arma, 4},
    {"bvashr_dbvnorm", (DL_FUNC) &bvashr_dbvnorm, 4},
    {"bvashr_log_sum_exp", (DL_FUNC) &bvashr_log_sum_exp, 1},
    {"bvashr_get_lik_mat_cfm", (DL_FUNC) &bvashr_get_lik_mat_cfm, 6},
    {"bvashr_get_log_likelihood_cfm", (DL_FUNC) &bvashr_get_log_likelihood_cfm, 7},
    {"bvashr_get_lik_mat_ss", (DL_FUNC) &bvashr_get_lik_mat_ss, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_bvashr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
