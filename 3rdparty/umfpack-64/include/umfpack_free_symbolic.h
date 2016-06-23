/* ========================================================================== */
/* === umfpack_free_symbolic ================================================ */
/* ========================================================================== */

/* -------------------------------------------------------------------------- */
/* UMFPACK Version 4.4, Copyright (c) 2005 by Timothy A. Davis.  CISE Dept,   */
/* Univ. of Florida.  All Rights Reserved.  See ../Doc/License for License.   */
/* web: http://www.cise.ufl.edu/research/sparse/umfpack                       */
/* -------------------------------------------------------------------------- */
#ifdef __cplusplus
extern "C" {
#endif

extern void umfpack_di_free_symbolic
(
    void **Symbolic
) ;

extern void umfpack_dl_free_symbolic
(
    void **Symbolic
) ;

extern void umfpack_zi_free_symbolic
(
    void **Symbolic
) ;

extern void umfpack_zl_free_symbolic
(
    void **Symbolic
) ;
#ifdef __cplusplus
}
#endif
/*
double int Syntax:

    #include "umfpack.h"
    void *Symbolic ;
    umfpack_di_free_symbolic (&Symbolic) ;

double long Syntax:

    #include "umfpack.h"
    void *Symbolic ;
    umfpack_dl_free_symbolic (&Symbolic) ;

complex int Syntax:

    #include "umfpack.h"
    void *Symbolic ;
    umfpack_zi_free_symbolic (&Symbolic) ;

complex long Syntax:

    #include "umfpack.h"
    void *Symbolic ;
    umfpack_zl_free_symbolic (&Symbolic) ;

Purpose:

    Deallocates the Symbolic object and sets the Symbolic handle to NULL.  This
    routine is the only valid way of destroying the Symbolic object.

Arguments:

    void **Symbolic ;	    Input argument, set to (void *) NULL on output.

	Points to a valid Symbolic object computed by umfpack_*_symbolic.
	No action is taken if Symbolic is a (void *) NULL pointer.
*/
