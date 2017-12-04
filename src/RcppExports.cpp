// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// get_af
NumericVector get_af(SEXP obj, const NumericMatrix& lookup_scale, const IntegerMatrix& lookup_byte, const IntegerVector& ind_col);
RcppExport SEXP _pcadapt_get_af(SEXP objSEXP, SEXP lookup_scaleSEXP, SEXP lookup_byteSEXP, SEXP ind_colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type lookup_scale(lookup_scaleSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type lookup_byte(lookup_byteSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    rcpp_result_gen = Rcpp::wrap(get_af(obj, lookup_scale, lookup_byte, ind_col));
    return rcpp_result_gen;
END_RCPP
}
// bedXPtr
SEXP bedXPtr(std::string path, int n, int p);
RcppExport SEXP _pcadapt_bedXPtr(SEXP pathSEXP, SEXP nSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(bedXPtr(path, n, p));
    return rcpp_result_gen;
END_RCPP
}
// get_sumX_denoX
ListOf<NumericVector> get_sumX_denoX(SEXP obj, const NumericMatrix& lookup_scale, const IntegerMatrix& lookup_byte, const IntegerVector& ind_col, const NumericVector& af);
RcppExport SEXP _pcadapt_get_sumX_denoX(SEXP objSEXP, SEXP lookup_scaleSEXP, SEXP lookup_byteSEXP, SEXP ind_colSEXP, SEXP afSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type lookup_scale(lookup_scaleSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type lookup_byte(lookup_byteSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type af(afSEXP);
    rcpp_result_gen = Rcpp::wrap(get_sumX_denoX(obj, lookup_scale, lookup_byte, ind_col, af));
    return rcpp_result_gen;
END_RCPP
}
// clumping
LogicalVector clumping(SEXP obj, const NumericMatrix& lookup, const IntegerMatrix& lookup_byte, const IntegerVector& colInd, const IntegerVector& ord, LogicalVector& remain, const NumericVector& sumX, const NumericVector& denoX, int size, double thr);
RcppExport SEXP _pcadapt_clumping(SEXP objSEXP, SEXP lookupSEXP, SEXP lookup_byteSEXP, SEXP colIndSEXP, SEXP ordSEXP, SEXP remainSEXP, SEXP sumXSEXP, SEXP denoXSEXP, SEXP sizeSEXP, SEXP thrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type lookup(lookupSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type lookup_byte(lookup_byteSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ord(ordSEXP);
    Rcpp::traits::input_parameter< LogicalVector& >::type remain(remainSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sumX(sumXSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type denoX(denoXSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type thr(thrSEXP);
    rcpp_result_gen = Rcpp::wrap(clumping(obj, lookup, lookup_byte, colInd, ord, remain, sumX, denoX, size, thr));
    return rcpp_result_gen;
END_RCPP
}
// multLinReg
NumericMatrix multLinReg(SEXP obj, const NumericMatrix& lookup_scale, const IntegerMatrix& lookup_byte, const NumericMatrix& u, const NumericVector& d, NumericMatrix& v);
RcppExport SEXP _pcadapt_multLinReg(SEXP objSEXP, SEXP lookup_scaleSEXP, SEXP lookup_byteSEXP, SEXP uSEXP, SEXP dSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type lookup_scale(lookup_scaleSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type lookup_byte(lookup_byteSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type d(dSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(multLinReg(obj, lookup_scale, lookup_byte, u, d, v));
    return rcpp_result_gen;
END_RCPP
}
// nb_nona
ListOf<NumericVector> nb_nona(SEXP obj, const NumericMatrix& lookup_scale, const IntegerMatrix& lookup_byte, const IntegerVector& ind_col);
RcppExport SEXP _pcadapt_nb_nona(SEXP objSEXP, SEXP lookup_scaleSEXP, SEXP lookup_byteSEXP, SEXP ind_colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type lookup_scale(lookup_scaleSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type lookup_byte(lookup_byteSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    rcpp_result_gen = Rcpp::wrap(nb_nona(obj, lookup_scale, lookup_byte, ind_col));
    return rcpp_result_gen;
END_RCPP
}
// covRob_cpp
Rcpp::List covRob_cpp(arma::mat& x);
RcppExport SEXP _pcadapt_covRob_cpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(covRob_cpp(x));
    return rcpp_result_gen;
END_RCPP
}
// pMatVec4
NumericVector pMatVec4(SEXP obj, const NumericVector& x, const NumericMatrix& lookup_scale, const IntegerMatrix& lookup_byte, const IntegerVector& ind_col);
RcppExport SEXP _pcadapt_pMatVec4(SEXP objSEXP, SEXP xSEXP, SEXP lookup_scaleSEXP, SEXP lookup_byteSEXP, SEXP ind_colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type lookup_scale(lookup_scaleSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type lookup_byte(lookup_byteSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    rcpp_result_gen = Rcpp::wrap(pMatVec4(obj, x, lookup_scale, lookup_byte, ind_col));
    return rcpp_result_gen;
END_RCPP
}
// cpMatVec4
NumericVector cpMatVec4(SEXP obj, const NumericVector& x, const NumericMatrix& lookup_scale, const IntegerMatrix& lookup_byte, const IntegerVector& ind_col);
RcppExport SEXP _pcadapt_cpMatVec4(SEXP objSEXP, SEXP xSEXP, SEXP lookup_scaleSEXP, SEXP lookup_byteSEXP, SEXP ind_colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type lookup_scale(lookup_scaleSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type lookup_byte(lookup_byteSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    rcpp_result_gen = Rcpp::wrap(cpMatVec4(obj, x, lookup_scale, lookup_byte, ind_col));
    return rcpp_result_gen;
END_RCPP
}
// prodGx
NumericVector prodGx(const NumericMatrix& G, const NumericVector& x, const NumericVector& p);
RcppExport SEXP _pcadapt_prodGx(SEXP GSEXP, SEXP xSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type G(GSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(prodGx(G, x, p));
    return rcpp_result_gen;
END_RCPP
}
// prodtGx
NumericVector prodtGx(const NumericMatrix& G, const NumericVector& x, const NumericVector& p);
RcppExport SEXP _pcadapt_prodtGx(SEXP GSEXP, SEXP xSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type G(GSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(prodtGx(G, x, p));
    return rcpp_result_gen;
END_RCPP
}
// timesTwo
IntegerVector timesTwo(NumericVector x);
RcppExport SEXP _pcadapt_timesTwo(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(timesTwo(x));
    return rcpp_result_gen;
END_RCPP
}
// get_size_cpp
NumericVector get_size_cpp(std::string filename);
RcppExport SEXP _pcadapt_get_size_cpp(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(get_size_cpp(filename));
    return rcpp_result_gen;
END_RCPP
}
// get_nb_ind
int get_nb_ind(const StringVector& pop, const CharacterVector& name);
RcppExport SEXP _pcadapt_get_nb_ind(SEXP popSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const StringVector& >::type pop(popSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(get_nb_ind(pop, name));
    return rcpp_result_gen;
END_RCPP
}
// cmpt_minor_af
NumericVector cmpt_minor_af(arma::mat& xmatrix, int ploidy);
RcppExport SEXP _pcadapt_cmpt_minor_af(SEXP xmatrixSEXP, SEXP ploidySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type xmatrix(xmatrixSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    rcpp_result_gen = Rcpp::wrap(cmpt_minor_af(xmatrix, ploidy));
    return rcpp_result_gen;
END_RCPP
}
// scale_geno
arma::mat scale_geno(arma::mat& xmatrix, int ploidy, arma::vec maf, arma::vec keep_or_not);
RcppExport SEXP _pcadapt_scale_geno(SEXP xmatrixSEXP, SEXP ploidySEXP, SEXP mafSEXP, SEXP keep_or_notSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type xmatrix(xmatrixSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type maf(mafSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type keep_or_not(keep_or_notSEXP);
    rcpp_result_gen = Rcpp::wrap(scale_geno(xmatrix, ploidy, maf, keep_or_not));
    return rcpp_result_gen;
END_RCPP
}
// cmpt_loadings
arma::mat cmpt_loadings(std::string filename, arma::mat& xmatrix, arma::mat& scores, int nIND, int nSNP, int K, int ploidy, double min_maf, arma::vec& sigma, int type);
RcppExport SEXP _pcadapt_cmpt_loadings(SEXP filenameSEXP, SEXP xmatrixSEXP, SEXP scoresSEXP, SEXP nINDSEXP, SEXP nSNPSEXP, SEXP KSEXP, SEXP ploidySEXP, SEXP min_mafSEXP, SEXP sigmaSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type xmatrix(xmatrixSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< int >::type nIND(nINDSEXP);
    Rcpp::traits::input_parameter< int >::type nSNP(nSNPSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< double >::type min_maf(min_mafSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(cmpt_loadings(filename, xmatrix, scores, nIND, nSNP, K, ploidy, min_maf, sigma, type));
    return rcpp_result_gen;
END_RCPP
}
// lrfunc_cpp
Rcpp::List lrfunc_cpp(std::string filename, arma::mat& xmatrix, arma::mat& scores, int nIND, int nSNP, int K, int ploidy, double min_maf, arma::vec& sigma, int type);
RcppExport SEXP _pcadapt_lrfunc_cpp(SEXP filenameSEXP, SEXP xmatrixSEXP, SEXP scoresSEXP, SEXP nINDSEXP, SEXP nSNPSEXP, SEXP KSEXP, SEXP ploidySEXP, SEXP min_mafSEXP, SEXP sigmaSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type xmatrix(xmatrixSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< int >::type nIND(nINDSEXP);
    Rcpp::traits::input_parameter< int >::type nSNP(nSNPSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< double >::type min_maf(min_mafSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(lrfunc_cpp(filename, xmatrix, scores, nIND, nSNP, K, ploidy, min_maf, sigma, type));
    return rcpp_result_gen;
END_RCPP
}
// sample_geno_file
NumericVector sample_geno_file(std::string input, std::string output, double ploidy, IntegerVector sample_size);
RcppExport SEXP _pcadapt_sample_geno_file(SEXP inputSEXP, SEXP outputSEXP, SEXP ploidySEXP, SEXP sample_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type input(inputSEXP);
    Rcpp::traits::input_parameter< std::string >::type output(outputSEXP);
    Rcpp::traits::input_parameter< double >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sample_size(sample_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_geno_file(input, output, ploidy, sample_size));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_pcadapt_get_af", (DL_FUNC) &_pcadapt_get_af, 4},
    {"_pcadapt_bedXPtr", (DL_FUNC) &_pcadapt_bedXPtr, 3},
    {"_pcadapt_get_sumX_denoX", (DL_FUNC) &_pcadapt_get_sumX_denoX, 5},
    {"_pcadapt_clumping", (DL_FUNC) &_pcadapt_clumping, 10},
    {"_pcadapt_multLinReg", (DL_FUNC) &_pcadapt_multLinReg, 6},
    {"_pcadapt_nb_nona", (DL_FUNC) &_pcadapt_nb_nona, 4},
    {"_pcadapt_covRob_cpp", (DL_FUNC) &_pcadapt_covRob_cpp, 1},
    {"_pcadapt_pMatVec4", (DL_FUNC) &_pcadapt_pMatVec4, 5},
    {"_pcadapt_cpMatVec4", (DL_FUNC) &_pcadapt_cpMatVec4, 5},
    {"_pcadapt_prodGx", (DL_FUNC) &_pcadapt_prodGx, 3},
    {"_pcadapt_prodtGx", (DL_FUNC) &_pcadapt_prodtGx, 3},
    {"_pcadapt_timesTwo", (DL_FUNC) &_pcadapt_timesTwo, 1},
    {"_pcadapt_get_size_cpp", (DL_FUNC) &_pcadapt_get_size_cpp, 1},
    {"_pcadapt_get_nb_ind", (DL_FUNC) &_pcadapt_get_nb_ind, 2},
    {"_pcadapt_cmpt_minor_af", (DL_FUNC) &_pcadapt_cmpt_minor_af, 2},
    {"_pcadapt_scale_geno", (DL_FUNC) &_pcadapt_scale_geno, 4},
    {"_pcadapt_cmpt_loadings", (DL_FUNC) &_pcadapt_cmpt_loadings, 10},
    {"_pcadapt_lrfunc_cpp", (DL_FUNC) &_pcadapt_lrfunc_cpp, 10},
    {"_pcadapt_sample_geno_file", (DL_FUNC) &_pcadapt_sample_geno_file, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_pcadapt(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
