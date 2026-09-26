#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawDigit__6ClsMesFP11mgCDrawPrimiiiiP10RGBAQ_TYPE
// Address: 0x15abb0 - 0x15ad00
void DrawDigit__6ClsMesFP11mgCDrawPrimiiiiP10RGBAQ_TYPE_0x15abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawDigit__6ClsMesFP11mgCDrawPrimiiiiP10RGBAQ_TYPE_0x15abb0");
#endif

    switch (ctx->pc) {
        case 0x15ac8cu: goto label_15ac8c;
        case 0x15ac9cu: goto label_15ac9c;
        case 0x15aca8u: goto label_15aca8;
        case 0x15acb0u: goto label_15acb0;
        case 0x15acc8u: goto label_15acc8;
        case 0x15acdcu: goto label_15acdc;
        default: break;
    }

    ctx->pc = 0x15abb0u;

    // 0x15abb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15abb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x15abb4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15abb8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15abb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15abbc: 0x921fc  dsll32      $a0, $t1, 7
    ctx->pc = 0x15abbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 7));
    // 0x15abc0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15abc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15abc4: 0x244245e0  addiu       $v0, $v0, 0x45E0
    ctx->pc = 0x15abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17888));
    // 0x15abc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15abc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15abcc: 0x27ac0070  addiu       $t4, $sp, 0x70
    ctx->pc = 0x15abccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15abd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15abd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15abd4: 0x27a3007c  addiu       $v1, $sp, 0x7C
    ctx->pc = 0x15abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15abd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15abd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15abdc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15abdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15abe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15abe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15abe4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x15abe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15abe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15abe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15abec: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x15abecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x15abf0: 0x784b0000  lq          $t3, 0x0($v0)
    ctx->pc = 0x15abf0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15abf4: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x15abf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15abf8: 0x939c0  sll         $a3, $t1, 7
    ctx->pc = 0x15abf8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 7));
    // 0x15abfc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x15abfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac00: 0x657c2  srl         $t2, $a2, 31
    ctx->pc = 0x15ac00u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x15ac04: 0x421ff  dsra32      $a0, $a0, 7
    ctx->pc = 0x15ac04u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 7));
    // 0x15ac08: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15ac0c: 0x7d8b0000  sq          $t3, 0x0($t4)
    ctx->pc = 0x15ac0cu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 11));
    // 0x15ac10: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x15ac10u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15ac14: 0x8cab0000  lw          $t3, 0x0($a1)
    ctx->pc = 0x15ac14u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15ac18: 0x8fa90070  lw          $t1, 0x70($sp)
    ctx->pc = 0x15ac18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15ac1c: 0x6010  mfhi        $t4
    ctx->pc = 0x15ac1cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x15ac20: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x15ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x15ac24: 0x34486667  ori         $t0, $v0, 0x6667
    ctx->pc = 0x15ac24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x15ac28: 0x27a20074  addiu       $v0, $sp, 0x74
    ctx->pc = 0x15ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x15ac2c: 0x18b5818  mult        $t3, $t4, $t3
    ctx->pc = 0x15ac2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x15ac30: 0x1060018  mult        $zero, $t0, $a2
    ctx->pc = 0x15ac30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15ac34: 0x12b3021  addu        $a2, $t1, $t3
    ctx->pc = 0x15ac34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x15ac38: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x15ac38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x15ac3c: 0x4810  mfhi        $t1
    ctx->pc = 0x15ac3cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x15ac40: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x15ac40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ac44: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15ac44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ac48: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x15ac48u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
    // 0x15ac4c: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x15ac4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x15ac50: 0x71284018  mult1       $t0, $t1, $t0
    ctx->pc = 0x15ac50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x15ac54: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x15ac54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x15ac58: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AC58u;
    {
        const bool branch_taken_0x15ac58 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x15AC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC58u;
            // 0x15ac5c: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac58) {
            ctx->pc = 0x15AC68u;
            goto label_15ac68;
        }
    }
    ctx->pc = 0x15AC60u;
    // 0x15ac60: 0x24e4007f  addiu       $a0, $a3, 0x7F
    ctx->pc = 0x15ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
    // 0x15ac64: 0x421c3  sra         $a0, $a0, 7
    ctx->pc = 0x15ac64u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
