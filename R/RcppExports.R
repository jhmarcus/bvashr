# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#' @title Mahalanobis distance
#' 
#' @description from http://gallery.rcpp.org/articles/dmvnorm_arma/
#' 
#' @param x matrix of data
#' @param mean vector of means for MVN density
#' @param sigma variance-covariance matrix for MVN density
#' 
#' @return mahalanobis distance
#' @export
#'
Mahalanobis <- function(x, center, cov) {
    .Call('bvashr_Mahalanobis', PACKAGE = 'bvashr', x, center, cov)
}

#' @title Multivariate normal density
#' 
#' @description from http://gallery.rcpp.org/articles/dmvnorm_arma/
#' 
#' @param x matrix of data
#' @param mean vector of means for MVN density
#' @param sigma variance-covariance matrix for MVN density
#' 
#' @return logretval evaluated density
#' @export
#'
dmvnorm_arma <- function(x, mean, sigma, log = FALSE) {
    .Call('bvashr_dmvnorm_arma', PACKAGE = 'bvashr', x, mean, sigma, log)
}

#' @title Bivariate normal density
#' 
#' @description density of bivariate normal distribution
#' 
#' @param y vector of length 2 of observations
#' @param mu vector of length 2 of means 
#' @param sigma 2 x 2 variance-covariance matrix
#' @param log_lik bool 
#' 
#' @return evaluated density
#' @export
#'
#'
dbvnorm <- function(y, mu, sigma, log_lik = FALSE) {
    .Call('bvashr_dbvnorm', PACKAGE = 'bvashr', y, mu, sigma, log_lik)
}

#' @title Log sum exponential
#'
#' @description inspired by the implementation in https://github.com/dcgerard/updog/blob/master/src/utitility.cpp
#'
#' @param y vector to be log-sum-exponentiated 
#'
#' @return lse doube of log-sum-exponentiated vector 
#' @export
#'
log_sum_exp <- function(y) {
    .Call('bvashr_log_sum_exp', PACKAGE = 'bvashr', y)
}

#' @title Gets likelihood matrix for causal factor model (cfm)
#' 
#' @description Computes n x K matrix of component likelihoods
#' 
#' @param y matrix n x 2 of observations
#' @param s matrix n x 2 of std. errors
#' @param u cube 2 x 2 x K of prior covariance matricies
#' @param lambda_12 double effect of varialbe 2 on variable 1
#' @param lambda_21 double effect of variable 1 on variable 2
#' @param rho double correlation of estimated effects
#' 
#' @return lik_mat matrix n x K of component likelihoods
#' @export
#'
get_lik_mat_cfm <- function(y, s, u, lambda_12, lambda_21, rho) {
    .Call('bvashr_get_lik_mat_cfm', PACKAGE = 'bvashr', y, s, u, lambda_12, lambda_21, rho)
}

#' @title Gets log likelihood for causal factor model (cfm)
#'
#' @description Computes likelihood under causal factor model
#'
#' @inheritParams get_lik_mat_cfm
#' @param pi_vec vector vector of mixture proportions
#'
#' @return ll double likelihood under causal factor model
#' @export
#'
get_log_likelihood_cfm <- function(y, s, u, lambda_12, lambda_21, rho, pi_vec) {
    .Call('bvashr_get_log_likelihood_cfm', PACKAGE = 'bvashr', y, s, u, lambda_12, lambda_21, rho, pi_vec)
}

#' @title Compute likelihood matrix for signing sharing model
#'
#' @description TODO: description
#' 
#' @param m matrix of sign probabilites
#'
#' @export
get_lik_mat_ss <- function(m) {
    .Call('bvashr_get_lik_mat_ss', PACKAGE = 'bvashr', m)
}

