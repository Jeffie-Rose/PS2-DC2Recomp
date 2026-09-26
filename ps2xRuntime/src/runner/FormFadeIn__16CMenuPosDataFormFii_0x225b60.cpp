#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FormFadeIn__16CMenuPosDataFormFii
// Address: 0x225b60 - 0x225bfc
void FormFadeIn__16CMenuPosDataFormFii_0x225b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FormFadeIn__16CMenuPosDataFormFii_0x225b60");
#endif

    switch (ctx->pc) {
        case 0x225b9cu: goto label_225b9c;
        case 0x225bacu: goto label_225bac;
        case 0x225be4u: goto label_225be4;
        default: break;
    }

    ctx->pc = 0x225b60u;

    // 0x225b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x225b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x225b64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x225b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x225b68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x225b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x225b6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x225b70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x225b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225b78: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x225B78u;
    {
        const bool branch_taken_0x225b78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225B78u;
            // 0x225b7c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b78) {
            ctx->pc = 0x225BBCu;
            goto label_225bbc;
        }
    }
    ctx->pc = 0x225B80u;
    // 0x225b80: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x225b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x225b84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x225b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b88: 0xa2420055  sb          $v0, 0x55($s2)
    ctx->pc = 0x225b88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x225b8c: 0xa2420056  sb          $v0, 0x56($s2)
    ctx->pc = 0x225b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 86), (uint8_t)GPR_U32(ctx, 2));
    // 0x225b90: 0xa2420057  sb          $v0, 0x57($s2)
    ctx->pc = 0x225b90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 87), (uint8_t)GPR_U32(ctx, 2));
    // 0x225b94: 0xa2400058  sb          $zero, 0x58($s2)
    ctx->pc = 0x225b94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x225b98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x225b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_225b9c:
    // 0x225b9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x225b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ba0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x225ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ba4: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x225BA4u;
    SET_GPR_U32(ctx, 31, 0x225BACu);
    ctx->pc = 0x225BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225BA4u;
            // 0x225ba8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225BACu; }
        if (ctx->pc != 0x225BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225BACu; }
        if (ctx->pc != 0x225BACu) { return; }
    }
    ctx->pc = 0x225BACu;
label_225bac:
    // 0x225bac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225bb0: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x225bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x225bb4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x225BB4u;
    {
        const bool branch_taken_0x225bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225BB4u;
            // 0x225bb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225bb4) {
            ctx->pc = 0x225B9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225b9c;
        }
    }
    ctx->pc = 0x225BBCu;
label_225bbc:
    // 0x225bbc: 0x0  nop
    ctx->pc = 0x225bbcu;
    // NOP
    // 0x225bc0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x225bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x225bc4: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x225BC4u;
    {
        const bool branch_taken_0x225bc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x225BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225BC4u;
            // 0x225bc8: 0x51001a  div         $zero, $v0, $s1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225bc4) {
            ctx->pc = 0x225BD0u;
            goto label_225bd0;
        }
    }
    ctx->pc = 0x225BCCu;
    // 0x225bcc: 0x1cd  break       0, 7
    ctx->pc = 0x225bccu;
    runtime->handleBreak(rdram, ctx);
label_225bd0:
    // 0x225bd0: 0x3012  mflo        $a2
    ctx->pc = 0x225bd0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x225bd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x225bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225bd8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x225bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225bdc: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x225BDCu;
    SET_GPR_U32(ctx, 31, 0x225BE4u);
    ctx->pc = 0x225BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225BDCu;
            // 0x225be0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225BE4u; }
        if (ctx->pc != 0x225BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225BE4u; }
        if (ctx->pc != 0x225BE4u) { return; }
    }
    ctx->pc = 0x225BE4u;
label_225be4:
    // 0x225be4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x225be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225be8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225be8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225bec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225bf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x225BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225BF4u;
            // 0x225bf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225BFCu;
}
