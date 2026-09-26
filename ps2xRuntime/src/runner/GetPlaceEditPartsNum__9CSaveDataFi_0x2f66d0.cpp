#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPlaceEditPartsNum__9CSaveDataFi
// Address: 0x2f66d0 - 0x2f6748
void GetPlaceEditPartsNum__9CSaveDataFi_0x2f66d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPlaceEditPartsNum__9CSaveDataFi_0x2f66d0");
#endif

    switch (ctx->pc) {
        case 0x2f6700u: goto label_2f6700;
        case 0x2f6710u: goto label_2f6710;
        default: break;
    }

    ctx->pc = 0x2f66d0u;

    // 0x2f66d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f66d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f66d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f66d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f66d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f66d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f66dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f66dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f66e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f66e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f66e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f66e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f66e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f66e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f66ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f66ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f66f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f66f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f66f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f66f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f66f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f66f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f66fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f66fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6700:
    // 0x2f6700: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x2f6700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2f6704: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f6704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6708: 0xc0aa790  jal         func_2A9E40
    ctx->pc = 0x2F6708u;
    SET_GPR_U32(ctx, 31, 0x2F6710u);
    ctx->pc = 0x2F670Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6708u;
            // 0x2f670c: 0x24441c24  addiu       $a0, $v0, 0x1C24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7204));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E40u;
    if (runtime->hasFunction(0x2A9E40u)) {
        auto targetFn = runtime->lookupFunction(0x2A9E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6710u; }
        if (ctx->pc != 0x2F6710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsNumID__9CEditDataFi_0x2a9e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6710u; }
        if (ctx->pc != 0x2F6710u) { return; }
    }
    ctx->pc = 0x2F6710u;
label_2f6710:
    // 0x2f6710: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2f6710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f6714: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f6714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f6718: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x2f6718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2f671c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F671Cu;
    {
        const bool branch_taken_0x2f671c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F671Cu;
            // 0x2f6720: 0x26525510  addiu       $s2, $s2, 0x5510 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 21776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f671c) {
            ctx->pc = 0x2F6700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6700;
        }
    }
    ctx->pc = 0x2F6724u;
    // 0x2f6724: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f6724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6728: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f6728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f672c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f672cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6730: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f6730u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6734: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f6734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6738: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f6738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f673c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f673cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6740: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6740u;
            // 0x2f6744: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6748u;
}
