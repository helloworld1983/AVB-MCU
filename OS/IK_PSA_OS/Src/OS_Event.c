/******************************************************************************
 *  Project       : IK 010246
 *  Module        : OS Event manager
 *  File          : OS_Event.c
 *  Creation date : jj/mm/2002
 *-----------------------------------------------------------------------------
 *  Description   : OS Event manager
 *
 *            
 *-----------------------------------------------------------------------------
 *  History       : 25/06/2002  0.01 Gentner Creation
 *
 *-----------------------------------------------------------------------------
 ******************************************************************************/

/*----------------------------------------------------------------------------*
 *              --- Included files and compilation variables ---              *
 *----------------------------------------------------------------------------*/


#ifdef OS_EVENT_USED
#include "Systype.h"

#include "OS_Cfg.h"
#include "OS_Event.h"

/*----------------------------------------------------------------------------*
 *                     --- Local constants & typedefs ---                     *
 *----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*
 *                             --- Variables ---                              *
 *----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*
 *                    --- Local functions declaration ---                     *
 *----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*
 *                          --- Local functions ---                           *
 *----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*
 *                          --- Public functions ---                          *
 *----------------------------------------------------------------------------*/


/******************************************************************************
 * Function  : OS_SetEvent
 *
 * Role      : Set one event
 *
 *-----------------------------------------------------------------------------
 * Entry     : <<entry parameters>>
 *  
 * Exit      : <<exit parameters>>
 *  
 *-----------------------------------------------------------------------------
 * globals   : r/w Name Of Variable    Range       Description
 *             --- ------------------  ---------   ----------------------------
 *
 *
 ******************************************************************************/

OS_Error OS_SetEvent(OS_EventID EventID, OS_EventType mask)
{
#ifdef OS_DEBUG
    if ( (EventID<0) || (EventID>=OS_EventMax) )
    {
        return OS_IdOutOfRange;
    }
#endif
    OS_EventArray[EventID] |= mask;

    return OS_NoError;
}

/******************************************************************************
 * Function  : OS_ClearEvent
 *
 * Role      : Clear one event
 *
 *-----------------------------------------------------------------------------
 * Entry     : <<entry parameters>>
 *  
 * Exit      : <<exit parameters>>
 *  
 *-----------------------------------------------------------------------------
 * globals   : r/w Name Of Variable    Range       Description
 *             --- ------------------  ---------   ----------------------------
 *
 *
 ******************************************************************************/

OS_Error OS_ClearEvent(OS_EventID EventID, OS_EventType mask)
{
#ifdef OS_DEBUG
    if ( (EventID<0) || (EventID>=OS_EventMax) )
    {
        return OS_IdOutOfRange;
    }
#endif
    OS_EventArray[EventID] &= ~mask;

    return OS_NoError;
}

/******************************************************************************
 * Function  : OS_GetEvent
 *
 * Role      : Get event
 *
 *-----------------------------------------------------------------------------
 * Entry     : <<entry parameters>>
 *  
 * Exit      : <<exit parameters>>
 *  
 *-----------------------------------------------------------------------------
 * globals   : r/w Name Of Variable    Range       Description
 *             --- ------------------  ---------   ----------------------------
 *
 *
 ******************************************************************************/

OS_Error OS_GetEvent(OS_EventID EventID, OS_EventType mask, OS_EventType *event)
{
#ifdef OS_DEBUG
    if ( (EventID<0) || (EventID>=OS_EventMax)  || (event==0))
    {
        return OS_IdOutOfRange;
    }
#endif
    *event = OS_EventArray[EventID]&mask;

    return OS_NoError;
}

/******************************************************************************
 * Function  : OS_ClearAllEvents
 *
 * Role      : Clear all events
 *
 *-----------------------------------------------------------------------------
 * Entry     : <<entry parameters>>
 *  
 * Exit      : <<exit parameters>>
 *  
 *-----------------------------------------------------------------------------
 * globals   : r/w Name Of Variable    Range       Description
 *             --- ------------------  ---------   ----------------------------
 *
 *
 ******************************************************************************/

void OS_ClearAllEvents(void)
{
    OS_IndexType index;

    for ( index=0; index<OS_EventMax; index++ )
    {
        OS_EventArray[index] = 0;        
    }
}

#endif

/******************************************************************************
 *                               End of file                                  *
 ******************************************************************************/


