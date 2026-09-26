#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMenuBigNum__FPci
// Address: 0x21ce30 - 0x21cf28
void SetMenuBigNum__FPci_0x21ce30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMenuBigNum__FPci_0x21ce30");
#endif

    switch (ctx->pc) {
        case 0x21ce64u: goto label_21ce64;
        case 0x21ce70u: goto label_21ce70;
        case 0x21ce84u: goto label_21ce84;
        case 0x21ce98u: goto label_21ce98;
        case 0x21cea8u: goto label_21cea8;
        case 0x21ceb0u: goto label_21ceb0;
        case 0x21ceccu: goto label_21cecc;
        default: break;
    }

    ctx->pc = 0x21ce30u;

    // 0x21ce30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21ce30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21ce34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x21ce34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x21ce38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21ce38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21ce3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21ce3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21ce40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21ce40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21ce44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21ce44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21ce4c: 0x1260002e  beqz        $s3, . + 4 + (0x2E << 2)
    ctx->pc = 0x21CE4Cu;
    {
        const bool branch_taken_0x21ce4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE4Cu;
            // 0x21ce50: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce4c) {
            ctx->pc = 0x21CF08u;
            goto label_21cf08;
        }
    }
    ctx->pc = 0x21CE54u;
    // 0x21ce54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21ce54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce58: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x21ce58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce5c: 0xc0945b0  jal         func_2516C0
    ctx->pc = 0x21CE5Cu;
    SET_GPR_U32(ctx, 31, 0x21CE64u);
    ctx->pc = 0x21CE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE5Cu;
            // 0x21ce60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2516C0u;
    if (runtime->hasFunction(0x2516C0u)) {
        auto targetFn = runtime->lookupFunction(0x2516C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE64u; }
        if (ctx->pc != 0x21CE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumberKeta__Fi_0x2516c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE64u; }
        if (ctx->pc != 0x21CE64u) { return; }
    }
    ctx->pc = 0x21CE64u;
label_21ce64:
    // 0x21ce64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21ce64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce68: 0x1a400025  blez        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x21CE68u;
    {
        const bool branch_taken_0x21ce68 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x21ce68) {
            ctx->pc = 0x21CF00u;
            goto label_21cf00;
        }
    }
    ctx->pc = 0x21CE70u;
label_21ce70:
    // 0x21ce70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ce74: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21CE74u;
    {
        const bool branch_taken_0x21ce74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x21CE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE74u;
            // 0x21ce78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce74) {
            ctx->pc = 0x21CE8Cu;
            goto label_21ce8c;
        }
    }
    ctx->pc = 0x21CE7Cu;
    // 0x21ce7c: 0xc087380  jal         func_21CE00
    ctx->pc = 0x21CE7Cu;
    SET_GPR_U32(ctx, 31, 0x21CE84u);
    ctx->pc = 0x21CE00u;
    if (runtime->hasFunction(0x21CE00u)) {
        auto targetFn = runtime->lookupFunction(0x21CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE84u; }
        if (ctx->pc != 0x21CE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuBigNum__Fi_0x21ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE84u; }
        if (ctx->pc != 0x21CE84u) { return; }
    }
    ctx->pc = 0x21CE84u;
label_21ce84:
    // 0x21ce84: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x21CE84u;
    {
        const bool branch_taken_0x21ce84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ce84) {
            ctx->pc = 0x21CEDCu;
            goto label_21cedc;
        }
    }
    ctx->pc = 0x21CE8Cu;
label_21ce8c:
    // 0x21ce8c: 0x0  nop
    ctx->pc = 0x21ce8cu;
    // NOP
    // 0x21ce90: 0xc0a215c  jal         func_288570
    ctx->pc = 0x21CE90u;
    SET_GPR_U32(ctx, 31, 0x21CE98u);
    ctx->pc = 0x21CE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE90u;
            // 0x21ce94: 0x2644ffff  addiu       $a0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE98u; }
        if (ctx->pc != 0x21CE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE98u; }
        if (ctx->pc != 0x21CE98u) { return; }
    }
    ctx->pc = 0x21CE98u;
