// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpparma_hello_world
arma::mat rcpparma_hello_world();
RcppExport SEXP _psbpHMM_rcpparma_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpparma_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_outerproduct
arma::mat rcpparma_outerproduct(const arma::colvec& x);
RcppExport SEXP _psbpHMM_rcpparma_outerproduct(SEXP xSEXP) {
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
RcppExport SEXP _psbpHMM_rcpparma_innerproduct(SEXP xSEXP) {
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
RcppExport SEXP _psbpHMM_rcpparma_bothproducts(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_bothproducts(x));
    return rcpp_result_gen;
END_RCPP
}
// up_ajk_rm
List up_ajk_rm(int K, int n, int tmax, List z, double vinv_alpha, double sig2inv_alpha, List w, List X, List beta_k, List beta_sk, double m_alpha, double mu_alpha);
RcppExport SEXP _psbpHMM_up_ajk_rm(SEXP KSEXP, SEXP nSEXP, SEXP tmaxSEXP, SEXP zSEXP, SEXP vinv_alphaSEXP, SEXP sig2inv_alphaSEXP, SEXP wSEXP, SEXP XSEXP, SEXP beta_kSEXP, SEXP beta_skSEXP, SEXP m_alphaSEXP, SEXP mu_alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type tmax(tmaxSEXP);
    Rcpp::traits::input_parameter< List >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type vinv_alpha(vinv_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type sig2inv_alpha(sig2inv_alphaSEXP);
    Rcpp::traits::input_parameter< List >::type w(wSEXP);
    Rcpp::traits::input_parameter< List >::type X(XSEXP);
    Rcpp::traits::input_parameter< List >::type beta_k(beta_kSEXP);
    Rcpp::traits::input_parameter< List >::type beta_sk(beta_skSEXP);
    Rcpp::traits::input_parameter< double >::type m_alpha(m_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type mu_alpha(mu_alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(up_ajk_rm(K, n, tmax, z, vinv_alpha, sig2inv_alpha, w, X, beta_k, beta_sk, m_alpha, mu_alpha));
    return rcpp_result_gen;
END_RCPP
}
// up_ajk
List up_ajk(int K, int n, int tmax, List z, double vinv_alpha, double sig2inv_alpha, List w, List X, List beta_k, double m_alpha, double mu_alpha);
RcppExport SEXP _psbpHMM_up_ajk(SEXP KSEXP, SEXP nSEXP, SEXP tmaxSEXP, SEXP zSEXP, SEXP vinv_alphaSEXP, SEXP sig2inv_alphaSEXP, SEXP wSEXP, SEXP XSEXP, SEXP beta_kSEXP, SEXP m_alphaSEXP, SEXP mu_alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type tmax(tmaxSEXP);
    Rcpp::traits::input_parameter< List >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type vinv_alpha(vinv_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type sig2inv_alpha(sig2inv_alphaSEXP);
    Rcpp::traits::input_parameter< List >::type w(wSEXP);
    Rcpp::traits::input_parameter< List >::type X(XSEXP);
    Rcpp::traits::input_parameter< List >::type beta_k(beta_kSEXP);
    Rcpp::traits::input_parameter< double >::type m_alpha(m_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type mu_alpha(mu_alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(up_ajk(K, n, tmax, z, vinv_alpha, sig2inv_alpha, w, X, beta_k, m_alpha, mu_alpha));
    return rcpp_result_gen;
END_RCPP
}
// up_ajk_nox
List up_ajk_nox(int K, int n, int tmax, List z, double vinv_alpha, double sig2inv_alpha, List w, double m_alpha, double mu_alpha);
RcppExport SEXP _psbpHMM_up_ajk_nox(SEXP KSEXP, SEXP nSEXP, SEXP tmaxSEXP, SEXP zSEXP, SEXP vinv_alphaSEXP, SEXP sig2inv_alphaSEXP, SEXP wSEXP, SEXP m_alphaSEXP, SEXP mu_alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type tmax(tmaxSEXP);
    Rcpp::traits::input_parameter< List >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type vinv_alpha(vinv_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type sig2inv_alpha(sig2inv_alphaSEXP);
    Rcpp::traits::input_parameter< List >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type m_alpha(m_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type mu_alpha(mu_alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(up_ajk_nox(K, n, tmax, z, vinv_alpha, sig2inv_alpha, w, m_alpha, mu_alpha));
    return rcpp_result_gen;
END_RCPP
}
// upW_rm
List upW_rm(arma::vec alpha0, List X, List beta, List beta_rm, arma::mat ajk, List z, int tmax, int n);
RcppExport SEXP _psbpHMM_upW_rm(SEXP alpha0SEXP, SEXP XSEXP, SEXP betaSEXP, SEXP beta_rmSEXP, SEXP ajkSEXP, SEXP zSEXP, SEXP tmaxSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type alpha0(alpha0SEXP);
    Rcpp::traits::input_parameter< List >::type X(XSEXP);
    Rcpp::traits::input_parameter< List >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< List >::type beta_rm(beta_rmSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ajk(ajkSEXP);
    Rcpp::traits::input_parameter< List >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type tmax(tmaxSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(upW_rm(alpha0, X, beta, beta_rm, ajk, z, tmax, n));
    return rcpp_result_gen;
END_RCPP
}
// upW
List upW(arma::vec alpha0, List X, List beta, arma::mat ajk, List z, int tmax, int n);
RcppExport SEXP _psbpHMM_upW(SEXP alpha0SEXP, SEXP XSEXP, SEXP betaSEXP, SEXP ajkSEXP, SEXP zSEXP, SEXP tmaxSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type alpha0(alpha0SEXP);
    Rcpp::traits::input_parameter< List >::type X(XSEXP);
    Rcpp::traits::input_parameter< List >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ajk(ajkSEXP);
    Rcpp::traits::input_parameter< List >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type tmax(tmaxSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(upW(alpha0, X, beta, ajk, z, tmax, n));
    return rcpp_result_gen;
END_RCPP
}
// upW_nox
List upW_nox(arma::vec alpha0, arma::mat ajk, List z, int tmax, int n);
RcppExport SEXP _psbpHMM_upW_nox(SEXP alpha0SEXP, SEXP ajkSEXP, SEXP zSEXP, SEXP tmaxSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type alpha0(alpha0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ajk(ajkSEXP);
    Rcpp::traits::input_parameter< List >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type tmax(tmaxSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(upW_nox(alpha0, ajk, z, tmax, n));
    return rcpp_result_gen;
END_RCPP
}
// invMat
arma::mat invMat(arma::mat x);
RcppExport SEXP _psbpHMM_invMat(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(invMat(x));
    return rcpp_result_gen;
END_RCPP
}
// mhDecomp
arma::mat mhDecomp(arma::mat L, arma::mat D);
RcppExport SEXP _psbpHMM_mhDecomp(SEXP LSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type L(LSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(mhDecomp(L, D));
    return rcpp_result_gen;
END_RCPP
}
// updatePi
List updatePi(List beta, List X, arma::vec a0, arma::mat ajk, int tmax);
RcppExport SEXP _psbpHMM_updatePi(SEXP betaSEXP, SEXP XSEXP, SEXP a0SEXP, SEXP ajkSEXP, SEXP tmaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< List >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ajk(ajkSEXP);
    Rcpp::traits::input_parameter< int >::type tmax(tmaxSEXP);
    rcpp_result_gen = Rcpp::wrap(updatePi(beta, X, a0, ajk, tmax));
    return rcpp_result_gen;
END_RCPP
}
// updatePi_rm
List updatePi_rm(List beta, List beta_sk, List X, arma::vec a0, arma::mat ajk, int tmax);
RcppExport SEXP _psbpHMM_updatePi_rm(SEXP betaSEXP, SEXP beta_skSEXP, SEXP XSEXP, SEXP a0SEXP, SEXP ajkSEXP, SEXP tmaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< List >::type beta_sk(beta_skSEXP);
    Rcpp::traits::input_parameter< List >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ajk(ajkSEXP);
    Rcpp::traits::input_parameter< int >::type tmax(tmaxSEXP);
    rcpp_result_gen = Rcpp::wrap(updatePi_rm(beta, beta_sk, X, a0, ajk, tmax));
    return rcpp_result_gen;
END_RCPP
}
// mvndensity
double mvndensity(arma::vec y, arma::vec mu, arma::mat Sigma, double d);
RcppExport SEXP _psbpHMM_mvndensity(SEXP ySEXP, SEXP muSEXP, SEXP SigmaSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< double >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(mvndensity(y, mu, Sigma, d));
    return rcpp_result_gen;
END_RCPP
}
// logmvndensity
double logmvndensity(arma::vec y, arma::vec mu, arma::mat Sigma, double d);
RcppExport SEXP _psbpHMM_logmvndensity(SEXP ySEXP, SEXP muSEXP, SEXP SigmaSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< double >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(logmvndensity(y, mu, Sigma, d));
    return rcpp_result_gen;
END_RCPP
}
// upZ
List upZ(List stateList, List y, List mu, List Sigma, double logStuff, double nudf, List detRstar, List piz, List u, int tmax, int K, int n, double d);
RcppExport SEXP _psbpHMM_upZ(SEXP stateListSEXP, SEXP ySEXP, SEXP muSEXP, SEXP SigmaSEXP, SEXP logStuffSEXP, SEXP nudfSEXP, SEXP detRstarSEXP, SEXP pizSEXP, SEXP uSEXP, SEXP tmaxSEXP, SEXP KSEXP, SEXP nSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type stateList(stateListSEXP);
    Rcpp::traits::input_parameter< List >::type y(ySEXP);
    Rcpp::traits::input_parameter< List >::type mu(muSEXP);
    Rcpp::traits::input_parameter< List >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< double >::type logStuff(logStuffSEXP);
    Rcpp::traits::input_parameter< double >::type nudf(nudfSEXP);
    Rcpp::traits::input_parameter< List >::type detRstar(detRstarSEXP);
    Rcpp::traits::input_parameter< List >::type piz(pizSEXP);
    Rcpp::traits::input_parameter< List >::type u(uSEXP);
    Rcpp::traits::input_parameter< int >::type tmax(tmaxSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(upZ(stateList, y, mu, Sigma, logStuff, nudf, detRstar, piz, u, tmax, K, n, d));
    return rcpp_result_gen;
END_RCPP
}
// upZnox
List upZnox(List stateList, List y, List mu, List Sigma, double logStuff, double nudf, List detRstar, List piz, List u, int tmax, int K, int n, double d);
RcppExport SEXP _psbpHMM_upZnox(SEXP stateListSEXP, SEXP ySEXP, SEXP muSEXP, SEXP SigmaSEXP, SEXP logStuffSEXP, SEXP nudfSEXP, SEXP detRstarSEXP, SEXP pizSEXP, SEXP uSEXP, SEXP tmaxSEXP, SEXP KSEXP, SEXP nSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type stateList(stateListSEXP);
    Rcpp::traits::input_parameter< List >::type y(ySEXP);
    Rcpp::traits::input_parameter< List >::type mu(muSEXP);
    Rcpp::traits::input_parameter< List >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< double >::type logStuff(logStuffSEXP);
    Rcpp::traits::input_parameter< double >::type nudf(nudfSEXP);
    Rcpp::traits::input_parameter< List >::type detRstar(detRstarSEXP);
    Rcpp::traits::input_parameter< List >::type piz(pizSEXP);
    Rcpp::traits::input_parameter< List >::type u(uSEXP);
    Rcpp::traits::input_parameter< int >::type tmax(tmaxSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(upZnox(stateList, y, mu, Sigma, logStuff, nudf, detRstar, piz, u, tmax, K, n, d));
    return rcpp_result_gen;
END_RCPP
}
// getWhich_greater
NumericVector getWhich_greater(NumericVector a, double num, int K);
RcppExport SEXP _psbpHMM_getWhich_greater(SEXP aSEXP, SEXP numSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type num(numSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(getWhich_greater(a, num, K));
    return rcpp_result_gen;
END_RCPP
}
// upStateList
List upStateList(List piz, List u, int K, int tmax, int n);
RcppExport SEXP _psbpHMM_upStateList(SEXP pizSEXP, SEXP uSEXP, SEXP KSEXP, SEXP tmaxSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type piz(pizSEXP);
    Rcpp::traits::input_parameter< List >::type u(uSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type tmax(tmaxSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(upStateList(piz, u, K, tmax, n));
    return rcpp_result_gen;
END_RCPP
}
// upStateListnox
List upStateListnox(List piz, List u, int K, int tmax, int n);
RcppExport SEXP _psbpHMM_upStateListnox(SEXP pizSEXP, SEXP uSEXP, SEXP KSEXP, SEXP tmaxSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type piz(pizSEXP);
    Rcpp::traits::input_parameter< List >::type u(uSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type tmax(tmaxSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(upStateListnox(piz, u, K, tmax, n));
    return rcpp_result_gen;
END_RCPP
}
// getWhich_equal
NumericVector getWhich_equal(NumericVector a, int k);
RcppExport SEXP _psbpHMM_getWhich_equal(SEXP aSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(getWhich_equal(a, k));
    return rcpp_result_gen;
END_RCPP
}
// vectorSame
double vectorSame(NumericVector a, NumericVector b);
RcppExport SEXP _psbpHMM_vectorSame(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(vectorSame(a, b));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_psbpHMM_rcpparma_hello_world", (DL_FUNC) &_psbpHMM_rcpparma_hello_world, 0},
    {"_psbpHMM_rcpparma_outerproduct", (DL_FUNC) &_psbpHMM_rcpparma_outerproduct, 1},
    {"_psbpHMM_rcpparma_innerproduct", (DL_FUNC) &_psbpHMM_rcpparma_innerproduct, 1},
    {"_psbpHMM_rcpparma_bothproducts", (DL_FUNC) &_psbpHMM_rcpparma_bothproducts, 1},
    {"_psbpHMM_up_ajk_rm", (DL_FUNC) &_psbpHMM_up_ajk_rm, 12},
    {"_psbpHMM_up_ajk", (DL_FUNC) &_psbpHMM_up_ajk, 11},
    {"_psbpHMM_up_ajk_nox", (DL_FUNC) &_psbpHMM_up_ajk_nox, 9},
    {"_psbpHMM_upW_rm", (DL_FUNC) &_psbpHMM_upW_rm, 8},
    {"_psbpHMM_upW", (DL_FUNC) &_psbpHMM_upW, 7},
    {"_psbpHMM_upW_nox", (DL_FUNC) &_psbpHMM_upW_nox, 5},
    {"_psbpHMM_invMat", (DL_FUNC) &_psbpHMM_invMat, 1},
    {"_psbpHMM_mhDecomp", (DL_FUNC) &_psbpHMM_mhDecomp, 2},
    {"_psbpHMM_updatePi", (DL_FUNC) &_psbpHMM_updatePi, 5},
    {"_psbpHMM_updatePi_rm", (DL_FUNC) &_psbpHMM_updatePi_rm, 6},
    {"_psbpHMM_mvndensity", (DL_FUNC) &_psbpHMM_mvndensity, 4},
    {"_psbpHMM_logmvndensity", (DL_FUNC) &_psbpHMM_logmvndensity, 4},
    {"_psbpHMM_upZ", (DL_FUNC) &_psbpHMM_upZ, 13},
    {"_psbpHMM_upZnox", (DL_FUNC) &_psbpHMM_upZnox, 13},
    {"_psbpHMM_getWhich_greater", (DL_FUNC) &_psbpHMM_getWhich_greater, 3},
    {"_psbpHMM_upStateList", (DL_FUNC) &_psbpHMM_upStateList, 5},
    {"_psbpHMM_upStateListnox", (DL_FUNC) &_psbpHMM_upStateListnox, 5},
    {"_psbpHMM_getWhich_equal", (DL_FUNC) &_psbpHMM_getWhich_equal, 2},
    {"_psbpHMM_vectorSame", (DL_FUNC) &_psbpHMM_vectorSame, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_psbpHMM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
