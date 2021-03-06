% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/gen_bv.R
\name{estimate_prior}
\alias{estimate_prior}
\title{Estimate prior}
\usage{
estimate_prior(X, S, K, rho = NA)
}
\arguments{
\item{X}{n x 2 matrix of estimated effects}

\item{S}{n x 2 matrix of std. errors}

\item{K}{int of mixture components to use in EM}

\item{rho}{double null correlation in beta_hats}
}
\value{
prior_res list from output of ExtremeDeconvolution
}
\description{
estimates parameters of a bivariate ash prior using an 
             EM algorithim implemented in the ExtremeDeconvolution package
}