label_21ce98:
    // 0x21ce98: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x21ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
    // 0x21ce9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21ce9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cea0: 0xc047ae6  jal         func_11EB98
    ctx->pc = 0x21CEA0u;
    SET_GPR_U32(ctx, 31, 0x21CEA8u);
    ctx->pc = 0x21CEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CEA0u;
            // 0x21cea4: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EB98u;
    if (runtime->hasFunction(0x11EB98u)) {
        auto targetFn = runtime->lookupFunction(0x11EB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CEA8u; }
        if (ctx->pc != 0x21CEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pow_0x11eb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CEA8u; }
        if (ctx->pc != 0x21CEA8u) { return; }
    }
    ctx->pc = 0x21CEA8u;
label_21cea8:
    // 0x21cea8: 0xc0a218a  jal         func_288628
    ctx->pc = 0x21CEA8u;
    SET_GPR_U32(ctx, 31, 0x21CEB0u);
    ctx->pc = 0x21CEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CEA8u;
            // 0x21ceac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CEB0u; }
        if (ctx->pc != 0x21CEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CEB0u; }
        if (ctx->pc != 0x21CEB0u) { return; }
    }
    ctx->pc = 0x21CEB0u;
label_21ceb0:
    // 0x21ceb0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x21ceb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ceb4: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x21CEB4u;
    {
        const bool branch_taken_0x21ceb4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CEB4u;
            // 0x21ceb8: 0x214001a  div         $zero, $s0, $s4 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ceb4) {
            ctx->pc = 0x21CEC0u;
            goto label_21cec0;
        }
    }
    ctx->pc = 0x21CEBCu;
    // 0x21cebc: 0x1cd  break       0, 7
    ctx->pc = 0x21cebcu;
    runtime->handleBreak(rdram, ctx);
label_21cec0:
    // 0x21cec0: 0x2012  mflo        $a0
    ctx->pc = 0x21cec0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x21cec4: 0xc087380  jal         func_21CE00
    ctx->pc = 0x21CEC4u;
    SET_GPR_U32(ctx, 31, 0x21CECCu);
    ctx->pc = 0x21CE00u;
    if (runtime->hasFunction(0x21CE00u)) {
        auto targetFn = runtime->lookupFunction(0x21CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CECCu; }
        if (ctx->pc != 0x21CECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuBigNum__Fi_0x21ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CECCu; }
        if (ctx->pc != 0x21CECCu) { return; }
    }
    ctx->pc = 0x21CECCu;
label_21cecc:
    // 0x21cecc: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x21CECCu;
    {
        const bool branch_taken_0x21cecc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CECCu;
            // 0x21ced0: 0x214001a  div         $zero, $s0, $s4 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cecc) {
            ctx->pc = 0x21CED8u;
            goto label_21ced8;
        }
    }
    ctx->pc = 0x21CED4u;
    // 0x21ced4: 0x1cd  break       0, 7
    ctx->pc = 0x21ced4u;
    runtime->handleBreak(rdram, ctx);
label_21ced8:
    // 0x21ced8: 0x8010  mfhi        $s0
    ctx->pc = 0x21ced8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_21cedc:
    // 0x21cedc: 0x0  nop
    ctx->pc = 0x21cedcu;
    // NOP
    // 0x21cee0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x21cee0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21cee4: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x21cee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x21cee8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x21cee8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x21ceec: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x21ceecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x21cef0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x21cef0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x21cef4: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x21cef4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x21cef8: 0x1e40ffdd  bgtz        $s2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x21CEF8u;
    {
        const bool branch_taken_0x21cef8 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x21CEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CEF8u;
            // 0x21cefc: 0xa0830001  sb          $v1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cef8) {
            ctx->pc = 0x21CE70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ce70;
        }
    }
    ctx->pc = 0x21CF00u;
label_21cf00:
    // 0x21cf00: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x21cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x21cf04: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x21cf04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_21cf08:
    // 0x21cf08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21cf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21cf0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21cf0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21cf10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21cf10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cf14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21cf14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cf18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21cf18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cf1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21cf1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cf20: 0x3e00008  jr          $ra
    ctx->pc = 0x21CF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF20u;
            // 0x21cf24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CF28u;
}
