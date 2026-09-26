#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: readBufEndPut__FP7ReadBufi
// Address: 0x29af30 - 0x29afa8
void readBufEndPut__FP7ReadBufi_0x29af30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("readBufEndPut__FP7ReadBufi_0x29af30");
#endif

    ctx->pc = 0x29af30u;

    // 0x29af30: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x29af30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x29af34: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x29af34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x29af38: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x29af38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x29af3c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29af3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x29af40: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x29af40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29af44: 0x8c230008  lw          $v1, 0x8($at)
    ctx->pc = 0x29af44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8)));
    // 0x29af48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29af48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29af4c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x29af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29af50: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x29af50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29af54: 0x41280a  movz        $a1, $v0, $at
    ctx->pc = 0x29af54u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
    // 0x29af58: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x29af58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x29af5c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29af5cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x29af60: 0x8c220000  lw          $v0, 0x0($at)
    ctx->pc = 0x29af60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x29af64: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29af64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29af68: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29AF68u;
    {
        const bool branch_taken_0x29af68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AF68u;
            // 0x29af6c: 0x43001a  div         $zero, $v0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af68) {
            ctx->pc = 0x29AF74u;
            goto label_29af74;
        }
    }
    ctx->pc = 0x29AF70u;
    // 0x29af70: 0x1cd  break       0, 7
    ctx->pc = 0x29af70u;
    runtime->handleBreak(rdram, ctx);
label_29af74:
    // 0x29af74: 0x1810  mfhi        $v1
    ctx->pc = 0x29af74u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29af78: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x29af78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x29af7c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29af7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x29af80: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x29af80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af84: 0xac230000  sw          $v1, 0x0($at)
    ctx->pc = 0x29af84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 0), GPR_U32(ctx, 3));
    // 0x29af88: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x29af88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x29af8c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29af8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x29af90: 0x8c230004  lw          $v1, 0x4($at)
    ctx->pc = 0x29af90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4)));
    // 0x29af94: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x29af94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x29af98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29af98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29af9c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29af9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x29afa0: 0x3e00008  jr          $ra
    ctx->pc = 0x29AFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AFA0u;
            // 0x29afa4: 0xac230004  sw          $v1, 0x4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29AFA8u;
}
