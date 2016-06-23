/* ========================================================================== */
/* === umfpack_report_numeric =============================================== */
/* ========================================================================== */

/* -------------------------------------------------------------------------- */
/* Copyright (c) 2005-2012 by Timothy A. Davis, http://www.suitesparse.com.   */
/* All Rights Reserved.  See ../Doc/License for License.                      */
/* -------------------------------------------------------------------------- */

int umfpack_di_report_numeric
(
    void *Numeric,
    const UMFPACK_MYFLOAT Control [UMFPACK_CONTROL]
) ;

SuiteSparse_long umfpack_dl_report_numeric
(
    void *Numeric,
    const UMFPACK_MYFLOAT Control [UMFPACK_CONTROL]
) ;

int umfpack_zi_report_numeric
(
    void *Numeric,
    const UMFPACK_MYFLOAT Control [UMFPACK_CONTROL]
) ;

SuiteSparse_long umfpack_zl_report_numeric
(
    void *Numeric,
    const UMFPACK_MYFLOAT Control [UMFPACK_CONTROL]
) ;

/*
UMFPACK_MYFLOAT int Syntax:

    #include "umfpack.h"
    void *Numeric ;
    UMFPACK_MYFLOAT Control [UMFPACK_CONTROL] ;
    int status ;
    status = umfpack_di_report_numeric (Numeric, Control) ;

UMFPACK_MYFLOAT SuiteSparse_long Syntax:

    #include "umfpack.h"
    void *Numeric ;
    UMFPACK_MYFLOAT Control [UMFPACK_CONTROL] ;
    SuiteSparse_long status ;
    status = umfpack_dl_report_numeric (Numeric, Control) ;

complex int Syntax:

    #include "umfpack.h"
    void *Numeric ;
    UMFPACK_MYFLOAT Control [UMFPACK_CONTROL] ;
    int status ;
    status = umfpack_zi_report_numeric (Numeric, Control) ;

complex SuiteSparse_long Syntax:

    #include "umfpack.h"
    void *Numeric ;
    UMFPACK_MYFLOAT Control [UMFPACK_CONTROL] ;
    SuiteSparse_long status ;
    status = umfpack_zl_report_numeric (Numeric, Control) ;

Purpose:

    Verifies and prints a Numeric object (the LU factorization, both its pattern
    numerical values, and permutation vectors P and Q).  This routine checks the
    object more carefully than the computational routines.  Normally, this check
    is not required, since umfpack_*_numeric either returns (void *) NULL, or a
    valid Numeric object.  However, if you suspect that your own code has
    corrupted the Numeric object (by overruning memory bounds, for example),
    then this routine might be able to detect a corrupted Numeric object.  Since
    this is a complex object, not all such user-generated errors are guaranteed
    to be caught by this routine.

Returns:

    UMFPACK_OK if Control [UMFPACK_PRL] <= 2 (the input is not checked).

    Otherwise:

    UMFPACK_OK if the Numeric object is valid.
    UMFPACK_ERROR_invalid_Numeric_object if the Numeric object is invalid.
    UMFPACK_ERROR_out_of_memory if out of memory.

Arguments:

    void *Numeric ;			Input argument, not modified.

	The Numeric object, which holds the numeric factorization computed by
	umfpack_*_numeric.

    UMFPACK_MYFLOAT Control [UMFPACK_CONTROL] ;	Input argument, not modified.

	If a (UMFPACK_MYFLOAT *) NULL pointer is passed, then the default control
	settings are used.  Otherwise, the settings are determined from the
	Control array.  See umfpack_*_defaults on how to fill the Control
	array with the default settings.  If Control contains NaN's, the
	defaults are used.  The following Control parameters are used:

	Control [UMFPACK_PRL]:  printing level.

	    2 or less: no output.  returns silently without checking anything.
	    3: fully check input, and print a short summary of its status
	    4: as 3, but print first few entries of the input
	    5: as 3, but print all of the input
	    Default: 1
*/