label_15ac68:
    // 0x15ac68: 0xa2040003  sb          $a0, 0x3($s0)
    ctx->pc = 0x15ac68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x15ac6c: 0x8cb50000  lw          $s5, 0x0($a1)
    ctx->pc = 0x15ac6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15ac70: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15ac74: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x15ac74u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ac78: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15ac78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ac7c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x15ac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15ac80: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x15ac80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac84: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x15AC84u;
    SET_GPR_U32(ctx, 31, 0x15AC8Cu);
    ctx->pc = 0x15AC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC84u;
            // 0x15ac88: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AC8Cu; }
        if (ctx->pc != 0x15AC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AC8Cu; }
        if (ctx->pc != 0x15AC8Cu) { return; }
    }
    ctx->pc = 0x15AC8Cu;
label_15ac8c:
    // 0x15ac8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ac8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac90: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x15ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15ac94: 0xc0a215c  jal         func_288570
    ctx->pc = 0x15AC94u;
    SET_GPR_U32(ctx, 31, 0x15AC9Cu);
    ctx->pc = 0x15AC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC94u;
            // 0x15ac98: 0x2883c  dsll32      $s1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AC9Cu; }
        if (ctx->pc != 0x15AC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AC9Cu; }
        if (ctx->pc != 0x15AC9Cu) { return; }
    }
    ctx->pc = 0x15AC9Cu;
label_15ac9c:
    // 0x15ac9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ac9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aca0: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x15ACA0u;
    SET_GPR_U32(ctx, 31, 0x15ACA8u);
    ctx->pc = 0x15ACA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ACA0u;
            // 0x15aca4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACA8u; }
        if (ctx->pc != 0x15ACA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACA8u; }
        if (ctx->pc != 0x15ACA8u) { return; }
    }
    ctx->pc = 0x15ACA8u;
label_15aca8:
    // 0x15aca8: 0xc0a218a  jal         func_288628
    ctx->pc = 0x15ACA8u;
    SET_GPR_U32(ctx, 31, 0x15ACB0u);
    ctx->pc = 0x15ACACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ACA8u;
            // 0x15acac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACB0u; }
        if (ctx->pc != 0x15ACB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACB0u; }
        if (ctx->pc != 0x15ACB0u) { return; }
    }
    ctx->pc = 0x15ACB0u;
label_15acb0:
    // 0x15acb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15acb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15acb4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15acb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15acb8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x15acb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15acbc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x15acbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15acc0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x15ACC0u;
    SET_GPR_U32(ctx, 31, 0x15ACC8u);
    ctx->pc = 0x15ACC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ACC0u;
            // 0x15acc4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACC8u; }
        if (ctx->pc != 0x15ACC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACC8u; }
        if (ctx->pc != 0x15ACC8u) { return; }
    }
    ctx->pc = 0x15ACC8u;
label_15acc8:
    // 0x15acc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15acc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15accc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15acccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15acd0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15acd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15acd4: 0xc054590  jal         func_151640
    ctx->pc = 0x15ACD4u;
    SET_GPR_U32(ctx, 31, 0x15ACDCu);
    ctx->pc = 0x15ACD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ACD4u;
            // 0x15acd8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151640u;
    if (runtime->hasFunction(0x151640u)) {
        auto targetFn = runtime->lookupFunction(0x151640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACDCu; }
        if (ctx->pc != 0x15ACDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasy__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACDCu; }
        if (ctx->pc != 0x15ACDCu) { return; }
    }
    ctx->pc = 0x15ACDCu;
label_15acdc:
    // 0x15acdc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15acdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15ace0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15ace0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15ace4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15ace4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15ace8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15ace8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15acec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15acecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15acf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15acf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15acf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15acf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15acf8: 0x3e00008  jr          $ra
    ctx->pc = 0x15ACF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ACFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ACF8u;
            // 0x15acfc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15AD00u;
}
