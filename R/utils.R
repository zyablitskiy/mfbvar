# The below loop just gets the error variances from AR(4) regressions

compute_error_variances <- function(Y) {
  n_vars <- ncol(Y)
  error_variance <- rep(NA, n_vars)
  Y_arima <- lapply(Y, identity)
  for (i in 1:n_vars) {
    success <- NULL
    init_order <- 4
    if (prior$freq[i]=="q") {Y_arima[[i]] <- Y_arima[[i]][seq(1, length(Y_arima[[i]]), 3)]}
    for (ar_order in init_order:1) {
      error_variance[i] <- tryCatch(arima(na.omit(Y_arima[[i]]), order = c(ar_order, 0, 0), method = "ML", optim.method="L-BFGS-B")$sigma2,
                                    error = function(cond) NA)
      if (!is.na(error_variance[i])) {
        break
      } else {
        if (init_order < 1) {
          error_variance[i] <- var(na.omit(Y[,i]))
        }
      }
    }
  }
  return(error_variance)
}
