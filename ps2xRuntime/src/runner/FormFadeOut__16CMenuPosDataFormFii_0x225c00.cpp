#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FormFadeOut__16CMenuPosDataFormFii
// Address: 0x225c00 - 0x225c9c
void FormFadeOut__16CMenuPosDataFormFii_0x225c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FormFadeOut__16CMenuPosDataFormFii_0x225c00");
#endif

    switch (ctx->pc) {
        case 0x225c3cu: goto label_225c3c;
        case 0x225c4cu: goto label_225c4c;
        case 0x225c84u: goto label_225c84;
        default: break;
    }

    ctx->pc = 0x225c00u;

    // 0x225c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x225c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x225c04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x225c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x225c08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x225c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x225c0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x225c10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x225c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225c18: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x225C18u;
    {
        const bool branch_taken_0x225c18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x225C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225C18u;
            // 0x225c1c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c18) {
            ctx->pc = 0x225C5Cu;
            goto label_225c5c;
        }
    }
    ctx->pc = 0x225C20u;
    // 0x225c20: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x225c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x225c24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x225c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c28: 0xa2420055  sb          $v0, 0x55($s2)
    ctx->pc = 0x225c28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x225c2c: 0xa2420056  sb          $v0, 0x56($s2)
    ctx->pc = 0x225c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 86), (uint8_t)GPR_U32(ctx, 2));
    // 0x225c30: 0xa2420057  sb          $v0, 0x57($s2)
    ctx->pc = 0x225c30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 87), (uint8_t)GPR_U32(ctx, 2));
    // 0x225c34: 0xa2420058  sb          $v0, 0x58($s2)
    ctx->pc = 0x225c34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x225c38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x225c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_225c3c:
    // 0x225c3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x225c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x225c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c44: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x225C44u;
    SET_GPR_U32(ctx, 31, 0x225C4Cu);
    ctx->pc = 0x225C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225C44u;
            // 0x225c48: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225C4Cu; }
        if (ctx->pc != 0x225C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225C4Cu; }
        if (ctx->pc != 0x225C4Cu) { return; }
    }
    ctx->pc = 0x225C4Cu;
label_225c4c:
    // 0x225c4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225c50: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x225c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x225c54: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x225C54u;
    {
        const bool branch_taken_0x225c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225C54u;
            // 0x225c58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c54) {
            ctx->pc = 0x225C3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225c3c;
        }
    }
    ctx->pc = 0x225C5Cu;
label_225c5c:
    // 0x225c5c: 0x0  nop
    ctx->pc = 0x225c5cu;
    // NOP
    // 0x225c60: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x225c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x225c64: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x225C64u;
    {
        const bool branch_taken_0x225c64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x225C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225C64u;
            // 0x225c68: 0x51001a  div         $zero, $v0, $s1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c64) {
            ctx->pc = 0x225C70u;
            goto label_225c70;
        }
    }
    ctx->pc = 0x225C6Cu;
    // 0x225c6c: 0x1cd  break       0, 7
    ctx->pc = 0x225c6cu;
    runtime->handleBreak(rdram, ctx);
label_225c70:
    // 0x225c70: 0x3012  mflo        $a2
    ctx->pc = 0x225c70u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x225c74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x225c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x225c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225c7c: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x225C7Cu;
    SET_GPR_U32(ctx, 31, 0x225C84u);
    ctx->pc = 0x225C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225C7Cu;
            // 0x225c80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225C84u; }
        if (ctx->pc != 0x225C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225C84u; }
        if (ctx->pc != 0x225C84u) { return; }
    }
    ctx->pc = 0x225C84u;
label_225c84:
    // 0x225c84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x225c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225c88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225c88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225c8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225c8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225c90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225c94: 0x3e00008  jr          $ra
    ctx->pc = 0x225C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225C94u;
            // 0x225c98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225C9Cu;
}
