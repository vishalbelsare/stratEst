#' Data of Dvorak, Fischbacher and Schmelz (2020)
#'
#' A dataset with observations from an experiment on social influence.
#'
#' @format A data frame with 569 rows and 7 variables:
#' \describe{
#'   \item{id}{A vector of integers which identifies the participant.}
#'   \item{game}{A vector of integers which identifies the game.}
#'   \item{period}{A vector of integers which identifies the period.}
#'   \item{others.choices}{A factor with two levels which indicates if the choices of the other two group members are in line (in line) or not in line (not in line) with the preference of the participant.}
#'   \item{choice}{A factor with two levels which is indicates if the participant deviates (deviate) from or follows (follow) the own preference in the current period.}
#'   \item{intercept}{An intercept. One for every observation.}
#'   \item{conformity.score}{The conformity score of the participant in a post-experimental conformity questionnaire (Mehrabian and Stefl, 1995).}
#' }
#' @usage data(DF2011)
#' @references
#' Dvorak F, Fischbacher U, Schmelz K (2020). "Incentives for Conformity and Anticonformity." \emph{TWI Working Paper Series}.
#'
#' Mehrabian A, Stefl CA (1995). "Basic Temperament Components of Loneliness, Shyness, and Conformity." \emph{Social Behavior and Personality}, 23(3), 253–263.
#'
"DFS2020"
