// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// build_U_cpp
arma::mat build_U_cpp(arma::mat Pi, int n_determ, int n_vars, int n_lags);
RcppExport SEXP _mfbvar_build_U_cpp(SEXP PiSEXP, SEXP n_determSEXP, SEXP n_varsSEXP, SEXP n_lagsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Pi(PiSEXP);
    Rcpp::traits::input_parameter< int >::type n_determ(n_determSEXP);
    Rcpp::traits::input_parameter< int >::type n_vars(n_varsSEXP);
    Rcpp::traits::input_parameter< int >::type n_lags(n_lagsSEXP);
    rcpp_result_gen = Rcpp::wrap(build_U_cpp(Pi, n_determ, n_vars, n_lags));
    return rcpp_result_gen;
END_RCPP
}
// kf_filter
Rcpp::List kf_filter(arma::mat y, arma::mat Z, arma::mat c, arma::mat G, arma::mat T, arma::mat d, arma::mat H, arma::mat a1, arma::mat P1);
RcppExport SEXP _mfbvar_kf_filter(SEXP ySEXP, SEXP ZSEXP, SEXP cSEXP, SEXP GSEXP, SEXP TSEXP, SEXP dSEXP, SEXP HSEXP, SEXP a1SEXP, SEXP P1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type c(cSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type T(TSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type d(dSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type H(HSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type a1(a1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P1(P1SEXP);
    rcpp_result_gen = Rcpp::wrap(kf_filter(y, Z, c, G, T, d, H, a1, P1));
    return rcpp_result_gen;
END_RCPP
}
// kf_smoother
Rcpp::List kf_smoother(arma::mat y, arma::mat Z, arma::mat c, arma::mat G, arma::mat T, arma::mat d, arma::mat H, arma::mat a1, arma::mat P1);
RcppExport SEXP _mfbvar_kf_smoother(SEXP ySEXP, SEXP ZSEXP, SEXP cSEXP, SEXP GSEXP, SEXP TSEXP, SEXP dSEXP, SEXP HSEXP, SEXP a1SEXP, SEXP P1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type c(cSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type T(TSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type d(dSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type H(HSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type a1(a1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P1(P1SEXP);
    rcpp_result_gen = Rcpp::wrap(kf_smoother(y, Z, c, G, T, d, H, a1, P1));
    return rcpp_result_gen;
END_RCPP
}
// kf_ragged
Rcpp::List kf_ragged(arma::mat y_, arma::mat Phi_, arma::mat Sigma_, arma::mat Lambda_, int n_q_, unsigned int T_b_);
RcppExport SEXP _mfbvar_kf_ragged(SEXP y_SEXP, SEXP Phi_SEXP, SEXP Sigma_SEXP, SEXP Lambda_SEXP, SEXP n_q_SEXP, SEXP T_b_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y_(y_SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Phi_(Phi_SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_(Sigma_SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda_(Lambda_SEXP);
    Rcpp::traits::input_parameter< int >::type n_q_(n_q_SEXP);
    Rcpp::traits::input_parameter< unsigned int >::type T_b_(T_b_SEXP);
    rcpp_result_gen = Rcpp::wrap(kf_ragged(y_, Phi_, Sigma_, Lambda_, n_q_, T_b_));
    return rcpp_result_gen;
END_RCPP
}
// kf_sim_smooth
arma::mat kf_sim_smooth(arma::mat y_, arma::mat Phi_, arma::mat Sigma_, arma::mat Lambda_, arma::mat Z1, int n_q_, unsigned int T_b_);
RcppExport SEXP _mfbvar_kf_sim_smooth(SEXP y_SEXP, SEXP Phi_SEXP, SEXP Sigma_SEXP, SEXP Lambda_SEXP, SEXP Z1SEXP, SEXP n_q_SEXP, SEXP T_b_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y_(y_SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Phi_(Phi_SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_(Sigma_SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda_(Lambda_SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z1(Z1SEXP);
    Rcpp::traits::input_parameter< int >::type n_q_(n_q_SEXP);
    Rcpp::traits::input_parameter< unsigned int >::type T_b_(T_b_SEXP);
    rcpp_result_gen = Rcpp::wrap(kf_sim_smooth(y_, Phi_, Sigma_, Lambda_, Z1, n_q_, T_b_));
    return rcpp_result_gen;
END_RCPP
}
// max_eig_cpp
double max_eig_cpp(arma::mat A);
RcppExport SEXP _mfbvar_max_eig_cpp(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(max_eig_cpp(A));
    return rcpp_result_gen;
END_RCPP
}
// rmatn
arma::mat rmatn(arma::mat M, arma::mat Q, arma::mat P);
RcppExport SEXP _mfbvar_rmatn(SEXP MSEXP, SEXP QSEXP, SEXP PSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type M(MSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Q(QSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P(PSEXP);
    rcpp_result_gen = Rcpp::wrap(rmatn(M, Q, P));
    return rcpp_result_gen;
END_RCPP
}
// rinvwish
arma::mat rinvwish(int v, arma::mat S);
RcppExport SEXP _mfbvar_rinvwish(SEXP vSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type v(vSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(rinvwish(v, S));
    return rcpp_result_gen;
END_RCPP
}
// rmultn
arma::vec rmultn(arma::vec m, arma::mat Sigma);
RcppExport SEXP _mfbvar_rmultn(SEXP mSEXP, SEXP SigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type m(mSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma(SigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(rmultn(m, Sigma));
    return rcpp_result_gen;
END_RCPP
}
// loglike
arma::mat loglike(arma::mat Y, arma::mat Lambda, arma::mat Pi_comp, arma::mat Q_comp, int n_T, int n_vars, int n_comp, arma::mat z0, arma::mat P0);
RcppExport SEXP _mfbvar_loglike(SEXP YSEXP, SEXP LambdaSEXP, SEXP Pi_compSEXP, SEXP Q_compSEXP, SEXP n_TSEXP, SEXP n_varsSEXP, SEXP n_compSEXP, SEXP z0SEXP, SEXP P0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Pi_comp(Pi_compSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Q_comp(Q_compSEXP);
    Rcpp::traits::input_parameter< int >::type n_T(n_TSEXP);
    Rcpp::traits::input_parameter< int >::type n_vars(n_varsSEXP);
    Rcpp::traits::input_parameter< int >::type n_comp(n_compSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type z0(z0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P0(P0SEXP);
    rcpp_result_gen = Rcpp::wrap(loglike(Y, Lambda, Pi_comp, Q_comp, n_T, n_vars, n_comp, z0, P0));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mfbvar_build_U_cpp", (DL_FUNC) &_mfbvar_build_U_cpp, 4},
    {"_mfbvar_kf_filter", (DL_FUNC) &_mfbvar_kf_filter, 9},
    {"_mfbvar_kf_smoother", (DL_FUNC) &_mfbvar_kf_smoother, 9},
    {"_mfbvar_kf_ragged", (DL_FUNC) &_mfbvar_kf_ragged, 6},
    {"_mfbvar_kf_sim_smooth", (DL_FUNC) &_mfbvar_kf_sim_smooth, 7},
    {"_mfbvar_max_eig_cpp", (DL_FUNC) &_mfbvar_max_eig_cpp, 1},
    {"_mfbvar_rmatn", (DL_FUNC) &_mfbvar_rmatn, 3},
    {"_mfbvar_rinvwish", (DL_FUNC) &_mfbvar_rinvwish, 2},
    {"_mfbvar_rmultn", (DL_FUNC) &_mfbvar_rmultn, 2},
    {"_mfbvar_loglike", (DL_FUNC) &_mfbvar_loglike, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_mfbvar(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
