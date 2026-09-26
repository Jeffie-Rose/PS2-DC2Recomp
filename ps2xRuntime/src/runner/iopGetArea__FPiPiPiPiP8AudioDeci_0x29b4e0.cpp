#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: iopGetArea__FPiPiPiPiP8AudioDeci
// Address: 0x29b4e0 - 0x29b584
void iopGetArea__FPiPiPiPiP8AudioDeci_0x29b4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iopGetArea__FPiPiPiPiP8AudioDeci_0x29b4e0");
#endif

    ctx->pc = 0x29b4e0u;

    // 0x29b4e0: 0x8d0a0048  lw          $t2, 0x48($t0)
    ctx->pc = 0x29b4e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x29b4e4: 0x8d0b004c  lw          $t3, 0x4C($t0)
    ctx->pc = 0x29b4e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x29b4e8: 0x12a1821  addu        $v1, $t1, $t2
    ctx->pc = 0x29b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x29b4ec: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x29b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x29b4f0: 0x2463fc00  addiu       $v1, $v1, -0x400
    ctx->pc = 0x29b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x29b4f4: 0x15400002  bnez        $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x29B4F4u;
    {
        const bool branch_taken_0x29b4f4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B4F4u;
            // 0x29b4f8: 0x6a001a  div         $zero, $v1, $t2 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b4f4) {
            ctx->pc = 0x29B500u;
            goto label_29b500;
        }
    }
    ctx->pc = 0x29B4FCu;
    // 0x29b4fc: 0x1cd  break       0, 7
    ctx->pc = 0x29b4fcu;
    runtime->handleBreak(rdram, ctx);
label_29b500:
    // 0x29b500: 0x4810  mfhi        $t1
    ctx->pc = 0x29b500u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x29b504: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B504u;
    {
        const bool branch_taken_0x29b504 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x29B508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B504u;
            // 0x29b508: 0x91a83  sra         $v1, $t1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 9), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b504) {
            ctx->pc = 0x29B514u;
            goto label_29b514;
        }
    }
    ctx->pc = 0x29B50Cu;
    // 0x29b50c: 0x252303ff  addiu       $v1, $t1, 0x3FF
    ctx->pc = 0x29b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1023));
    // 0x29b510: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x29b510u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
label_29b514:
    // 0x29b514: 0x34a80  sll         $t1, $v1, 10
    ctx->pc = 0x29b514u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x29b518: 0x14b1823  subu        $v1, $t2, $t3
    ctx->pc = 0x29b518u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x29b51c: 0x69182a  slt         $v1, $v1, $t1
    ctx->pc = 0x29b51cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x29b520: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x29B520u;
    {
        const bool branch_taken_0x29b520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b520) {
            ctx->pc = 0x29B544u;
            goto label_29b544;
        }
    }
    ctx->pc = 0x29B528u;
    // 0x29b528: 0x8d030044  lw          $v1, 0x44($t0)
    ctx->pc = 0x29b528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x29b52c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x29b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x29b530: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x29b530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x29b534: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x29b534u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x29b538: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x29b538u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x29b53c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29B53Cu;
    {
        const bool branch_taken_0x29b53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B53Cu;
            // 0x29b540: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b53c) {
            ctx->pc = 0x29B57Cu;
            goto label_29b57c;
        }
    }
    ctx->pc = 0x29B544u;
label_29b544:
    // 0x29b544: 0x8d030044  lw          $v1, 0x44($t0)
    ctx->pc = 0x29b544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x29b548: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x29b548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x29b54c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x29b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x29b550: 0x8d040048  lw          $a0, 0x48($t0)
    ctx->pc = 0x29b550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x29b554: 0x8d03004c  lw          $v1, 0x4C($t0)
    ctx->pc = 0x29b554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x29b558: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x29b558u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29b55c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x29b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x29b560: 0x8d030044  lw          $v1, 0x44($t0)
    ctx->pc = 0x29b560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x29b564: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x29b564u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x29b568: 0x8d040048  lw          $a0, 0x48($t0)
    ctx->pc = 0x29b568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x29b56c: 0x8d03004c  lw          $v1, 0x4C($t0)
    ctx->pc = 0x29b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x29b570: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x29b570u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29b574: 0x1231823  subu        $v1, $t1, $v1
    ctx->pc = 0x29b574u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x29b578: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x29b578u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_29b57c:
    // 0x29b57c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B584u;
}
